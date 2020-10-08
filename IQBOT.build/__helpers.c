// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 1 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 1; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 1 * sizeof(PyObject *) );
            memcpy( python_pars + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 1 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 1 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 1; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 1 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 1 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 1 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 1, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 1 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 1 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 2 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 2; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 2 * sizeof(PyObject *) );
            memcpy( python_pars + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 2 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 2 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 2; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 2 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 2 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 2 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 2, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 2 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 2 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 3 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 3; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 3 * sizeof(PyObject *) );
            memcpy( python_pars + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 3 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 3 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 3; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 3 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 3 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 3 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 3, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 3 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 3 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 4 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 4; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 4 * sizeof(PyObject *) );
            memcpy( python_pars + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 4 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 4 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 4; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 4 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 4 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 4 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 4, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 4 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 4 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 5 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 5; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 5 * sizeof(PyObject *) );
            memcpy( python_pars + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 5 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 5 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 5; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 5 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 5 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 5 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 5, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 5 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 5 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 6 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 6; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 6 * sizeof(PyObject *) );
            memcpy( python_pars + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 6 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 6 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 6; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 6 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 6 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 6 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 6, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 6 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 6 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS7( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 7; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 7 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 7; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 7 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 7 * sizeof(PyObject *) );
            memcpy( python_pars + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 7 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 7 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 7; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 7 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 7 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 7 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 7 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (7 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 7 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (7 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 7 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 7, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 7 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            7
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 7 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 8; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 8 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 8; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 8 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 8 * sizeof(PyObject *) );
            memcpy( python_pars + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 8 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 8 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 8; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 8 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 8 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 8 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 8 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (8 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 8 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (8 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 8 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 8, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 8 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            8
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 8 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS9( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 9; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 9 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 9; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 9 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 9 * sizeof(PyObject *) );
            memcpy( python_pars + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 9 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 9 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 9; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 9 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 9 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 9 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 9 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (9 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 9 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (9 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 9 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 9, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 9 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            9
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 9 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS10( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 10; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 10 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 10; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 10 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 10 * sizeof(PyObject *) );
            memcpy( python_pars + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 10 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 10 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 10; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 10 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 10 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 10 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 10 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (10 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 10 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (10 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 10 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 10, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 10 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            10
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 10 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS11( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 11; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 11 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 11; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 11 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 11 * sizeof(PyObject *) );
            memcpy( python_pars + 11, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 11 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 11 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 11; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 11 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 11 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 11, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 11 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 11 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (11 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 11 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (11 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 11 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 11, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 11 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            11
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 11 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS20( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 20; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 20 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 20; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 20 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 20 * sizeof(PyObject *) );
            memcpy( python_pars + 20, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 20 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 20 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 20; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 20 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 20 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 20, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 20 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 20 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (20 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 20 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (20 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 20 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 20, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 20 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            20
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 20 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS52( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 52; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 52 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 52; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 52 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 52 * sizeof(PyObject *) );
            memcpy( python_pars + 52, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 52 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 52 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 52; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 52 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 52 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 52, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 52 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 52 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (52 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 52 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (52 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 52 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 52, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 52 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            52
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 52 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_METHOD_WITH_ARGS1( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    1
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS1( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    1
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS1( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS1( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS2( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    2
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS2( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    2
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS2( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS2( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS3( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    3
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS3( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    3
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS3( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS3( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS4( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    4
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS4( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    4
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS4( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS4( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS5( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    5
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS5( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    5
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS5( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS5( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS5(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS5(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS6( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    6
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS6( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    6
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS6( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS6( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS6(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS6(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS7( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 7; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    7
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS7( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    7
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS7( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS7( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS7(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS7(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS8( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 8; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    8
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS8( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    8
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS8( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS8( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS8(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS8(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS9( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 9; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    9
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS9( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    9
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS9( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS9( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS9(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS9(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS9(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS52( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 52; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS52(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS52(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    52
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS52(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS52(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS52( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    52
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS52( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS52( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS52(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS52(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS52(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
MOD_INIT_DECL(__main__);
MOD_ENTRY_DECL(atomicwrites);
MOD_ENTRY_DECL(attr);
MOD_ENTRY_DECL(attr$_compat);
MOD_ENTRY_DECL(attr$_config);
MOD_ENTRY_DECL(attr$_funcs);
MOD_ENTRY_DECL(attr$_make);
MOD_ENTRY_DECL(attr$_version_info);
MOD_ENTRY_DECL(attr$converters);
MOD_ENTRY_DECL(attr$exceptions);
MOD_ENTRY_DECL(attr$filters);
MOD_ENTRY_DECL(attr$validators);
MOD_ENTRY_DECL(certifi);
MOD_ENTRY_DECL(certifi$core);
MOD_ENTRY_DECL(cffi);
MOD_ENTRY_DECL(cffi$api);
MOD_ENTRY_DECL(cffi$cffi_opcode);
MOD_ENTRY_DECL(cffi$commontypes);
MOD_ENTRY_DECL(cffi$cparser);
MOD_ENTRY_DECL(cffi$error);
MOD_ENTRY_DECL(cffi$ffiplatform);
MOD_ENTRY_DECL(cffi$lock);
MOD_ENTRY_DECL(cffi$model);
MOD_ENTRY_DECL(cffi$pkgconfig);
MOD_ENTRY_DECL(cffi$recompiler);
MOD_ENTRY_DECL(cffi$vengine_cpy);
MOD_ENTRY_DECL(cffi$vengine_gen);
MOD_ENTRY_DECL(cffi$verifier);
MOD_ENTRY_DECL(chardet);
MOD_ENTRY_DECL(chardet$big5freq);
MOD_ENTRY_DECL(chardet$big5prober);
MOD_ENTRY_DECL(chardet$chardistribution);
MOD_ENTRY_DECL(chardet$charsetgroupprober);
MOD_ENTRY_DECL(chardet$charsetprober);
MOD_ENTRY_DECL(chardet$codingstatemachine);
MOD_ENTRY_DECL(chardet$compat);
MOD_ENTRY_DECL(chardet$cp949prober);
MOD_ENTRY_DECL(chardet$enums);
MOD_ENTRY_DECL(chardet$escprober);
MOD_ENTRY_DECL(chardet$escsm);
MOD_ENTRY_DECL(chardet$eucjpprober);
MOD_ENTRY_DECL(chardet$euckrfreq);
MOD_ENTRY_DECL(chardet$euckrprober);
MOD_ENTRY_DECL(chardet$euctwfreq);
MOD_ENTRY_DECL(chardet$euctwprober);
MOD_ENTRY_DECL(chardet$gb2312freq);
MOD_ENTRY_DECL(chardet$gb2312prober);
MOD_ENTRY_DECL(chardet$hebrewprober);
MOD_ENTRY_DECL(chardet$jisfreq);
MOD_ENTRY_DECL(chardet$jpcntx);
MOD_ENTRY_DECL(chardet$langbulgarianmodel);
MOD_ENTRY_DECL(chardet$langcyrillicmodel);
MOD_ENTRY_DECL(chardet$langgreekmodel);
MOD_ENTRY_DECL(chardet$langhebrewmodel);
MOD_ENTRY_DECL(chardet$langthaimodel);
MOD_ENTRY_DECL(chardet$langturkishmodel);
MOD_ENTRY_DECL(chardet$latin1prober);
MOD_ENTRY_DECL(chardet$mbcharsetprober);
MOD_ENTRY_DECL(chardet$mbcsgroupprober);
MOD_ENTRY_DECL(chardet$mbcssm);
MOD_ENTRY_DECL(chardet$sbcharsetprober);
MOD_ENTRY_DECL(chardet$sbcsgroupprober);
MOD_ENTRY_DECL(chardet$sjisprober);
MOD_ENTRY_DECL(chardet$universaldetector);
MOD_ENTRY_DECL(chardet$utf8prober);
MOD_ENTRY_DECL(chardet$version);
MOD_ENTRY_DECL(gspread);
MOD_ENTRY_DECL(gspread$client);
MOD_ENTRY_DECL(gspread$exceptions);
MOD_ENTRY_DECL(gspread$models);
MOD_ENTRY_DECL(gspread$urls);
MOD_ENTRY_DECL(gspread$utils);
MOD_ENTRY_DECL(httplib2);
MOD_ENTRY_DECL(httplib2$certs);
MOD_ENTRY_DECL(httplib2$iri2uri);
MOD_ENTRY_DECL(httplib2$socks);
MOD_ENTRY_DECL(idna);
MOD_ENTRY_DECL(idna$core);
MOD_ENTRY_DECL(idna$idnadata);
MOD_ENTRY_DECL(idna$intranges);
MOD_ENTRY_DECL(idna$package_data);
MOD_ENTRY_DECL(idna$uts46data);
MOD_ENTRY_DECL(importlib_metadata);
MOD_ENTRY_DECL(importlib_metadata$_compat);
MOD_ENTRY_DECL(iqoptionapi);
MOD_ENTRY_DECL(iqoptionapi$api);
MOD_ENTRY_DECL(iqoptionapi$constants);
MOD_ENTRY_DECL(iqoptionapi$expiration);
MOD_ENTRY_DECL(iqoptionapi$global_value);
MOD_ENTRY_DECL(iqoptionapi$http);
MOD_ENTRY_DECL(iqoptionapi$http$appinit);
MOD_ENTRY_DECL(iqoptionapi$http$auth);
MOD_ENTRY_DECL(iqoptionapi$http$billing);
MOD_ENTRY_DECL(iqoptionapi$http$buyback);
MOD_ENTRY_DECL(iqoptionapi$http$changebalance);
MOD_ENTRY_DECL(iqoptionapi$http$getprofile);
MOD_ENTRY_DECL(iqoptionapi$http$login);
MOD_ENTRY_DECL(iqoptionapi$http$loginv2);
MOD_ENTRY_DECL(iqoptionapi$http$profile);
MOD_ENTRY_DECL(iqoptionapi$http$resource);
MOD_ENTRY_DECL(iqoptionapi$http$token);
MOD_ENTRY_DECL(iqoptionapi$stable_api);
MOD_ENTRY_DECL(iqoptionapi$ws);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$api_game_betinfo);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$api_game_getoptions);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$base);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$buy_place_order_temp);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$buyv2);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$buyv3);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$cancel_order);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$candles);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$change_auto_margin_call);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$change_tpsl);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$close_position);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$digital_option);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$get_available_leverages);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$get_deferred_orders);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$get_financial_information);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$get_order);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$get_overnight_fee);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$get_positions);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$heartbeat);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$instruments);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$sell_option);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$setactives);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$ssid);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$strike_list);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$subscribe);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$traders_mood);
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$unsubscribe);
MOD_ENTRY_DECL(iqoptionapi$ws$client);
MOD_ENTRY_DECL(iqoptionapi$ws$objects);
MOD_ENTRY_DECL(iqoptionapi$ws$objects$base);
MOD_ENTRY_DECL(iqoptionapi$ws$objects$betinfo);
MOD_ENTRY_DECL(iqoptionapi$ws$objects$candles);
MOD_ENTRY_DECL(iqoptionapi$ws$objects$listinfodata);
MOD_ENTRY_DECL(iqoptionapi$ws$objects$profile);
MOD_ENTRY_DECL(iqoptionapi$ws$objects$timesync);
MOD_ENTRY_DECL(more_itertools);
MOD_ENTRY_DECL(more_itertools$more);
MOD_ENTRY_DECL(more_itertools$recipes);
MOD_ENTRY_DECL(numpy);
MOD_ENTRY_DECL(numpy$__config__);
MOD_ENTRY_DECL(numpy$_distributor_init);
MOD_ENTRY_DECL(numpy$_globals);
MOD_ENTRY_DECL(numpy$_pytesttester);
MOD_ENTRY_DECL(numpy$compat);
MOD_ENTRY_DECL(numpy$compat$_inspect);
MOD_ENTRY_DECL(numpy$compat$py3k);
MOD_ENTRY_DECL(numpy$core);
MOD_ENTRY_DECL(numpy$core$_add_newdocs);
MOD_ENTRY_DECL(numpy$core$_asarray);
MOD_ENTRY_DECL(numpy$core$_dtype);
MOD_ENTRY_DECL(numpy$core$_dtype_ctypes);
MOD_ENTRY_DECL(numpy$core$_exceptions);
MOD_ENTRY_DECL(numpy$core$_internal);
MOD_ENTRY_DECL(numpy$core$_methods);
MOD_ENTRY_DECL(numpy$core$_string_helpers);
MOD_ENTRY_DECL(numpy$core$_type_aliases);
MOD_ENTRY_DECL(numpy$core$_ufunc_config);
MOD_ENTRY_DECL(numpy$core$arrayprint);
MOD_ENTRY_DECL(numpy$core$defchararray);
MOD_ENTRY_DECL(numpy$core$einsumfunc);
MOD_ENTRY_DECL(numpy$core$fromnumeric);
MOD_ENTRY_DECL(numpy$core$function_base);
MOD_ENTRY_DECL(numpy$core$getlimits);
MOD_ENTRY_DECL(numpy$core$info);
MOD_ENTRY_DECL(numpy$core$machar);
MOD_ENTRY_DECL(numpy$core$memmap);
MOD_ENTRY_DECL(numpy$core$multiarray);
MOD_ENTRY_DECL(numpy$core$numeric);
MOD_ENTRY_DECL(numpy$core$numerictypes);
MOD_ENTRY_DECL(numpy$core$overrides);
MOD_ENTRY_DECL(numpy$core$records);
MOD_ENTRY_DECL(numpy$core$shape_base);
MOD_ENTRY_DECL(numpy$core$umath);
MOD_ENTRY_DECL(numpy$ctypeslib);
MOD_ENTRY_DECL(numpy$dual);
MOD_ENTRY_DECL(numpy$fft);
MOD_ENTRY_DECL(numpy$fft$helper);
MOD_ENTRY_DECL(numpy$fft$info);
MOD_ENTRY_DECL(numpy$fft$pocketfft);
MOD_ENTRY_DECL(numpy$lib);
MOD_ENTRY_DECL(numpy$lib$_datasource);
MOD_ENTRY_DECL(numpy$lib$_iotools);
MOD_ENTRY_DECL(numpy$lib$_version);
MOD_ENTRY_DECL(numpy$lib$arraypad);
MOD_ENTRY_DECL(numpy$lib$arraysetops);
MOD_ENTRY_DECL(numpy$lib$arrayterator);
MOD_ENTRY_DECL(numpy$lib$financial);
MOD_ENTRY_DECL(numpy$lib$format);
MOD_ENTRY_DECL(numpy$lib$function_base);
MOD_ENTRY_DECL(numpy$lib$histograms);
MOD_ENTRY_DECL(numpy$lib$index_tricks);
MOD_ENTRY_DECL(numpy$lib$info);
MOD_ENTRY_DECL(numpy$lib$mixins);
MOD_ENTRY_DECL(numpy$lib$nanfunctions);
MOD_ENTRY_DECL(numpy$lib$npyio);
MOD_ENTRY_DECL(numpy$lib$polynomial);
MOD_ENTRY_DECL(numpy$lib$scimath);
MOD_ENTRY_DECL(numpy$lib$shape_base);
MOD_ENTRY_DECL(numpy$lib$stride_tricks);
MOD_ENTRY_DECL(numpy$lib$twodim_base);
MOD_ENTRY_DECL(numpy$lib$type_check);
MOD_ENTRY_DECL(numpy$lib$ufunclike);
MOD_ENTRY_DECL(numpy$lib$utils);
MOD_ENTRY_DECL(numpy$linalg);
MOD_ENTRY_DECL(numpy$linalg$info);
MOD_ENTRY_DECL(numpy$linalg$linalg);
MOD_ENTRY_DECL(numpy$ma);
MOD_ENTRY_DECL(numpy$ma$core);
MOD_ENTRY_DECL(numpy$ma$extras);
MOD_ENTRY_DECL(numpy$ma$mrecords);
MOD_ENTRY_DECL(numpy$matrixlib);
MOD_ENTRY_DECL(numpy$matrixlib$defmatrix);
MOD_ENTRY_DECL(numpy$polynomial);
MOD_ENTRY_DECL(numpy$polynomial$_polybase);
MOD_ENTRY_DECL(numpy$polynomial$chebyshev);
MOD_ENTRY_DECL(numpy$polynomial$hermite);
MOD_ENTRY_DECL(numpy$polynomial$hermite_e);
MOD_ENTRY_DECL(numpy$polynomial$laguerre);
MOD_ENTRY_DECL(numpy$polynomial$legendre);
MOD_ENTRY_DECL(numpy$polynomial$polynomial);
MOD_ENTRY_DECL(numpy$polynomial$polyutils);
MOD_ENTRY_DECL(numpy$random);
MOD_ENTRY_DECL(numpy$random$_pickle);
MOD_ENTRY_DECL(numpy$version);
MOD_ENTRY_DECL(oauth2client);
MOD_ENTRY_DECL(oauth2client$_helpers);
MOD_ENTRY_DECL(oauth2client$_openssl_crypt);
MOD_ENTRY_DECL(oauth2client$_pkce);
MOD_ENTRY_DECL(oauth2client$_pure_python_crypt);
MOD_ENTRY_DECL(oauth2client$_pycrypto_crypt);
MOD_ENTRY_DECL(oauth2client$client);
MOD_ENTRY_DECL(oauth2client$clientsecrets);
MOD_ENTRY_DECL(oauth2client$contrib);
MOD_ENTRY_DECL(oauth2client$contrib$_appengine_ndb);
MOD_ENTRY_DECL(oauth2client$contrib$_metadata);
MOD_ENTRY_DECL(oauth2client$contrib$appengine);
MOD_ENTRY_DECL(oauth2client$contrib$gce);
MOD_ENTRY_DECL(oauth2client$contrib$xsrfutil);
MOD_ENTRY_DECL(oauth2client$crypt);
MOD_ENTRY_DECL(oauth2client$service_account);
MOD_ENTRY_DECL(oauth2client$transport);
MOD_ENTRY_DECL(packaging);
MOD_ENTRY_DECL(packaging$__about__);
MOD_ENTRY_DECL(packaging$_structures);
MOD_ENTRY_DECL(packaging$version);
MOD_ENTRY_DECL(pluggy);
MOD_ENTRY_DECL(pluggy$_tracing);
MOD_ENTRY_DECL(pluggy$_version);
MOD_ENTRY_DECL(pluggy$callers);
MOD_ENTRY_DECL(pluggy$hooks);
MOD_ENTRY_DECL(pluggy$manager);
MOD_ENTRY_DECL(py);
MOD_ENTRY_DECL(py$_error);
MOD_ENTRY_DECL(py$_vendored_packages);
MOD_ENTRY_DECL(py$_vendored_packages$apipkg);
MOD_ENTRY_DECL(py$_version);
MOD_ENTRY_DECL(pyasn1);
MOD_ENTRY_DECL(pyasn1$codec);
MOD_ENTRY_DECL(pyasn1$codec$ber);
MOD_ENTRY_DECL(pyasn1$codec$ber$decoder);
MOD_ENTRY_DECL(pyasn1$codec$ber$encoder);
MOD_ENTRY_DECL(pyasn1$codec$ber$eoo);
MOD_ENTRY_DECL(pyasn1$codec$cer);
MOD_ENTRY_DECL(pyasn1$codec$cer$decoder);
MOD_ENTRY_DECL(pyasn1$codec$cer$encoder);
MOD_ENTRY_DECL(pyasn1$codec$der);
MOD_ENTRY_DECL(pyasn1$codec$der$decoder);
MOD_ENTRY_DECL(pyasn1$codec$der$encoder);
MOD_ENTRY_DECL(pyasn1$compat);
MOD_ENTRY_DECL(pyasn1$compat$binary);
MOD_ENTRY_DECL(pyasn1$compat$calling);
MOD_ENTRY_DECL(pyasn1$compat$dateandtime);
MOD_ENTRY_DECL(pyasn1$compat$integer);
MOD_ENTRY_DECL(pyasn1$compat$octets);
MOD_ENTRY_DECL(pyasn1$compat$string);
MOD_ENTRY_DECL(pyasn1$debug);
MOD_ENTRY_DECL(pyasn1$error);
MOD_ENTRY_DECL(pyasn1$type);
MOD_ENTRY_DECL(pyasn1$type$base);
MOD_ENTRY_DECL(pyasn1$type$char);
MOD_ENTRY_DECL(pyasn1$type$constraint);
MOD_ENTRY_DECL(pyasn1$type$error);
MOD_ENTRY_DECL(pyasn1$type$namedtype);
MOD_ENTRY_DECL(pyasn1$type$namedval);
MOD_ENTRY_DECL(pyasn1$type$opentype);
MOD_ENTRY_DECL(pyasn1$type$tag);
MOD_ENTRY_DECL(pyasn1$type$tagmap);
MOD_ENTRY_DECL(pyasn1$type$univ);
MOD_ENTRY_DECL(pyasn1$type$useful);
MOD_ENTRY_DECL(pyasn1_modules);
MOD_ENTRY_DECL(pyasn1_modules$pem);
MOD_ENTRY_DECL(pyasn1_modules$rfc2251);
MOD_ENTRY_DECL(pyasn1_modules$rfc2459);
MOD_ENTRY_DECL(pyasn1_modules$rfc5208);
MOD_ENTRY_DECL(pythoncom);
MOD_ENTRY_DECL(pywintypes);
MOD_ENTRY_DECL(requests);
MOD_ENTRY_DECL(requests$__version__);
MOD_ENTRY_DECL(requests$_internal_utils);
MOD_ENTRY_DECL(requests$adapters);
MOD_ENTRY_DECL(requests$api);
MOD_ENTRY_DECL(requests$auth);
MOD_ENTRY_DECL(requests$certs);
MOD_ENTRY_DECL(requests$compat);
MOD_ENTRY_DECL(requests$cookies);
MOD_ENTRY_DECL(requests$exceptions);
MOD_ENTRY_DECL(requests$hooks);
MOD_ENTRY_DECL(requests$models);
MOD_ENTRY_DECL(requests$packages);
MOD_ENTRY_DECL(requests$sessions);
MOD_ENTRY_DECL(requests$status_codes);
MOD_ENTRY_DECL(requests$structures);
MOD_ENTRY_DECL(requests$utils);
MOD_ENTRY_DECL(rsa);
MOD_ENTRY_DECL(rsa$_compat);
MOD_ENTRY_DECL(rsa$asn1);
MOD_ENTRY_DECL(rsa$common);
MOD_ENTRY_DECL(rsa$core);
MOD_ENTRY_DECL(rsa$key);
MOD_ENTRY_DECL(rsa$machine_size);
MOD_ENTRY_DECL(rsa$parallel);
MOD_ENTRY_DECL(rsa$pem);
MOD_ENTRY_DECL(rsa$pkcs1);
MOD_ENTRY_DECL(rsa$prime);
MOD_ENTRY_DECL(rsa$randnum);
MOD_ENTRY_DECL(rsa$transform);
MOD_ENTRY_DECL(scipy);
MOD_ENTRY_DECL(scipy$__config__);
MOD_ENTRY_DECL(scipy$_distributor_init);
MOD_ENTRY_DECL(scipy$_lib);
MOD_ENTRY_DECL(scipy$_lib$_ccallback);
MOD_ENTRY_DECL(scipy$_lib$_testutils);
MOD_ENTRY_DECL(scipy$_lib$_version);
MOD_ENTRY_DECL(scipy$_lib$six);
MOD_ENTRY_DECL(scipy$version);
MOD_ENTRY_DECL(six);
MOD_ENTRY_DECL(socks);
MOD_ENTRY_DECL(urllib3);
MOD_ENTRY_DECL(urllib3$_collections);
MOD_ENTRY_DECL(urllib3$connection);
MOD_ENTRY_DECL(urllib3$connectionpool);
MOD_ENTRY_DECL(urllib3$contrib);
MOD_ENTRY_DECL(urllib3$contrib$_appengine_environ);
MOD_ENTRY_DECL(urllib3$contrib$pyopenssl);
MOD_ENTRY_DECL(urllib3$contrib$socks);
MOD_ENTRY_DECL(urllib3$exceptions);
MOD_ENTRY_DECL(urllib3$fields);
MOD_ENTRY_DECL(urllib3$filepost);
MOD_ENTRY_DECL(urllib3$packages);
MOD_ENTRY_DECL(urllib3$packages$backports);
MOD_ENTRY_DECL(urllib3$packages$backports$makefile);
MOD_ENTRY_DECL(urllib3$packages$six);
MOD_ENTRY_DECL(urllib3$packages$ssl_match_hostname);
MOD_ENTRY_DECL(urllib3$packages$ssl_match_hostname$_implementation);
MOD_ENTRY_DECL(urllib3$poolmanager);
MOD_ENTRY_DECL(urllib3$request);
MOD_ENTRY_DECL(urllib3$response);
MOD_ENTRY_DECL(urllib3$util);
MOD_ENTRY_DECL(urllib3$util$connection);
MOD_ENTRY_DECL(urllib3$util$queue);
MOD_ENTRY_DECL(urllib3$util$request);
MOD_ENTRY_DECL(urllib3$util$response);
MOD_ENTRY_DECL(urllib3$util$retry);
MOD_ENTRY_DECL(urllib3$util$ssl_);
MOD_ENTRY_DECL(urllib3$util$timeout);
MOD_ENTRY_DECL(urllib3$util$url);
MOD_ENTRY_DECL(urllib3$util$wait);
MOD_ENTRY_DECL(websocket);
MOD_ENTRY_DECL(websocket$_abnf);
MOD_ENTRY_DECL(websocket$_app);
MOD_ENTRY_DECL(websocket$_cookiejar);
MOD_ENTRY_DECL(websocket$_core);
MOD_ENTRY_DECL(websocket$_exceptions);
MOD_ENTRY_DECL(websocket$_handshake);
MOD_ENTRY_DECL(websocket$_http);
MOD_ENTRY_DECL(websocket$_logging);
MOD_ENTRY_DECL(websocket$_socket);
MOD_ENTRY_DECL(websocket$_ssl_compat);
MOD_ENTRY_DECL(websocket$_url);
MOD_ENTRY_DECL(websocket$_utils);
MOD_ENTRY_DECL(win32com);
MOD_ENTRY_DECL(win32com$shell);
MOD_ENTRY_DECL(win32com$shell$shellcon);
MOD_ENTRY_DECL(zipp);
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { "__main__", MOD_INIT_NAME( __main__ ), 0, 0,  },
    { "_pytest", NULL, 2921293, 251, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "_pytest._argcomplete", NULL, 2921544, 3815, NUITKA_BYTECODE_FLAG },
    { "_pytest._code", NULL, 2925359, 492, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "_pytest._code.code", NULL, 2925851, 35574, NUITKA_BYTECODE_FLAG },
    { "_pytest._code.source", NULL, 2961425, 10481, NUITKA_BYTECODE_FLAG },
    { "_pytest._io", NULL, 2971906, 122, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "_pytest._io.saferepr", NULL, 2972028, 3147, NUITKA_BYTECODE_FLAG },
    { "_pytest._version", NULL, 2975175, 135, NUITKA_BYTECODE_FLAG },
    { "_pytest.assertion", NULL, 2975310, 5980, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "_pytest.assertion.rewrite", NULL, 2981290, 31016, NUITKA_BYTECODE_FLAG },
    { "_pytest.assertion.truncate", NULL, 3012306, 2529, NUITKA_BYTECODE_FLAG },
    { "_pytest.assertion.util", NULL, 3014835, 12897, NUITKA_BYTECODE_FLAG },
    { "_pytest.compat", NULL, 3027732, 11806, NUITKA_BYTECODE_FLAG },
    { "_pytest.config", NULL, 3039538, 32474, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "_pytest.config.argparsing", NULL, 3072012, 15306, NUITKA_BYTECODE_FLAG },
    { "_pytest.config.exceptions", NULL, 3087318, 587, NUITKA_BYTECODE_FLAG },
    { "_pytest.config.findpaths", NULL, 3087905, 4217, NUITKA_BYTECODE_FLAG },
    { "_pytest.debugging", NULL, 3092122, 9332, NUITKA_BYTECODE_FLAG },
    { "_pytest.deprecated", NULL, 3101454, 1455, NUITKA_BYTECODE_FLAG },
    { "_pytest.fixtures", NULL, 3102909, 40577, NUITKA_BYTECODE_FLAG },
    { "_pytest.freeze_support", NULL, 3143486, 1241, NUITKA_BYTECODE_FLAG },
    { "_pytest.helpconfig", NULL, 3144727, 6719, NUITKA_BYTECODE_FLAG },
    { "_pytest.hookspec", NULL, 3151446, 22581, NUITKA_BYTECODE_FLAG },
    { "_pytest.main", NULL, 3174027, 18355, NUITKA_BYTECODE_FLAG },
    { "_pytest.mark", NULL, 3192382, 4725, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "_pytest.mark.legacy", NULL, 3197107, 3520, NUITKA_BYTECODE_FLAG },
    { "_pytest.mark.structures", NULL, 3200627, 12817, NUITKA_BYTECODE_FLAG },
    { "_pytest.nodes", NULL, 3213444, 14259, NUITKA_BYTECODE_FLAG },
    { "_pytest.outcomes", NULL, 3227703, 6326, NUITKA_BYTECODE_FLAG },
    { "_pytest.pathlib", NULL, 3234029, 10154, NUITKA_BYTECODE_FLAG },
    { "_pytest.python", NULL, 3244183, 43061, NUITKA_BYTECODE_FLAG },
    { "_pytest.python_api", NULL, 3287244, 24808, NUITKA_BYTECODE_FLAG },
    { "_pytest.recwarn", NULL, 3312052, 8544, NUITKA_BYTECODE_FLAG },
    { "_pytest.reports", NULL, 3320596, 14464, NUITKA_BYTECODE_FLAG },
    { "_pytest.runner", NULL, 3335060, 10977, NUITKA_BYTECODE_FLAG },
    { "_pytest.warning_types", NULL, 3346037, 4179, NUITKA_BYTECODE_FLAG },
    { "_pytest.warnings", NULL, 3350216, 4587, NUITKA_BYTECODE_FLAG },
    { "atomicwrites", MOD_INIT_NAME( atomicwrites ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "attr", MOD_INIT_NAME( attr ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "attr._compat", MOD_INIT_NAME( attr$_compat ), 0, 0,  },
    { "attr._config", MOD_INIT_NAME( attr$_config ), 0, 0,  },
    { "attr._funcs", MOD_INIT_NAME( attr$_funcs ), 0, 0,  },
    { "attr._make", MOD_INIT_NAME( attr$_make ), 0, 0,  },
    { "attr._version_info", MOD_INIT_NAME( attr$_version_info ), 0, 0,  },
    { "attr.converters", MOD_INIT_NAME( attr$converters ), 0, 0,  },
    { "attr.exceptions", MOD_INIT_NAME( attr$exceptions ), 0, 0,  },
    { "attr.filters", MOD_INIT_NAME( attr$filters ), 0, 0,  },
    { "attr.validators", MOD_INIT_NAME( attr$validators ), 0, 0,  },
    { "certifi", MOD_INIT_NAME( certifi ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "certifi.core", MOD_INIT_NAME( certifi$core ), 0, 0,  },
    { "cffi", MOD_INIT_NAME( cffi ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cffi.api", MOD_INIT_NAME( cffi$api ), 0, 0,  },
    { "cffi.cffi_opcode", MOD_INIT_NAME( cffi$cffi_opcode ), 0, 0,  },
    { "cffi.commontypes", MOD_INIT_NAME( cffi$commontypes ), 0, 0,  },
    { "cffi.cparser", MOD_INIT_NAME( cffi$cparser ), 0, 0,  },
    { "cffi.error", MOD_INIT_NAME( cffi$error ), 0, 0,  },
    { "cffi.ffiplatform", MOD_INIT_NAME( cffi$ffiplatform ), 0, 0,  },
    { "cffi.lock", MOD_INIT_NAME( cffi$lock ), 0, 0,  },
    { "cffi.model", MOD_INIT_NAME( cffi$model ), 0, 0,  },
    { "cffi.pkgconfig", MOD_INIT_NAME( cffi$pkgconfig ), 0, 0,  },
    { "cffi.recompiler", MOD_INIT_NAME( cffi$recompiler ), 0, 0,  },
    { "cffi.vengine_cpy", MOD_INIT_NAME( cffi$vengine_cpy ), 0, 0,  },
    { "cffi.vengine_gen", MOD_INIT_NAME( cffi$vengine_gen ), 0, 0,  },
    { "cffi.verifier", MOD_INIT_NAME( cffi$verifier ), 0, 0,  },
    { "chardet", MOD_INIT_NAME( chardet ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "chardet.big5freq", MOD_INIT_NAME( chardet$big5freq ), 0, 0,  },
    { "chardet.big5prober", MOD_INIT_NAME( chardet$big5prober ), 0, 0,  },
    { "chardet.chardistribution", MOD_INIT_NAME( chardet$chardistribution ), 0, 0,  },
    { "chardet.charsetgroupprober", MOD_INIT_NAME( chardet$charsetgroupprober ), 0, 0,  },
    { "chardet.charsetprober", MOD_INIT_NAME( chardet$charsetprober ), 0, 0,  },
    { "chardet.codingstatemachine", MOD_INIT_NAME( chardet$codingstatemachine ), 0, 0,  },
    { "chardet.compat", MOD_INIT_NAME( chardet$compat ), 0, 0,  },
    { "chardet.cp949prober", MOD_INIT_NAME( chardet$cp949prober ), 0, 0,  },
    { "chardet.enums", MOD_INIT_NAME( chardet$enums ), 0, 0,  },
    { "chardet.escprober", MOD_INIT_NAME( chardet$escprober ), 0, 0,  },
    { "chardet.escsm", MOD_INIT_NAME( chardet$escsm ), 0, 0,  },
    { "chardet.eucjpprober", MOD_INIT_NAME( chardet$eucjpprober ), 0, 0,  },
    { "chardet.euckrfreq", MOD_INIT_NAME( chardet$euckrfreq ), 0, 0,  },
    { "chardet.euckrprober", MOD_INIT_NAME( chardet$euckrprober ), 0, 0,  },
    { "chardet.euctwfreq", MOD_INIT_NAME( chardet$euctwfreq ), 0, 0,  },
    { "chardet.euctwprober", MOD_INIT_NAME( chardet$euctwprober ), 0, 0,  },
    { "chardet.gb2312freq", MOD_INIT_NAME( chardet$gb2312freq ), 0, 0,  },
    { "chardet.gb2312prober", MOD_INIT_NAME( chardet$gb2312prober ), 0, 0,  },
    { "chardet.hebrewprober", MOD_INIT_NAME( chardet$hebrewprober ), 0, 0,  },
    { "chardet.jisfreq", MOD_INIT_NAME( chardet$jisfreq ), 0, 0,  },
    { "chardet.jpcntx", MOD_INIT_NAME( chardet$jpcntx ), 0, 0,  },
    { "chardet.langbulgarianmodel", MOD_INIT_NAME( chardet$langbulgarianmodel ), 0, 0,  },
    { "chardet.langcyrillicmodel", MOD_INIT_NAME( chardet$langcyrillicmodel ), 0, 0,  },
    { "chardet.langgreekmodel", MOD_INIT_NAME( chardet$langgreekmodel ), 0, 0,  },
    { "chardet.langhebrewmodel", MOD_INIT_NAME( chardet$langhebrewmodel ), 0, 0,  },
    { "chardet.langthaimodel", MOD_INIT_NAME( chardet$langthaimodel ), 0, 0,  },
    { "chardet.langturkishmodel", MOD_INIT_NAME( chardet$langturkishmodel ), 0, 0,  },
    { "chardet.latin1prober", MOD_INIT_NAME( chardet$latin1prober ), 0, 0,  },
    { "chardet.mbcharsetprober", MOD_INIT_NAME( chardet$mbcharsetprober ), 0, 0,  },
    { "chardet.mbcsgroupprober", MOD_INIT_NAME( chardet$mbcsgroupprober ), 0, 0,  },
    { "chardet.mbcssm", MOD_INIT_NAME( chardet$mbcssm ), 0, 0,  },
    { "chardet.sbcharsetprober", MOD_INIT_NAME( chardet$sbcharsetprober ), 0, 0,  },
    { "chardet.sbcsgroupprober", MOD_INIT_NAME( chardet$sbcsgroupprober ), 0, 0,  },
    { "chardet.sjisprober", MOD_INIT_NAME( chardet$sjisprober ), 0, 0,  },
    { "chardet.universaldetector", MOD_INIT_NAME( chardet$universaldetector ), 0, 0,  },
    { "chardet.utf8prober", MOD_INIT_NAME( chardet$utf8prober ), 0, 0,  },
    { "chardet.version", MOD_INIT_NAME( chardet$version ), 0, 0,  },
    { "gspread", MOD_INIT_NAME( gspread ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "gspread.client", MOD_INIT_NAME( gspread$client ), 0, 0,  },
    { "gspread.exceptions", MOD_INIT_NAME( gspread$exceptions ), 0, 0,  },
    { "gspread.models", MOD_INIT_NAME( gspread$models ), 0, 0,  },
    { "gspread.urls", MOD_INIT_NAME( gspread$urls ), 0, 0,  },
    { "gspread.utils", MOD_INIT_NAME( gspread$utils ), 0, 0,  },
    { "httplib2", MOD_INIT_NAME( httplib2 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "httplib2.certs", MOD_INIT_NAME( httplib2$certs ), 0, 0,  },
    { "httplib2.iri2uri", MOD_INIT_NAME( httplib2$iri2uri ), 0, 0,  },
    { "httplib2.socks", MOD_INIT_NAME( httplib2$socks ), 0, 0,  },
    { "idna", MOD_INIT_NAME( idna ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "idna.core", MOD_INIT_NAME( idna$core ), 0, 0,  },
    { "idna.idnadata", MOD_INIT_NAME( idna$idnadata ), 0, 0,  },
    { "idna.intranges", MOD_INIT_NAME( idna$intranges ), 0, 0,  },
    { "idna.package_data", MOD_INIT_NAME( idna$package_data ), 0, 0,  },
    { "idna.uts46data", MOD_INIT_NAME( idna$uts46data ), 0, 0,  },
    { "importlib_metadata", MOD_INIT_NAME( importlib_metadata ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "importlib_metadata._compat", MOD_INIT_NAME( importlib_metadata$_compat ), 0, 0,  },
    { "iqoptionapi", MOD_INIT_NAME( iqoptionapi ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "iqoptionapi.api", MOD_INIT_NAME( iqoptionapi$api ), 0, 0,  },
    { "iqoptionapi.constants", MOD_INIT_NAME( iqoptionapi$constants ), 0, 0,  },
    { "iqoptionapi.expiration", MOD_INIT_NAME( iqoptionapi$expiration ), 0, 0,  },
    { "iqoptionapi.global_value", MOD_INIT_NAME( iqoptionapi$global_value ), 0, 0,  },
    { "iqoptionapi.http", MOD_INIT_NAME( iqoptionapi$http ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "iqoptionapi.http.appinit", MOD_INIT_NAME( iqoptionapi$http$appinit ), 0, 0,  },
    { "iqoptionapi.http.auth", MOD_INIT_NAME( iqoptionapi$http$auth ), 0, 0,  },
    { "iqoptionapi.http.billing", MOD_INIT_NAME( iqoptionapi$http$billing ), 0, 0,  },
    { "iqoptionapi.http.buyback", MOD_INIT_NAME( iqoptionapi$http$buyback ), 0, 0,  },
    { "iqoptionapi.http.changebalance", MOD_INIT_NAME( iqoptionapi$http$changebalance ), 0, 0,  },
    { "iqoptionapi.http.getprofile", MOD_INIT_NAME( iqoptionapi$http$getprofile ), 0, 0,  },
    { "iqoptionapi.http.login", MOD_INIT_NAME( iqoptionapi$http$login ), 0, 0,  },
    { "iqoptionapi.http.loginv2", MOD_INIT_NAME( iqoptionapi$http$loginv2 ), 0, 0,  },
    { "iqoptionapi.http.profile", MOD_INIT_NAME( iqoptionapi$http$profile ), 0, 0,  },
    { "iqoptionapi.http.resource", MOD_INIT_NAME( iqoptionapi$http$resource ), 0, 0,  },
    { "iqoptionapi.http.token", MOD_INIT_NAME( iqoptionapi$http$token ), 0, 0,  },
    { "iqoptionapi.stable_api", MOD_INIT_NAME( iqoptionapi$stable_api ), 0, 0,  },
    { "iqoptionapi.ws", MOD_INIT_NAME( iqoptionapi$ws ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "iqoptionapi.ws.chanels", MOD_INIT_NAME( iqoptionapi$ws$chanels ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "iqoptionapi.ws.chanels.api_game_betinfo", MOD_INIT_NAME( iqoptionapi$ws$chanels$api_game_betinfo ), 0, 0,  },
    { "iqoptionapi.ws.chanels.api_game_getoptions", MOD_INIT_NAME( iqoptionapi$ws$chanels$api_game_getoptions ), 0, 0,  },
    { "iqoptionapi.ws.chanels.base", MOD_INIT_NAME( iqoptionapi$ws$chanels$base ), 0, 0,  },
    { "iqoptionapi.ws.chanels.buy_place_order_temp", MOD_INIT_NAME( iqoptionapi$ws$chanels$buy_place_order_temp ), 0, 0,  },
    { "iqoptionapi.ws.chanels.buyv2", MOD_INIT_NAME( iqoptionapi$ws$chanels$buyv2 ), 0, 0,  },
    { "iqoptionapi.ws.chanels.buyv3", MOD_INIT_NAME( iqoptionapi$ws$chanels$buyv3 ), 0, 0,  },
    { "iqoptionapi.ws.chanels.cancel_order", MOD_INIT_NAME( iqoptionapi$ws$chanels$cancel_order ), 0, 0,  },
    { "iqoptionapi.ws.chanels.candles", MOD_INIT_NAME( iqoptionapi$ws$chanels$candles ), 0, 0,  },
    { "iqoptionapi.ws.chanels.change_auto_margin_call", MOD_INIT_NAME( iqoptionapi$ws$chanels$change_auto_margin_call ), 0, 0,  },
    { "iqoptionapi.ws.chanels.change_tpsl", MOD_INIT_NAME( iqoptionapi$ws$chanels$change_tpsl ), 0, 0,  },
    { "iqoptionapi.ws.chanels.close_position", MOD_INIT_NAME( iqoptionapi$ws$chanels$close_position ), 0, 0,  },
    { "iqoptionapi.ws.chanels.digital_option", MOD_INIT_NAME( iqoptionapi$ws$chanels$digital_option ), 0, 0,  },
    { "iqoptionapi.ws.chanels.get_available_leverages", MOD_INIT_NAME( iqoptionapi$ws$chanels$get_available_leverages ), 0, 0,  },
    { "iqoptionapi.ws.chanels.get_deferred_orders", MOD_INIT_NAME( iqoptionapi$ws$chanels$get_deferred_orders ), 0, 0,  },
    { "iqoptionapi.ws.chanels.get_financial_information", MOD_INIT_NAME( iqoptionapi$ws$chanels$get_financial_information ), 0, 0,  },
    { "iqoptionapi.ws.chanels.get_order", MOD_INIT_NAME( iqoptionapi$ws$chanels$get_order ), 0, 0,  },
    { "iqoptionapi.ws.chanels.get_overnight_fee", MOD_INIT_NAME( iqoptionapi$ws$chanels$get_overnight_fee ), 0, 0,  },
    { "iqoptionapi.ws.chanels.get_positions", MOD_INIT_NAME( iqoptionapi$ws$chanels$get_positions ), 0, 0,  },
    { "iqoptionapi.ws.chanels.heartbeat", MOD_INIT_NAME( iqoptionapi$ws$chanels$heartbeat ), 0, 0,  },
    { "iqoptionapi.ws.chanels.instruments", MOD_INIT_NAME( iqoptionapi$ws$chanels$instruments ), 0, 0,  },
    { "iqoptionapi.ws.chanels.sell_option", MOD_INIT_NAME( iqoptionapi$ws$chanels$sell_option ), 0, 0,  },
    { "iqoptionapi.ws.chanels.setactives", MOD_INIT_NAME( iqoptionapi$ws$chanels$setactives ), 0, 0,  },
    { "iqoptionapi.ws.chanels.ssid", MOD_INIT_NAME( iqoptionapi$ws$chanels$ssid ), 0, 0,  },
    { "iqoptionapi.ws.chanels.strike_list", MOD_INIT_NAME( iqoptionapi$ws$chanels$strike_list ), 0, 0,  },
    { "iqoptionapi.ws.chanels.subscribe", MOD_INIT_NAME( iqoptionapi$ws$chanels$subscribe ), 0, 0,  },
    { "iqoptionapi.ws.chanels.traders_mood", MOD_INIT_NAME( iqoptionapi$ws$chanels$traders_mood ), 0, 0,  },
    { "iqoptionapi.ws.chanels.unsubscribe", MOD_INIT_NAME( iqoptionapi$ws$chanels$unsubscribe ), 0, 0,  },
    { "iqoptionapi.ws.client", MOD_INIT_NAME( iqoptionapi$ws$client ), 0, 0,  },
    { "iqoptionapi.ws.objects", MOD_INIT_NAME( iqoptionapi$ws$objects ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "iqoptionapi.ws.objects.base", MOD_INIT_NAME( iqoptionapi$ws$objects$base ), 0, 0,  },
    { "iqoptionapi.ws.objects.betinfo", MOD_INIT_NAME( iqoptionapi$ws$objects$betinfo ), 0, 0,  },
    { "iqoptionapi.ws.objects.candles", MOD_INIT_NAME( iqoptionapi$ws$objects$candles ), 0, 0,  },
    { "iqoptionapi.ws.objects.listinfodata", MOD_INIT_NAME( iqoptionapi$ws$objects$listinfodata ), 0, 0,  },
    { "iqoptionapi.ws.objects.profile", MOD_INIT_NAME( iqoptionapi$ws$objects$profile ), 0, 0,  },
    { "iqoptionapi.ws.objects.timesync", MOD_INIT_NAME( iqoptionapi$ws$objects$timesync ), 0, 0,  },
    { "more_itertools", MOD_INIT_NAME( more_itertools ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "more_itertools.more", MOD_INIT_NAME( more_itertools$more ), 0, 0,  },
    { "more_itertools.recipes", MOD_INIT_NAME( more_itertools$recipes ), 0, 0,  },
    { "numpy", MOD_INIT_NAME( numpy ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.__config__", MOD_INIT_NAME( numpy$__config__ ), 0, 0,  },
    { "numpy._distributor_init", MOD_INIT_NAME( numpy$_distributor_init ), 0, 0,  },
    { "numpy._globals", MOD_INIT_NAME( numpy$_globals ), 0, 0,  },
    { "numpy._pytesttester", MOD_INIT_NAME( numpy$_pytesttester ), 0, 0,  },
    { "numpy.compat", MOD_INIT_NAME( numpy$compat ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.compat._inspect", MOD_INIT_NAME( numpy$compat$_inspect ), 0, 0,  },
    { "numpy.compat.py3k", MOD_INIT_NAME( numpy$compat$py3k ), 0, 0,  },
    { "numpy.core", MOD_INIT_NAME( numpy$core ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.core._add_newdocs", MOD_INIT_NAME( numpy$core$_add_newdocs ), 0, 0,  },
    { "numpy.core._asarray", MOD_INIT_NAME( numpy$core$_asarray ), 0, 0,  },
    { "numpy.core._dtype", MOD_INIT_NAME( numpy$core$_dtype ), 0, 0,  },
    { "numpy.core._dtype_ctypes", MOD_INIT_NAME( numpy$core$_dtype_ctypes ), 0, 0,  },
    { "numpy.core._exceptions", MOD_INIT_NAME( numpy$core$_exceptions ), 0, 0,  },
    { "numpy.core._internal", MOD_INIT_NAME( numpy$core$_internal ), 0, 0,  },
    { "numpy.core._methods", MOD_INIT_NAME( numpy$core$_methods ), 0, 0,  },
    { "numpy.core._string_helpers", MOD_INIT_NAME( numpy$core$_string_helpers ), 0, 0,  },
    { "numpy.core._type_aliases", MOD_INIT_NAME( numpy$core$_type_aliases ), 0, 0,  },
    { "numpy.core._ufunc_config", MOD_INIT_NAME( numpy$core$_ufunc_config ), 0, 0,  },
    { "numpy.core.arrayprint", MOD_INIT_NAME( numpy$core$arrayprint ), 0, 0,  },
    { "numpy.core.defchararray", MOD_INIT_NAME( numpy$core$defchararray ), 0, 0,  },
    { "numpy.core.einsumfunc", MOD_INIT_NAME( numpy$core$einsumfunc ), 0, 0,  },
    { "numpy.core.fromnumeric", MOD_INIT_NAME( numpy$core$fromnumeric ), 0, 0,  },
    { "numpy.core.function_base", MOD_INIT_NAME( numpy$core$function_base ), 0, 0,  },
    { "numpy.core.getlimits", MOD_INIT_NAME( numpy$core$getlimits ), 0, 0,  },
    { "numpy.core.info", MOD_INIT_NAME( numpy$core$info ), 0, 0,  },
    { "numpy.core.machar", MOD_INIT_NAME( numpy$core$machar ), 0, 0,  },
    { "numpy.core.memmap", MOD_INIT_NAME( numpy$core$memmap ), 0, 0,  },
    { "numpy.core.multiarray", MOD_INIT_NAME( numpy$core$multiarray ), 0, 0,  },
    { "numpy.core.numeric", MOD_INIT_NAME( numpy$core$numeric ), 0, 0,  },
    { "numpy.core.numerictypes", MOD_INIT_NAME( numpy$core$numerictypes ), 0, 0,  },
    { "numpy.core.overrides", MOD_INIT_NAME( numpy$core$overrides ), 0, 0,  },
    { "numpy.core.records", MOD_INIT_NAME( numpy$core$records ), 0, 0,  },
    { "numpy.core.shape_base", MOD_INIT_NAME( numpy$core$shape_base ), 0, 0,  },
    { "numpy.core.umath", MOD_INIT_NAME( numpy$core$umath ), 0, 0,  },
    { "numpy.ctypeslib", MOD_INIT_NAME( numpy$ctypeslib ), 0, 0,  },
    { "numpy.distutils", NULL, 3354803, 1014, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "numpy.distutils.__config__", NULL, 3355817, 1293, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.__version__", NULL, 3357110, 327, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils._shell_utils", NULL, 3357437, 3164, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.ccompiler", NULL, 3360601, 19121, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command", NULL, 3379722, 1089, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "numpy.distutils.command.autodist", NULL, 3380811, 3141, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.bdist_rpm", NULL, 3383952, 894, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.build", NULL, 3384846, 1862, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.build_clib", NULL, 3386708, 7469, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.build_ext", NULL, 3394177, 12506, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.build_py", NULL, 3406683, 1410, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.build_scripts", NULL, 3408093, 1721, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.build_src", NULL, 3409814, 18300, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.config", NULL, 3428114, 13666, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.config_compiler", NULL, 3441780, 4130, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.develop", NULL, 3445910, 917, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.egg_info", NULL, 3446827, 1147, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.install", NULL, 3447974, 2123, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.install_clib", NULL, 3450097, 1677, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.install_data", NULL, 3451774, 941, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.install_headers", NULL, 3452715, 1015, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.command.sdist", NULL, 3453730, 1005, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.compat", NULL, 3454735, 462, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.conv_template", NULL, 3455197, 8386, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.core", NULL, 3463583, 4771, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.cpuinfo", NULL, 3468354, 33459, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.exec_command", NULL, 3501813, 9307, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.extension", NULL, 3511120, 2088, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.fcompiler", NULL, 3513208, 28167, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "numpy.distutils.fcompiler.environment", NULL, 3541375, 3369, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.from_template", NULL, 3544744, 7274, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.info", NULL, 3552018, 318, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.lib2def", NULL, 3552336, 3240, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.log", NULL, 3555576, 2452, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.mingw32ccompiler", NULL, 3558028, 14458, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.misc_util", NULL, 3572486, 67595, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.npy_pkg_config", NULL, 3640081, 12395, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.numpy_distribution", NULL, 3652476, 832, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.system_info", NULL, 3653308, 78834, NUITKA_BYTECODE_FLAG },
    { "numpy.distutils.unixccompiler", NULL, 3732142, 3371, NUITKA_BYTECODE_FLAG },
    { "numpy.dual", MOD_INIT_NAME( numpy$dual ), 0, 0,  },
    { "numpy.f2py", NULL, 3735513, 2735, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "numpy.f2py.__version__", NULL, 3738248, 398, NUITKA_BYTECODE_FLAG },
    { "numpy.f2py.auxfuncs", NULL, 3738646, 22160, NUITKA_BYTECODE_FLAG },
    { "numpy.f2py.capi_maps", NULL, 3760806, 17840, NUITKA_BYTECODE_FLAG },
    { "numpy.f2py.cb_rules", NULL, 3778646, 15467, NUITKA_BYTECODE_FLAG },
    { "numpy.f2py.cfuncs", NULL, 3794113, 38367, NUITKA_BYTECODE_FLAG },
    { "numpy.f2py.common_rules", NULL, 3832480, 4825, NUITKA_BYTECODE_FLAG },
    { "numpy.f2py.crackfortran", NULL, 3837305, 76078, NUITKA_BYTECODE_FLAG },
    { "numpy.f2py.diagnose", NULL, 3913383, 3768, NUITKA_BYTECODE_FLAG },
    { "numpy.f2py.f2py2e", NULL, 3917151, 19989, NUITKA_BYTECODE_FLAG },
    { "numpy.f2py.f2py_testing", NULL, 3937140, 1457, NUITKA_BYTECODE_FLAG },
    { "numpy.f2py.f90mod_rules", NULL, 3938597, 7366, NUITKA_BYTECODE_FLAG },
    { "numpy.f2py.func2subr", NULL, 3945963, 6742, NUITKA_BYTECODE_FLAG },
    { "numpy.f2py.rules", NULL, 3952705, 34083, NUITKA_BYTECODE_FLAG },
    { "numpy.f2py.use_rules", NULL, 3986788, 3100, NUITKA_BYTECODE_FLAG },
    { "numpy.fft", MOD_INIT_NAME( numpy$fft ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.fft.helper", MOD_INIT_NAME( numpy$fft$helper ), 0, 0,  },
    { "numpy.fft.info", MOD_INIT_NAME( numpy$fft$info ), 0, 0,  },
    { "numpy.fft.pocketfft", MOD_INIT_NAME( numpy$fft$pocketfft ), 0, 0,  },
    { "numpy.lib", MOD_INIT_NAME( numpy$lib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.lib._datasource", MOD_INIT_NAME( numpy$lib$_datasource ), 0, 0,  },
    { "numpy.lib._iotools", MOD_INIT_NAME( numpy$lib$_iotools ), 0, 0,  },
    { "numpy.lib._version", MOD_INIT_NAME( numpy$lib$_version ), 0, 0,  },
    { "numpy.lib.arraypad", MOD_INIT_NAME( numpy$lib$arraypad ), 0, 0,  },
    { "numpy.lib.arraysetops", MOD_INIT_NAME( numpy$lib$arraysetops ), 0, 0,  },
    { "numpy.lib.arrayterator", MOD_INIT_NAME( numpy$lib$arrayterator ), 0, 0,  },
    { "numpy.lib.financial", MOD_INIT_NAME( numpy$lib$financial ), 0, 0,  },
    { "numpy.lib.format", MOD_INIT_NAME( numpy$lib$format ), 0, 0,  },
    { "numpy.lib.function_base", MOD_INIT_NAME( numpy$lib$function_base ), 0, 0,  },
    { "numpy.lib.histograms", MOD_INIT_NAME( numpy$lib$histograms ), 0, 0,  },
    { "numpy.lib.index_tricks", MOD_INIT_NAME( numpy$lib$index_tricks ), 0, 0,  },
    { "numpy.lib.info", MOD_INIT_NAME( numpy$lib$info ), 0, 0,  },
    { "numpy.lib.mixins", MOD_INIT_NAME( numpy$lib$mixins ), 0, 0,  },
    { "numpy.lib.nanfunctions", MOD_INIT_NAME( numpy$lib$nanfunctions ), 0, 0,  },
    { "numpy.lib.npyio", MOD_INIT_NAME( numpy$lib$npyio ), 0, 0,  },
    { "numpy.lib.polynomial", MOD_INIT_NAME( numpy$lib$polynomial ), 0, 0,  },
    { "numpy.lib.scimath", MOD_INIT_NAME( numpy$lib$scimath ), 0, 0,  },
    { "numpy.lib.shape_base", MOD_INIT_NAME( numpy$lib$shape_base ), 0, 0,  },
    { "numpy.lib.stride_tricks", MOD_INIT_NAME( numpy$lib$stride_tricks ), 0, 0,  },
    { "numpy.lib.twodim_base", MOD_INIT_NAME( numpy$lib$twodim_base ), 0, 0,  },
    { "numpy.lib.type_check", MOD_INIT_NAME( numpy$lib$type_check ), 0, 0,  },
    { "numpy.lib.ufunclike", MOD_INIT_NAME( numpy$lib$ufunclike ), 0, 0,  },
    { "numpy.lib.utils", MOD_INIT_NAME( numpy$lib$utils ), 0, 0,  },
    { "numpy.linalg", MOD_INIT_NAME( numpy$linalg ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.linalg.info", MOD_INIT_NAME( numpy$linalg$info ), 0, 0,  },
    { "numpy.linalg.linalg", MOD_INIT_NAME( numpy$linalg$linalg ), 0, 0,  },
    { "numpy.ma", MOD_INIT_NAME( numpy$ma ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.ma.core", MOD_INIT_NAME( numpy$ma$core ), 0, 0,  },
    { "numpy.ma.extras", MOD_INIT_NAME( numpy$ma$extras ), 0, 0,  },
    { "numpy.ma.mrecords", MOD_INIT_NAME( numpy$ma$mrecords ), 0, 0,  },
    { "numpy.matrixlib", MOD_INIT_NAME( numpy$matrixlib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.matrixlib.defmatrix", MOD_INIT_NAME( numpy$matrixlib$defmatrix ), 0, 0,  },
    { "numpy.polynomial", MOD_INIT_NAME( numpy$polynomial ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.polynomial._polybase", MOD_INIT_NAME( numpy$polynomial$_polybase ), 0, 0,  },
    { "numpy.polynomial.chebyshev", MOD_INIT_NAME( numpy$polynomial$chebyshev ), 0, 0,  },
    { "numpy.polynomial.hermite", MOD_INIT_NAME( numpy$polynomial$hermite ), 0, 0,  },
    { "numpy.polynomial.hermite_e", MOD_INIT_NAME( numpy$polynomial$hermite_e ), 0, 0,  },
    { "numpy.polynomial.laguerre", MOD_INIT_NAME( numpy$polynomial$laguerre ), 0, 0,  },
    { "numpy.polynomial.legendre", MOD_INIT_NAME( numpy$polynomial$legendre ), 0, 0,  },
    { "numpy.polynomial.polynomial", MOD_INIT_NAME( numpy$polynomial$polynomial ), 0, 0,  },
    { "numpy.polynomial.polyutils", MOD_INIT_NAME( numpy$polynomial$polyutils ), 0, 0,  },
    { "numpy.random", MOD_INIT_NAME( numpy$random ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "numpy.random._pickle", MOD_INIT_NAME( numpy$random$_pickle ), 0, 0,  },
    { "numpy.testing", NULL, 3989888, 791, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "numpy.testing._private", NULL, 3990679, 133, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "numpy.testing._private.decorators", NULL, 3990812, 9120, NUITKA_BYTECODE_FLAG },
    { "numpy.testing._private.noseclasses", NULL, 3999932, 9866, NUITKA_BYTECODE_FLAG },
    { "numpy.testing._private.nosetester", NULL, 4009798, 15383, NUITKA_BYTECODE_FLAG },
    { "numpy.testing._private.parameterized", NULL, 4025181, 16663, NUITKA_BYTECODE_FLAG },
    { "numpy.testing._private.utils", NULL, 4041844, 65712, NUITKA_BYTECODE_FLAG },
    { "numpy.version", MOD_INIT_NAME( numpy$version ), 0, 0,  },
    { "oauth2client", MOD_INIT_NAME( oauth2client ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "oauth2client._helpers", MOD_INIT_NAME( oauth2client$_helpers ), 0, 0,  },
    { "oauth2client._openssl_crypt", MOD_INIT_NAME( oauth2client$_openssl_crypt ), 0, 0,  },
    { "oauth2client._pkce", MOD_INIT_NAME( oauth2client$_pkce ), 0, 0,  },
    { "oauth2client._pure_python_crypt", MOD_INIT_NAME( oauth2client$_pure_python_crypt ), 0, 0,  },
    { "oauth2client._pycrypto_crypt", MOD_INIT_NAME( oauth2client$_pycrypto_crypt ), 0, 0,  },
    { "oauth2client.client", MOD_INIT_NAME( oauth2client$client ), 0, 0,  },
    { "oauth2client.clientsecrets", MOD_INIT_NAME( oauth2client$clientsecrets ), 0, 0,  },
    { "oauth2client.contrib", MOD_INIT_NAME( oauth2client$contrib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "oauth2client.contrib._appengine_ndb", MOD_INIT_NAME( oauth2client$contrib$_appengine_ndb ), 0, 0,  },
    { "oauth2client.contrib._metadata", MOD_INIT_NAME( oauth2client$contrib$_metadata ), 0, 0,  },
    { "oauth2client.contrib.appengine", MOD_INIT_NAME( oauth2client$contrib$appengine ), 0, 0,  },
    { "oauth2client.contrib.gce", MOD_INIT_NAME( oauth2client$contrib$gce ), 0, 0,  },
    { "oauth2client.contrib.xsrfutil", MOD_INIT_NAME( oauth2client$contrib$xsrfutil ), 0, 0,  },
    { "oauth2client.crypt", MOD_INIT_NAME( oauth2client$crypt ), 0, 0,  },
    { "oauth2client.service_account", MOD_INIT_NAME( oauth2client$service_account ), 0, 0,  },
    { "oauth2client.transport", MOD_INIT_NAME( oauth2client$transport ), 0, 0,  },
    { "packaging", MOD_INIT_NAME( packaging ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "packaging.__about__", MOD_INIT_NAME( packaging$__about__ ), 0, 0,  },
    { "packaging._structures", MOD_INIT_NAME( packaging$_structures ), 0, 0,  },
    { "packaging.version", MOD_INIT_NAME( packaging$version ), 0, 0,  },
    { "pkg_resources", NULL, 4107556, 99723, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "pkg_resources._vendor", NULL, 4207279, 132, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "pkg_resources._vendor.appdirs", NULL, 4207411, 20620, NUITKA_BYTECODE_FLAG },
    { "pkg_resources._vendor.packaging", NULL, 4228031, 506, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "pkg_resources._vendor.packaging.__about__", NULL, 4228537, 668, NUITKA_BYTECODE_FLAG },
    { "pkg_resources._vendor.packaging._compat", NULL, 4229205, 958, NUITKA_BYTECODE_FLAG },
    { "pkg_resources._vendor.packaging._structures", NULL, 4230163, 2810, NUITKA_BYTECODE_FLAG },
    { "pkg_resources._vendor.packaging.markers", NULL, 4232973, 8818, NUITKA_BYTECODE_FLAG },
    { "pkg_resources._vendor.packaging.requirements", NULL, 4241791, 3823, NUITKA_BYTECODE_FLAG },
    { "pkg_resources._vendor.packaging.specifiers", NULL, 4245614, 19736, NUITKA_BYTECODE_FLAG },
    { "pkg_resources._vendor.packaging.version", NULL, 4265350, 10503, NUITKA_BYTECODE_FLAG },
    { "pkg_resources._vendor.pyparsing", NULL, 4275853, 202975, NUITKA_BYTECODE_FLAG },
    { "pkg_resources._vendor.six", NULL, 4478828, 24333, NUITKA_BYTECODE_FLAG },
    { "pkg_resources.extern", NULL, 4503161, 2351, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "pkg_resources.py31compat", NULL, 4505512, 569, NUITKA_BYTECODE_FLAG },
    { "pluggy", MOD_INIT_NAME( pluggy ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pluggy._tracing", MOD_INIT_NAME( pluggy$_tracing ), 0, 0,  },
    { "pluggy._version", MOD_INIT_NAME( pluggy$_version ), 0, 0,  },
    { "pluggy.callers", MOD_INIT_NAME( pluggy$callers ), 0, 0,  },
    { "pluggy.hooks", MOD_INIT_NAME( pluggy$hooks ), 0, 0,  },
    { "pluggy.manager", MOD_INIT_NAME( pluggy$manager ), 0, 0,  },
    { "py", MOD_INIT_NAME( py ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "py._error", MOD_INIT_NAME( py$_error ), 0, 0,  },
    { "py._vendored_packages", MOD_INIT_NAME( py$_vendored_packages ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "py._vendored_packages.apipkg", MOD_INIT_NAME( py$_vendored_packages$apipkg ), 0, 0,  },
    { "py._version", MOD_INIT_NAME( py$_version ), 0, 0,  },
    { "pyasn1", MOD_INIT_NAME( pyasn1 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1.codec", MOD_INIT_NAME( pyasn1$codec ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1.codec.ber", MOD_INIT_NAME( pyasn1$codec$ber ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1.codec.ber.decoder", MOD_INIT_NAME( pyasn1$codec$ber$decoder ), 0, 0,  },
    { "pyasn1.codec.ber.encoder", MOD_INIT_NAME( pyasn1$codec$ber$encoder ), 0, 0,  },
    { "pyasn1.codec.ber.eoo", MOD_INIT_NAME( pyasn1$codec$ber$eoo ), 0, 0,  },
    { "pyasn1.codec.cer", MOD_INIT_NAME( pyasn1$codec$cer ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1.codec.cer.decoder", MOD_INIT_NAME( pyasn1$codec$cer$decoder ), 0, 0,  },
    { "pyasn1.codec.cer.encoder", MOD_INIT_NAME( pyasn1$codec$cer$encoder ), 0, 0,  },
    { "pyasn1.codec.der", MOD_INIT_NAME( pyasn1$codec$der ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1.codec.der.decoder", MOD_INIT_NAME( pyasn1$codec$der$decoder ), 0, 0,  },
    { "pyasn1.codec.der.encoder", MOD_INIT_NAME( pyasn1$codec$der$encoder ), 0, 0,  },
    { "pyasn1.compat", MOD_INIT_NAME( pyasn1$compat ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1.compat.binary", MOD_INIT_NAME( pyasn1$compat$binary ), 0, 0,  },
    { "pyasn1.compat.calling", MOD_INIT_NAME( pyasn1$compat$calling ), 0, 0,  },
    { "pyasn1.compat.dateandtime", MOD_INIT_NAME( pyasn1$compat$dateandtime ), 0, 0,  },
    { "pyasn1.compat.integer", MOD_INIT_NAME( pyasn1$compat$integer ), 0, 0,  },
    { "pyasn1.compat.octets", MOD_INIT_NAME( pyasn1$compat$octets ), 0, 0,  },
    { "pyasn1.compat.string", MOD_INIT_NAME( pyasn1$compat$string ), 0, 0,  },
    { "pyasn1.debug", MOD_INIT_NAME( pyasn1$debug ), 0, 0,  },
    { "pyasn1.error", MOD_INIT_NAME( pyasn1$error ), 0, 0,  },
    { "pyasn1.type", MOD_INIT_NAME( pyasn1$type ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1.type.base", MOD_INIT_NAME( pyasn1$type$base ), 0, 0,  },
    { "pyasn1.type.char", MOD_INIT_NAME( pyasn1$type$char ), 0, 0,  },
    { "pyasn1.type.constraint", MOD_INIT_NAME( pyasn1$type$constraint ), 0, 0,  },
    { "pyasn1.type.error", MOD_INIT_NAME( pyasn1$type$error ), 0, 0,  },
    { "pyasn1.type.namedtype", MOD_INIT_NAME( pyasn1$type$namedtype ), 0, 0,  },
    { "pyasn1.type.namedval", MOD_INIT_NAME( pyasn1$type$namedval ), 0, 0,  },
    { "pyasn1.type.opentype", MOD_INIT_NAME( pyasn1$type$opentype ), 0, 0,  },
    { "pyasn1.type.tag", MOD_INIT_NAME( pyasn1$type$tag ), 0, 0,  },
    { "pyasn1.type.tagmap", MOD_INIT_NAME( pyasn1$type$tagmap ), 0, 0,  },
    { "pyasn1.type.univ", MOD_INIT_NAME( pyasn1$type$univ ), 0, 0,  },
    { "pyasn1.type.useful", MOD_INIT_NAME( pyasn1$type$useful ), 0, 0,  },
    { "pyasn1_modules", MOD_INIT_NAME( pyasn1_modules ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1_modules.pem", MOD_INIT_NAME( pyasn1_modules$pem ), 0, 0,  },
    { "pyasn1_modules.rfc2251", MOD_INIT_NAME( pyasn1_modules$rfc2251 ), 0, 0,  },
    { "pyasn1_modules.rfc2459", MOD_INIT_NAME( pyasn1_modules$rfc2459 ), 0, 0,  },
    { "pyasn1_modules.rfc5208", MOD_INIT_NAME( pyasn1_modules$rfc5208 ), 0, 0,  },
    { "pycparser", NULL, 4506081, 2431, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "pycparser.ast_transforms", NULL, 4508512, 2484, NUITKA_BYTECODE_FLAG },
    { "pycparser.c_ast", NULL, 4510996, 37248, NUITKA_BYTECODE_FLAG },
    { "pycparser.c_lexer", NULL, 4548244, 11531, NUITKA_BYTECODE_FLAG },
    { "pycparser.c_parser", NULL, 4559775, 60836, NUITKA_BYTECODE_FLAG },
    { "pycparser.lextab", NULL, 4620611, 5589, NUITKA_BYTECODE_FLAG },
    { "pycparser.ply", NULL, 4626200, 173, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "pycparser.ply.lex", NULL, 4626373, 21422, NUITKA_BYTECODE_FLAG },
    { "pycparser.ply.yacc", NULL, 4647795, 53639, NUITKA_BYTECODE_FLAG },
    { "pycparser.plyparser", NULL, 4701434, 4602, NUITKA_BYTECODE_FLAG },
    { "pycparser.yacctab", NULL, 4706036, 141843, NUITKA_BYTECODE_FLAG },
    { "pytest", NULL, 4847879, 2450, NUITKA_BYTECODE_FLAG },
    { "pythoncom", MOD_INIT_NAME( pythoncom ), 0, 0,  },
    { "pywintypes", MOD_INIT_NAME( pywintypes ), 0, 0,  },
    { "requests", MOD_INIT_NAME( requests ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "requests.__version__", MOD_INIT_NAME( requests$__version__ ), 0, 0,  },
    { "requests._internal_utils", MOD_INIT_NAME( requests$_internal_utils ), 0, 0,  },
    { "requests.adapters", MOD_INIT_NAME( requests$adapters ), 0, 0,  },
    { "requests.api", MOD_INIT_NAME( requests$api ), 0, 0,  },
    { "requests.auth", MOD_INIT_NAME( requests$auth ), 0, 0,  },
    { "requests.certs", MOD_INIT_NAME( requests$certs ), 0, 0,  },
    { "requests.compat", MOD_INIT_NAME( requests$compat ), 0, 0,  },
    { "requests.cookies", MOD_INIT_NAME( requests$cookies ), 0, 0,  },
    { "requests.exceptions", MOD_INIT_NAME( requests$exceptions ), 0, 0,  },
    { "requests.hooks", MOD_INIT_NAME( requests$hooks ), 0, 0,  },
    { "requests.models", MOD_INIT_NAME( requests$models ), 0, 0,  },
    { "requests.packages", MOD_INIT_NAME( requests$packages ), 0, 0,  },
    { "requests.sessions", MOD_INIT_NAME( requests$sessions ), 0, 0,  },
    { "requests.status_codes", MOD_INIT_NAME( requests$status_codes ), 0, 0,  },
    { "requests.structures", MOD_INIT_NAME( requests$structures ), 0, 0,  },
    { "requests.utils", MOD_INIT_NAME( requests$utils ), 0, 0,  },
    { "rsa", MOD_INIT_NAME( rsa ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "rsa._compat", MOD_INIT_NAME( rsa$_compat ), 0, 0,  },
    { "rsa.asn1", MOD_INIT_NAME( rsa$asn1 ), 0, 0,  },
    { "rsa.common", MOD_INIT_NAME( rsa$common ), 0, 0,  },
    { "rsa.core", MOD_INIT_NAME( rsa$core ), 0, 0,  },
    { "rsa.key", MOD_INIT_NAME( rsa$key ), 0, 0,  },
    { "rsa.machine_size", MOD_INIT_NAME( rsa$machine_size ), 0, 0,  },
    { "rsa.parallel", MOD_INIT_NAME( rsa$parallel ), 0, 0,  },
    { "rsa.pem", MOD_INIT_NAME( rsa$pem ), 0, 0,  },
    { "rsa.pkcs1", MOD_INIT_NAME( rsa$pkcs1 ), 0, 0,  },
    { "rsa.prime", MOD_INIT_NAME( rsa$prime ), 0, 0,  },
    { "rsa.randnum", MOD_INIT_NAME( rsa$randnum ), 0, 0,  },
    { "rsa.transform", MOD_INIT_NAME( rsa$transform ), 0, 0,  },
    { "scipy", MOD_INIT_NAME( scipy ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy.__config__", MOD_INIT_NAME( scipy$__config__ ), 0, 0,  },
    { "scipy._distributor_init", MOD_INIT_NAME( scipy$_distributor_init ), 0, 0,  },
    { "scipy._lib", MOD_INIT_NAME( scipy$_lib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "scipy._lib._ccallback", MOD_INIT_NAME( scipy$_lib$_ccallback ), 0, 0,  },
    { "scipy._lib._testutils", MOD_INIT_NAME( scipy$_lib$_testutils ), 0, 0,  },
    { "scipy._lib._version", MOD_INIT_NAME( scipy$_lib$_version ), 0, 0,  },
    { "scipy._lib.six", MOD_INIT_NAME( scipy$_lib$six ), 0, 0,  },
    { "scipy.version", MOD_INIT_NAME( scipy$version ), 0, 0,  },
    { "setuptools", NULL, 4850329, 7633, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "setuptools._deprecation_warning", NULL, 4857962, 487, NUITKA_BYTECODE_FLAG },
    { "setuptools._imp", NULL, 4858449, 1868, NUITKA_BYTECODE_FLAG },
    { "setuptools.archive_util", NULL, 4860317, 5068, NUITKA_BYTECODE_FLAG },
    { "setuptools.command", NULL, 4865385, 651, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "setuptools.command.bdist_egg", NULL, 4866036, 14135, NUITKA_BYTECODE_FLAG },
    { "setuptools.command.bdist_rpm", NULL, 4880171, 1722, NUITKA_BYTECODE_FLAG },
    { "setuptools.command.develop", NULL, 4881893, 6403, NUITKA_BYTECODE_FLAG },
    { "setuptools.command.easy_install", NULL, 4888296, 64939, NUITKA_BYTECODE_FLAG },
    { "setuptools.command.egg_info", NULL, 4953235, 21620, NUITKA_BYTECODE_FLAG },
    { "setuptools.command.install", NULL, 4974855, 3975, NUITKA_BYTECODE_FLAG },
    { "setuptools.command.install_scripts", NULL, 4978830, 2230, NUITKA_BYTECODE_FLAG },
    { "setuptools.command.py36compat", NULL, 4981060, 4563, NUITKA_BYTECODE_FLAG },
    { "setuptools.command.sdist", NULL, 4985623, 6962, NUITKA_BYTECODE_FLAG },
    { "setuptools.command.setopt", NULL, 4992585, 4462, NUITKA_BYTECODE_FLAG },
    { "setuptools.config", NULL, 4997047, 17750, NUITKA_BYTECODE_FLAG },
    { "setuptools.depends", NULL, 5014797, 5113, NUITKA_BYTECODE_FLAG },
    { "setuptools.dist", NULL, 5019910, 42314, NUITKA_BYTECODE_FLAG },
    { "setuptools.extension", NULL, 5062224, 1914, NUITKA_BYTECODE_FLAG },
    { "setuptools.extern", NULL, 5064138, 2365, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "setuptools.glob", NULL, 5066503, 3689, NUITKA_BYTECODE_FLAG },
    { "setuptools.installer", NULL, 5070192, 3377, NUITKA_BYTECODE_FLAG },
    { "setuptools.monkey", NULL, 5073569, 4573, NUITKA_BYTECODE_FLAG },
    { "setuptools.namespaces", NULL, 5078142, 3551, NUITKA_BYTECODE_FLAG },
    { "setuptools.package_index", NULL, 5081693, 32646, NUITKA_BYTECODE_FLAG },
    { "setuptools.py27compat", NULL, 5114339, 1703, NUITKA_BYTECODE_FLAG },
    { "setuptools.py31compat", NULL, 5116042, 1148, NUITKA_BYTECODE_FLAG },
    { "setuptools.py33compat", NULL, 5117190, 1375, NUITKA_BYTECODE_FLAG },
    { "setuptools.py34compat", NULL, 5118565, 421, NUITKA_BYTECODE_FLAG },
    { "setuptools.sandbox", NULL, 5118986, 15475, NUITKA_BYTECODE_FLAG },
    { "setuptools.ssl_support", NULL, 5134461, 6731, NUITKA_BYTECODE_FLAG },
    { "setuptools.unicode_utils", NULL, 5141192, 1108, NUITKA_BYTECODE_FLAG },
    { "setuptools.version", NULL, 5142300, 267, NUITKA_BYTECODE_FLAG },
    { "setuptools.wheel", NULL, 5142567, 7248, NUITKA_BYTECODE_FLAG },
    { "setuptools.windows_support", NULL, 5149815, 950, NUITKA_BYTECODE_FLAG },
    { "six", MOD_INIT_NAME( six ), 0, 0,  },
    { "socks", MOD_INIT_NAME( socks ), 0, 0,  },
    { "urllib3", MOD_INIT_NAME( urllib3 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3._collections", MOD_INIT_NAME( urllib3$_collections ), 0, 0,  },
    { "urllib3.connection", MOD_INIT_NAME( urllib3$connection ), 0, 0,  },
    { "urllib3.connectionpool", MOD_INIT_NAME( urllib3$connectionpool ), 0, 0,  },
    { "urllib3.contrib", MOD_INIT_NAME( urllib3$contrib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.contrib._appengine_environ", MOD_INIT_NAME( urllib3$contrib$_appengine_environ ), 0, 0,  },
    { "urllib3.contrib.pyopenssl", MOD_INIT_NAME( urllib3$contrib$pyopenssl ), 0, 0,  },
    { "urllib3.contrib.socks", MOD_INIT_NAME( urllib3$contrib$socks ), 0, 0,  },
    { "urllib3.exceptions", MOD_INIT_NAME( urllib3$exceptions ), 0, 0,  },
    { "urllib3.fields", MOD_INIT_NAME( urllib3$fields ), 0, 0,  },
    { "urllib3.filepost", MOD_INIT_NAME( urllib3$filepost ), 0, 0,  },
    { "urllib3.packages", MOD_INIT_NAME( urllib3$packages ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.packages.backports", MOD_INIT_NAME( urllib3$packages$backports ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.packages.backports.makefile", MOD_INIT_NAME( urllib3$packages$backports$makefile ), 0, 0,  },
    { "urllib3.packages.six", MOD_INIT_NAME( urllib3$packages$six ), 0, 0,  },
    { "urllib3.packages.ssl_match_hostname", MOD_INIT_NAME( urllib3$packages$ssl_match_hostname ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.packages.ssl_match_hostname._implementation", MOD_INIT_NAME( urllib3$packages$ssl_match_hostname$_implementation ), 0, 0,  },
    { "urllib3.poolmanager", MOD_INIT_NAME( urllib3$poolmanager ), 0, 0,  },
    { "urllib3.request", MOD_INIT_NAME( urllib3$request ), 0, 0,  },
    { "urllib3.response", MOD_INIT_NAME( urllib3$response ), 0, 0,  },
    { "urllib3.util", MOD_INIT_NAME( urllib3$util ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "urllib3.util.connection", MOD_INIT_NAME( urllib3$util$connection ), 0, 0,  },
    { "urllib3.util.queue", MOD_INIT_NAME( urllib3$util$queue ), 0, 0,  },
    { "urllib3.util.request", MOD_INIT_NAME( urllib3$util$request ), 0, 0,  },
    { "urllib3.util.response", MOD_INIT_NAME( urllib3$util$response ), 0, 0,  },
    { "urllib3.util.retry", MOD_INIT_NAME( urllib3$util$retry ), 0, 0,  },
    { "urllib3.util.ssl_", MOD_INIT_NAME( urllib3$util$ssl_ ), 0, 0,  },
    { "urllib3.util.timeout", MOD_INIT_NAME( urllib3$util$timeout ), 0, 0,  },
    { "urllib3.util.url", MOD_INIT_NAME( urllib3$util$url ), 0, 0,  },
    { "urllib3.util.wait", MOD_INIT_NAME( urllib3$util$wait ), 0, 0,  },
    { "websocket", MOD_INIT_NAME( websocket ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "websocket._abnf", MOD_INIT_NAME( websocket$_abnf ), 0, 0,  },
    { "websocket._app", MOD_INIT_NAME( websocket$_app ), 0, 0,  },
    { "websocket._cookiejar", MOD_INIT_NAME( websocket$_cookiejar ), 0, 0,  },
    { "websocket._core", MOD_INIT_NAME( websocket$_core ), 0, 0,  },
    { "websocket._exceptions", MOD_INIT_NAME( websocket$_exceptions ), 0, 0,  },
    { "websocket._handshake", MOD_INIT_NAME( websocket$_handshake ), 0, 0,  },
    { "websocket._http", MOD_INIT_NAME( websocket$_http ), 0, 0,  },
    { "websocket._logging", MOD_INIT_NAME( websocket$_logging ), 0, 0,  },
    { "websocket._socket", MOD_INIT_NAME( websocket$_socket ), 0, 0,  },
    { "websocket._ssl_compat", MOD_INIT_NAME( websocket$_ssl_compat ), 0, 0,  },
    { "websocket._url", MOD_INIT_NAME( websocket$_url ), 0, 0,  },
    { "websocket._utils", MOD_INIT_NAME( websocket$_utils ), 0, 0,  },
    { "win32com", MOD_INIT_NAME( win32com ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "win32com.shell", MOD_INIT_NAME( win32com$shell ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "win32com.shell.shellcon", MOD_INIT_NAME( win32com$shell$shellcon ), 0, 0,  },
    { "zipp", MOD_INIT_NAME( zipp ), 0, 0,  },
    { NULL, NULL, 0, 0, 0 }
};

void setupMetaPathBasedLoader( void )
{
    static bool init_done = false;

    if ( init_done == false )
    {
        registerMetaPathBasedUnfreezer( meta_path_loader_entries );
        init_done = true;
    }
}
