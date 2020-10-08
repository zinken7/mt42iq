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
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
MOD_INIT_DECL(__main__);
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { "__main__", MOD_INIT_NAME( __main__ ), 0, 0,  },
    { "_asyncio", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_decimal", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_elementtree", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_lzma", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_msi", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_overlapped", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_queue", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_socket", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_tkinter", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "os", NULL, 480, 29654, NUITKA_BYTECODE_FLAG },
    { "pyexpat", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "select", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "site", NULL, 30134, 13111, NUITKA_BYTECODE_FLAG },
    { "types", NULL, 43245, 8937, NUITKA_BYTECODE_FLAG },
    { "unicodedata", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "__future__", NULL, 52182, 4093, NUITKA_BYTECODE_FLAG },
    { "_bootlocale", NULL, 56275, 1210, NUITKA_BYTECODE_FLAG },
    { "_compat_pickle", NULL, 57485, 5769, NUITKA_BYTECODE_FLAG },
    { "_dummy_thread", NULL, 63254, 5950, NUITKA_BYTECODE_FLAG },
    { "_markupbase", NULL, 69204, 7746, NUITKA_BYTECODE_FLAG },
    { "_osx_support", NULL, 76950, 9556, NUITKA_BYTECODE_FLAG },
    { "_py_abc", NULL, 86506, 4615, NUITKA_BYTECODE_FLAG },
    { "_pyio", NULL, 91121, 72829, NUITKA_BYTECODE_FLAG },
    { "_sitebuiltins", NULL, 163950, 3426, NUITKA_BYTECODE_FLAG },
    { "_strptime", NULL, 167376, 16065, NUITKA_BYTECODE_FLAG },
    { "_threading_local", NULL, 183441, 6373, NUITKA_BYTECODE_FLAG },
    { "aifc", NULL, 189814, 26104, NUITKA_BYTECODE_FLAG },
    { "argparse", NULL, 215918, 61874, NUITKA_BYTECODE_FLAG },
    { "ast", NULL, 277792, 12041, NUITKA_BYTECODE_FLAG },
    { "asynchat", NULL, 289833, 6795, NUITKA_BYTECODE_FLAG },
    { "asyncio", NULL, 296628, 651, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "asyncio.base_events", NULL, 297279, 48067, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_futures", NULL, 345346, 2063, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_subprocess", NULL, 347409, 9152, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_tasks", NULL, 356561, 1827, NUITKA_BYTECODE_FLAG },
    { "asyncio.constants", NULL, 358388, 552, NUITKA_BYTECODE_FLAG },
    { "asyncio.coroutines", NULL, 358940, 6339, NUITKA_BYTECODE_FLAG },
    { "asyncio.events", NULL, 365279, 27816, NUITKA_BYTECODE_FLAG },
    { "asyncio.format_helpers", NULL, 393095, 2278, NUITKA_BYTECODE_FLAG },
    { "asyncio.futures", NULL, 395373, 10706, NUITKA_BYTECODE_FLAG },
    { "asyncio.locks", NULL, 406079, 15874, NUITKA_BYTECODE_FLAG },
    { "asyncio.log", NULL, 421953, 201, NUITKA_BYTECODE_FLAG },
    { "asyncio.proactor_events", NULL, 422154, 20049, NUITKA_BYTECODE_FLAG },
    { "asyncio.protocols", NULL, 442203, 8689, NUITKA_BYTECODE_FLAG },
    { "asyncio.queues", NULL, 450892, 8134, NUITKA_BYTECODE_FLAG },
    { "asyncio.runners", NULL, 459026, 1875, NUITKA_BYTECODE_FLAG },
    { "asyncio.selector_events", NULL, 460901, 28141, NUITKA_BYTECODE_FLAG },
    { "asyncio.sslproto", NULL, 489042, 21220, NUITKA_BYTECODE_FLAG },
    { "asyncio.streams", NULL, 510262, 20249, NUITKA_BYTECODE_FLAG },
    { "asyncio.subprocess", NULL, 530511, 6713, NUITKA_BYTECODE_FLAG },
    { "asyncio.tasks", NULL, 537224, 22280, NUITKA_BYTECODE_FLAG },
    { "asyncio.transports", NULL, 559504, 12172, NUITKA_BYTECODE_FLAG },
    { "asyncio.windows_events", NULL, 571676, 23029, NUITKA_BYTECODE_FLAG },
    { "asyncio.windows_utils", NULL, 594705, 4362, NUITKA_BYTECODE_FLAG },
    { "asyncore", NULL, 599067, 15805, NUITKA_BYTECODE_FLAG },
    { "bdb", NULL, 614872, 24608, NUITKA_BYTECODE_FLAG },
    { "binhex", NULL, 639480, 12020, NUITKA_BYTECODE_FLAG },
    { "bisect", NULL, 651500, 2659, NUITKA_BYTECODE_FLAG },
    { "cProfile", NULL, 654159, 4769, NUITKA_BYTECODE_FLAG },
    { "calendar", NULL, 658928, 27385, NUITKA_BYTECODE_FLAG },
    { "cgi", NULL, 686313, 27152, NUITKA_BYTECODE_FLAG },
    { "cgitb", NULL, 713465, 10073, NUITKA_BYTECODE_FLAG },
    { "chunk", NULL, 723538, 4880, NUITKA_BYTECODE_FLAG },
    { "cmd", NULL, 728418, 12551, NUITKA_BYTECODE_FLAG },
    { "code", NULL, 740969, 9819, NUITKA_BYTECODE_FLAG },
    { "codeop", NULL, 750788, 6251, NUITKA_BYTECODE_FLAG },
    { "colorsys", NULL, 757039, 3258, NUITKA_BYTECODE_FLAG },
    { "compileall", NULL, 760297, 9067, NUITKA_BYTECODE_FLAG },
    { "concurrent", NULL, 769364, 107, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "concurrent.futures", NULL, 769471, 1047, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "concurrent.futures._base", NULL, 770518, 21145, NUITKA_BYTECODE_FLAG },
    { "concurrent.futures.process", NULL, 791663, 19954, NUITKA_BYTECODE_FLAG },
    { "concurrent.futures.thread", NULL, 811617, 5394, NUITKA_BYTECODE_FLAG },
    { "configparser", NULL, 817011, 45841, NUITKA_BYTECODE_FLAG },
    { "contextlib", NULL, 862852, 20419, NUITKA_BYTECODE_FLAG },
    { "contextvars", NULL, 883271, 218, NUITKA_BYTECODE_FLAG },
    { "copy", NULL, 883489, 7062, NUITKA_BYTECODE_FLAG },
    { "csv", NULL, 890551, 11793, NUITKA_BYTECODE_FLAG },
    { "ctypes", NULL, 902344, 16340, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes._aix", NULL, 918684, 9784, NUITKA_BYTECODE_FLAG },
    { "ctypes._endian", NULL, 928468, 1917, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib", NULL, 930385, 274, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes.macholib.dyld", NULL, 930659, 4307, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib.dylib", NULL, 934966, 1901, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib.framework", NULL, 936867, 2181, NUITKA_BYTECODE_FLAG },
    { "ctypes.util", NULL, 939048, 7710, NUITKA_BYTECODE_FLAG },
    { "ctypes.wintypes", NULL, 946758, 5078, NUITKA_BYTECODE_FLAG },
    { "dataclasses", NULL, 951836, 22426, NUITKA_BYTECODE_FLAG },
    { "datetime", NULL, 974262, 57210, NUITKA_BYTECODE_FLAG },
    { "dbm", NULL, 1031472, 4127, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "dbm.dumb", NULL, 1035599, 8361, NUITKA_BYTECODE_FLAG },
    { "decimal", NULL, 1043960, 162133, NUITKA_BYTECODE_FLAG },
    { "difflib", NULL, 1206093, 59399, NUITKA_BYTECODE_FLAG },
    { "distutils", NULL, 1265492, 359, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils._msvccompiler", NULL, 1265851, 13579, NUITKA_BYTECODE_FLAG },
    { "distutils.archive_util", NULL, 1279430, 6493, NUITKA_BYTECODE_FLAG },
    { "distutils.bcppcompiler", NULL, 1285923, 6462, NUITKA_BYTECODE_FLAG },
    { "distutils.ccompiler", NULL, 1292385, 33177, NUITKA_BYTECODE_FLAG },
    { "distutils.cmd", NULL, 1325562, 13869, NUITKA_BYTECODE_FLAG },
    { "distutils.command", NULL, 1339431, 516, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils.command.bdist", NULL, 1339947, 3615, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_dumb", NULL, 1343562, 3530, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_msi", NULL, 1347092, 19362, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_rpm", NULL, 1366454, 12455, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_wininst", NULL, 1378909, 7970, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build", NULL, 1386879, 3804, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_clib", NULL, 1390683, 4846, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_ext", NULL, 1395529, 15753, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_py", NULL, 1411282, 10352, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_scripts", NULL, 1421634, 4251, NUITKA_BYTECODE_FLAG },
    { "distutils.command.check", NULL, 1425885, 4800, NUITKA_BYTECODE_FLAG },
    { "distutils.command.clean", NULL, 1430685, 2053, NUITKA_BYTECODE_FLAG },
    { "distutils.command.config", NULL, 1432738, 10157, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install", NULL, 1442895, 13480, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_data", NULL, 1456375, 2246, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_egg_info", NULL, 1458621, 2944, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_headers", NULL, 1461565, 1661, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_lib", NULL, 1463226, 5039, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_scripts", NULL, 1468265, 2103, NUITKA_BYTECODE_FLAG },
    { "distutils.command.register", NULL, 1470368, 8438, NUITKA_BYTECODE_FLAG },
    { "distutils.command.sdist", NULL, 1478806, 14469, NUITKA_BYTECODE_FLAG },
    { "distutils.command.upload", NULL, 1493275, 5051, NUITKA_BYTECODE_FLAG },
    { "distutils.config", NULL, 1498326, 3446, NUITKA_BYTECODE_FLAG },
    { "distutils.core", NULL, 1501772, 6571, NUITKA_BYTECODE_FLAG },
    { "distutils.cygwinccompiler", NULL, 1508343, 8489, NUITKA_BYTECODE_FLAG },
    { "distutils.debug", NULL, 1516832, 169, NUITKA_BYTECODE_FLAG },
    { "distutils.dep_util", NULL, 1517001, 2685, NUITKA_BYTECODE_FLAG },
    { "distutils.dir_util", NULL, 1519686, 5779, NUITKA_BYTECODE_FLAG },
    { "distutils.dist", NULL, 1525465, 34400, NUITKA_BYTECODE_FLAG },
    { "distutils.errors", NULL, 1559865, 5455, NUITKA_BYTECODE_FLAG },
    { "distutils.extension", NULL, 1565320, 6866, NUITKA_BYTECODE_FLAG },
    { "distutils.fancy_getopt", NULL, 1572186, 10578, NUITKA_BYTECODE_FLAG },
    { "distutils.file_util", NULL, 1582764, 5864, NUITKA_BYTECODE_FLAG },
    { "distutils.filelist", NULL, 1588628, 9799, NUITKA_BYTECODE_FLAG },
    { "distutils.log", NULL, 1598427, 2280, NUITKA_BYTECODE_FLAG },
    { "distutils.msvc9compiler", NULL, 1600707, 17344, NUITKA_BYTECODE_FLAG },
    { "distutils.msvccompiler", NULL, 1618051, 14532, NUITKA_BYTECODE_FLAG },
    { "distutils.spawn", NULL, 1632583, 5083, NUITKA_BYTECODE_FLAG },
    { "distutils.sysconfig", NULL, 1637666, 11957, NUITKA_BYTECODE_FLAG },
    { "distutils.text_file", NULL, 1649623, 8406, NUITKA_BYTECODE_FLAG },
    { "distutils.unixccompiler", NULL, 1658029, 6501, NUITKA_BYTECODE_FLAG },
    { "distutils.util", NULL, 1664530, 15062, NUITKA_BYTECODE_FLAG },
    { "distutils.version", NULL, 1679592, 7317, NUITKA_BYTECODE_FLAG },
    { "distutils.versionpredicate", NULL, 1686909, 5064, NUITKA_BYTECODE_FLAG },
    { "doctest", NULL, 1691973, 75395, NUITKA_BYTECODE_FLAG },
    { "dummy_threading", NULL, 1767368, 1085, NUITKA_BYTECODE_FLAG },
    { "email", NULL, 1768453, 1652, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email._encoded_words", NULL, 1770105, 5569, NUITKA_BYTECODE_FLAG },
    { "email._header_value_parser", NULL, 1775674, 76104, NUITKA_BYTECODE_FLAG },
    { "email._parseaddr", NULL, 1851778, 12309, NUITKA_BYTECODE_FLAG },
    { "email._policybase", NULL, 1864087, 14811, NUITKA_BYTECODE_FLAG },
    { "email.base64mime", NULL, 1878898, 3196, NUITKA_BYTECODE_FLAG },
    { "email.charset", NULL, 1882094, 11490, NUITKA_BYTECODE_FLAG },
    { "email.contentmanager", NULL, 1893584, 7256, NUITKA_BYTECODE_FLAG },
    { "email.encoders", NULL, 1900840, 1625, NUITKA_BYTECODE_FLAG },
    { "email.errors", NULL, 1902465, 6152, NUITKA_BYTECODE_FLAG },
    { "email.feedparser", NULL, 1908617, 10590, NUITKA_BYTECODE_FLAG },
    { "email.generator", NULL, 1919207, 12461, NUITKA_BYTECODE_FLAG },
    { "email.header", NULL, 1931668, 16347, NUITKA_BYTECODE_FLAG },
    { "email.headerregistry", NULL, 1948015, 21258, NUITKA_BYTECODE_FLAG },
    { "email.iterators", NULL, 1969273, 1893, NUITKA_BYTECODE_FLAG },
    { "email.message", NULL, 1971166, 37901, NUITKA_BYTECODE_FLAG },
    { "email.mime", NULL, 2009067, 107, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email.mime.application", NULL, 2009174, 1418, NUITKA_BYTECODE_FLAG },
    { "email.mime.audio", NULL, 2010592, 2577, NUITKA_BYTECODE_FLAG },
    { "email.mime.base", NULL, 2013169, 1043, NUITKA_BYTECODE_FLAG },
    { "email.mime.image", NULL, 2014212, 1863, NUITKA_BYTECODE_FLAG },
    { "email.mime.message", NULL, 2016075, 1292, NUITKA_BYTECODE_FLAG },
    { "email.mime.multipart", NULL, 2017367, 1514, NUITKA_BYTECODE_FLAG },
    { "email.mime.nonmultipart", NULL, 2018881, 729, NUITKA_BYTECODE_FLAG },
    { "email.mime.text", NULL, 2019610, 1276, NUITKA_BYTECODE_FLAG },
    { "email.parser", NULL, 2020886, 5708, NUITKA_BYTECODE_FLAG },
    { "email.policy", NULL, 2026594, 9616, NUITKA_BYTECODE_FLAG },
    { "email.quoprimime", NULL, 2036210, 7625, NUITKA_BYTECODE_FLAG },
    { "email.utils", NULL, 2043835, 9428, NUITKA_BYTECODE_FLAG },
    { "filecmp", NULL, 2053263, 8268, NUITKA_BYTECODE_FLAG },
    { "fileinput", NULL, 2061531, 13216, NUITKA_BYTECODE_FLAG },
    { "fnmatch", NULL, 2074747, 3298, NUITKA_BYTECODE_FLAG },
    { "formatter", NULL, 2078045, 17514, NUITKA_BYTECODE_FLAG },
    { "fractions", NULL, 2095559, 18389, NUITKA_BYTECODE_FLAG },
    { "ftplib", NULL, 2113948, 28028, NUITKA_BYTECODE_FLAG },
    { "getopt", NULL, 2141976, 6200, NUITKA_BYTECODE_FLAG },
    { "getpass", NULL, 2148176, 4125, NUITKA_BYTECODE_FLAG },
    { "gettext", NULL, 2152301, 14129, NUITKA_BYTECODE_FLAG },
    { "glob", NULL, 2166430, 4220, NUITKA_BYTECODE_FLAG },
    { "gzip", NULL, 2170650, 17146, NUITKA_BYTECODE_FLAG },
    { "hashlib", NULL, 2187796, 6552, NUITKA_BYTECODE_FLAG },
    { "hmac", NULL, 2194348, 6074, NUITKA_BYTECODE_FLAG },
    { "html", NULL, 2200422, 3358, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "html.entities", NULL, 2203780, 50430, NUITKA_BYTECODE_FLAG },
    { "html.parser", NULL, 2254210, 11068, NUITKA_BYTECODE_FLAG },
    { "http", NULL, 2265278, 5883, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "http.client", NULL, 2271161, 34277, NUITKA_BYTECODE_FLAG },
    { "http.cookiejar", NULL, 2305438, 53546, NUITKA_BYTECODE_FLAG },
    { "http.cookies", NULL, 2358984, 15205, NUITKA_BYTECODE_FLAG },
    { "http.server", NULL, 2374189, 33328, NUITKA_BYTECODE_FLAG },
    { "imaplib", NULL, 2407517, 41391, NUITKA_BYTECODE_FLAG },
    { "imghdr", NULL, 2448908, 4103, NUITKA_BYTECODE_FLAG },
    { "imp", NULL, 2453011, 9714, NUITKA_BYTECODE_FLAG },
    { "importlib.abc", NULL, 2462725, 13448, NUITKA_BYTECODE_FLAG },
    { "importlib.resources", NULL, 2476173, 8300, NUITKA_BYTECODE_FLAG },
    { "importlib.util", NULL, 2484473, 9317, NUITKA_BYTECODE_FLAG },
    { "ipaddress", NULL, 2493790, 63061, NUITKA_BYTECODE_FLAG },
    { "json", NULL, 2556851, 12299, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "json.decoder", NULL, 2569150, 9785, NUITKA_BYTECODE_FLAG },
    { "json.encoder", NULL, 2578935, 11267, NUITKA_BYTECODE_FLAG },
    { "json.scanner", NULL, 2590202, 1957, NUITKA_BYTECODE_FLAG },
    { "json.tool", NULL, 2592159, 1438, NUITKA_BYTECODE_FLAG },
    { "lib2to3", NULL, 2593597, 104, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.btm_matcher", NULL, 2593701, 4854, NUITKA_BYTECODE_FLAG },
    { "lib2to3.btm_utils", NULL, 2598555, 6104, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixer_base", NULL, 2604659, 6196, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixer_util", NULL, 2610855, 12007, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes", NULL, 2622862, 110, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.fixes.fix_apply", NULL, 2622972, 1648, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_asserts", NULL, 2624620, 1233, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_basestring", NULL, 2625853, 623, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_buffer", NULL, 2626476, 768, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_dict", NULL, 2627244, 3276, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_except", NULL, 2630520, 2778, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_exec", NULL, 2633298, 1109, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_execfile", NULL, 2634407, 1653, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_exitfunc", NULL, 2636060, 2256, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_filter", NULL, 2638316, 2321, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_funcattrs", NULL, 2640637, 934, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_future", NULL, 2641571, 744, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_getcwdu", NULL, 2642315, 748, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_has_key", NULL, 2643063, 2878, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_idioms", NULL, 2645941, 3863, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_import", NULL, 2649804, 2745, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_imports", NULL, 2652549, 4309, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_imports2", NULL, 2656858, 508, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_input", NULL, 2657366, 910, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_intern", NULL, 2658276, 1117, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_isinstance", NULL, 2659393, 1515, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_itertools", NULL, 2660908, 1504, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_itertools_imports", NULL, 2662412, 1540, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_long", NULL, 2663952, 665, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_map", NULL, 2664617, 3053, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_metaclass", NULL, 2667670, 5306, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_methodattrs", NULL, 2672976, 896, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_ne", NULL, 2673872, 767, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_next", NULL, 2674639, 3020, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_nonzero", NULL, 2677659, 883, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_numliterals", NULL, 2678542, 979, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_operator", NULL, 2679521, 4196, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_paren", NULL, 2683717, 1350, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_print", NULL, 2685067, 2285, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_raise", NULL, 2687352, 2209, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_raw_input", NULL, 2689561, 755, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_reduce", NULL, 2690316, 1090, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_reload", NULL, 2691406, 1129, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_renames", NULL, 2692535, 1953, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_repr", NULL, 2694488, 805, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_set_literal", NULL, 2695293, 1637, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_standarderror", NULL, 2696930, 680, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_sys_exc", NULL, 2697610, 1361, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_throw", NULL, 2698971, 1762, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_tuple_params", NULL, 2700733, 4556, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_types", NULL, 2705289, 1789, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_unicode", NULL, 2707078, 1501, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_urllib", NULL, 2708579, 5921, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_ws_comma", NULL, 2714500, 1083, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_xrange", NULL, 2715583, 2496, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_xreadlines", NULL, 2718079, 1077, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_zip", NULL, 2719156, 1541, NUITKA_BYTECODE_FLAG },
    { "lib2to3.main", NULL, 2720697, 8497, NUITKA_BYTECODE_FLAG },
    { "lib2to3.patcomp", NULL, 2729194, 5572, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2", NULL, 2734766, 140, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.pgen2.driver", NULL, 2734906, 5101, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.grammar", NULL, 2740007, 6977, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.literals", NULL, 2746984, 1519, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.parse", NULL, 2748503, 6265, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.pgen", NULL, 2754768, 9741, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.token", NULL, 2764509, 1833, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.tokenize", NULL, 2766342, 15100, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pygram", NULL, 2781442, 1159, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pytree", NULL, 2782601, 24964, NUITKA_BYTECODE_FLAG },
    { "lib2to3.refactor", NULL, 2807565, 20365, NUITKA_BYTECODE_FLAG },
    { "logging", NULL, 2827930, 62363, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "logging.config", NULL, 2890293, 22976, NUITKA_BYTECODE_FLAG },
    { "logging.handlers", NULL, 2913269, 42993, NUITKA_BYTECODE_FLAG },
    { "lzma", NULL, 2956262, 11900, NUITKA_BYTECODE_FLAG },
    { "macpath", NULL, 2968162, 5768, NUITKA_BYTECODE_FLAG },
    { "mailbox", NULL, 2973930, 63609, NUITKA_BYTECODE_FLAG },
    { "mailcap", NULL, 3037539, 6445, NUITKA_BYTECODE_FLAG },
    { "mimetypes", NULL, 3043984, 15439, NUITKA_BYTECODE_FLAG },
    { "modulefinder", NULL, 3059423, 15313, NUITKA_BYTECODE_FLAG },
    { "msilib", NULL, 3074736, 15798, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "msilib.schema", NULL, 3090534, 56930, NUITKA_BYTECODE_FLAG },
    { "msilib.sequence", NULL, 3147464, 2585, NUITKA_BYTECODE_FLAG },
    { "msilib.text", NULL, 3150049, 8942, NUITKA_BYTECODE_FLAG },
    { "multiprocessing", NULL, 3158991, 488, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "multiprocessing.connection", NULL, 3159479, 24893, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.context", NULL, 3184372, 13074, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.dummy", NULL, 3197446, 3766, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "multiprocessing.dummy.connection", NULL, 3201212, 2474, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.forkserver", NULL, 3203686, 7725, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.heap", NULL, 3211411, 6385, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.managers", NULL, 3217796, 34326, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.pool", NULL, 3252122, 21197, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.popen_spawn_win32", NULL, 3273319, 3393, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.process", NULL, 3276712, 9387, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.queues", NULL, 3286099, 9398, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.reduction", NULL, 3295497, 7979, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.resource_sharer", NULL, 3303476, 5165, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.semaphore_tracker", NULL, 3308641, 3701, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.sharedctypes", NULL, 3312342, 6878, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.spawn", NULL, 3319220, 6429, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.synchronize", NULL, 3325649, 11144, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.util", NULL, 3336793, 9908, NUITKA_BYTECODE_FLAG },
    { "netrc", NULL, 3346701, 3724, NUITKA_BYTECODE_FLAG },
    { "nntplib", NULL, 3350425, 33712, NUITKA_BYTECODE_FLAG },
    { "nturl2path", NULL, 3384137, 1576, NUITKA_BYTECODE_FLAG },
    { "numbers", NULL, 3385713, 12153, NUITKA_BYTECODE_FLAG },
    { "optparse", NULL, 3397866, 47854, NUITKA_BYTECODE_FLAG },
    { "pathlib", NULL, 3445720, 41707, NUITKA_BYTECODE_FLAG },
    { "pdb", NULL, 3487427, 46889, NUITKA_BYTECODE_FLAG },
    { "pickle", NULL, 3534316, 43002, NUITKA_BYTECODE_FLAG },
    { "pickletools", NULL, 3577318, 65292, NUITKA_BYTECODE_FLAG },
    { "pipes", NULL, 3642610, 7764, NUITKA_BYTECODE_FLAG },
    { "pkgutil", NULL, 3650374, 16321, NUITKA_BYTECODE_FLAG },
    { "platform", NULL, 3666695, 28125, NUITKA_BYTECODE_FLAG },
    { "plistlib", NULL, 3694820, 25056, NUITKA_BYTECODE_FLAG },
    { "poplib", NULL, 3719876, 13297, NUITKA_BYTECODE_FLAG },
    { "posixpath", NULL, 3733173, 10390, NUITKA_BYTECODE_FLAG },
    { "pprint", NULL, 3743563, 15794, NUITKA_BYTECODE_FLAG },
    { "profile", NULL, 3759357, 14053, NUITKA_BYTECODE_FLAG },
    { "pstats", NULL, 3773410, 22255, NUITKA_BYTECODE_FLAG },
    { "py_compile", NULL, 3795665, 7152, NUITKA_BYTECODE_FLAG },
    { "pyclbr", NULL, 3802817, 10334, NUITKA_BYTECODE_FLAG },
    { "pydoc", NULL, 3813151, 84391, NUITKA_BYTECODE_FLAG },
    { "pydoc_data", NULL, 3897542, 107, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "pydoc_data.topics", NULL, 3897649, 411693, NUITKA_BYTECODE_FLAG },
    { "queue", NULL, 4309342, 11433, NUITKA_BYTECODE_FLAG },
    { "random", NULL, 4320775, 19369, NUITKA_BYTECODE_FLAG },
    { "rlcompleter", NULL, 4340144, 5708, NUITKA_BYTECODE_FLAG },
    { "runpy", NULL, 4345852, 7906, NUITKA_BYTECODE_FLAG },
    { "sched", NULL, 4353758, 6482, NUITKA_BYTECODE_FLAG },
    { "secrets", NULL, 4360240, 2145, NUITKA_BYTECODE_FLAG },
    { "selectors", NULL, 4362385, 16909, NUITKA_BYTECODE_FLAG },
    { "shelve", NULL, 4379294, 9467, NUITKA_BYTECODE_FLAG },
    { "shlex", NULL, 4388761, 6951, NUITKA_BYTECODE_FLAG },
    { "shutil", NULL, 4395712, 30941, NUITKA_BYTECODE_FLAG },
    { "signal", NULL, 4426653, 2473, NUITKA_BYTECODE_FLAG },
    { "site", NULL, 30134, 13111, NUITKA_BYTECODE_FLAG },
    { "smtpd", NULL, 4429126, 26565, NUITKA_BYTECODE_FLAG },
    { "smtplib", NULL, 4455691, 35311, NUITKA_BYTECODE_FLAG },
    { "sndhdr", NULL, 4491002, 6864, NUITKA_BYTECODE_FLAG },
    { "socket", NULL, 4497866, 21982, NUITKA_BYTECODE_FLAG },
    { "socketserver", NULL, 4519848, 24160, NUITKA_BYTECODE_FLAG },
    { "sqlite3", NULL, 4544008, 135, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "sqlite3.dbapi2", NULL, 4544143, 2454, NUITKA_BYTECODE_FLAG },
    { "sqlite3.dump", NULL, 4546597, 1897, NUITKA_BYTECODE_FLAG },
    { "ssl", NULL, 4548494, 39351, NUITKA_BYTECODE_FLAG },
    { "statistics", NULL, 4587845, 18125, NUITKA_BYTECODE_FLAG },
    { "string", NULL, 4605970, 7796, NUITKA_BYTECODE_FLAG },
    { "subprocess", NULL, 4613766, 38749, NUITKA_BYTECODE_FLAG },
    { "sunau", NULL, 4652515, 17172, NUITKA_BYTECODE_FLAG },
    { "symbol", NULL, 4669687, 2526, NUITKA_BYTECODE_FLAG },
    { "symtable", NULL, 4672213, 10406, NUITKA_BYTECODE_FLAG },
    { "sysconfig", NULL, 4682619, 15405, NUITKA_BYTECODE_FLAG },
    { "tabnanny", NULL, 4698024, 6939, NUITKA_BYTECODE_FLAG },
    { "tarfile", NULL, 4704963, 61802, NUITKA_BYTECODE_FLAG },
    { "telnetlib", NULL, 4766765, 18063, NUITKA_BYTECODE_FLAG },
    { "tempfile", NULL, 4784828, 22106, NUITKA_BYTECODE_FLAG },
    { "textwrap", NULL, 4806934, 13573, NUITKA_BYTECODE_FLAG },
    { "this", NULL, 4820507, 1238, NUITKA_BYTECODE_FLAG },
    { "timeit", NULL, 4821745, 11608, NUITKA_BYTECODE_FLAG },
    { "tkinter", NULL, 4833353, 179136, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "tkinter.colorchooser", NULL, 5012489, 1096, NUITKA_BYTECODE_FLAG },
    { "tkinter.commondialog", NULL, 5013585, 1077, NUITKA_BYTECODE_FLAG },
    { "tkinter.constants", NULL, 5014662, 1629, NUITKA_BYTECODE_FLAG },
    { "tkinter.dialog", NULL, 5016291, 1405, NUITKA_BYTECODE_FLAG },
    { "tkinter.dnd", NULL, 5017696, 11147, NUITKA_BYTECODE_FLAG },
    { "tkinter.filedialog", NULL, 5028843, 12231, NUITKA_BYTECODE_FLAG },
    { "tkinter.font", NULL, 5041074, 6148, NUITKA_BYTECODE_FLAG },
    { "tkinter.messagebox", NULL, 5047222, 3013, NUITKA_BYTECODE_FLAG },
    { "tkinter.scrolledtext", NULL, 5050235, 2140, NUITKA_BYTECODE_FLAG },
    { "tkinter.simpledialog", NULL, 5052375, 10507, NUITKA_BYTECODE_FLAG },
    { "tkinter.tix", NULL, 5062882, 83627, NUITKA_BYTECODE_FLAG },
    { "tkinter.ttk", NULL, 5146509, 57811, NUITKA_BYTECODE_FLAG },
    { "trace", NULL, 5204320, 19363, NUITKA_BYTECODE_FLAG },
    { "tracemalloc", NULL, 5223683, 17237, NUITKA_BYTECODE_FLAG },
    { "turtle", NULL, 5240920, 130752, NUITKA_BYTECODE_FLAG },
    { "typing", NULL, 5371672, 49941, NUITKA_BYTECODE_FLAG },
    { "unittest", NULL, 5421613, 2972, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "unittest.case", NULL, 5424585, 48319, NUITKA_BYTECODE_FLAG },
    { "unittest.loader", NULL, 5472904, 14237, NUITKA_BYTECODE_FLAG },
    { "unittest.main", NULL, 5487141, 7399, NUITKA_BYTECODE_FLAG },
    { "unittest.mock", NULL, 5494540, 63383, NUITKA_BYTECODE_FLAG },
    { "unittest.result", NULL, 5557923, 7213, NUITKA_BYTECODE_FLAG },
    { "unittest.runner", NULL, 5565136, 6956, NUITKA_BYTECODE_FLAG },
    { "unittest.signals", NULL, 5572092, 2155, NUITKA_BYTECODE_FLAG },
    { "unittest.suite", NULL, 5574247, 9164, NUITKA_BYTECODE_FLAG },
    { "unittest.util", NULL, 5583411, 4482, NUITKA_BYTECODE_FLAG },
    { "urllib", NULL, 5587893, 103, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "urllib.error", NULL, 5587996, 2737, NUITKA_BYTECODE_FLAG },
    { "urllib.parse", NULL, 5590733, 30794, NUITKA_BYTECODE_FLAG },
    { "urllib.request", NULL, 5621527, 72280, NUITKA_BYTECODE_FLAG },
    { "urllib.response", NULL, 5693807, 3210, NUITKA_BYTECODE_FLAG },
    { "urllib.robotparser", NULL, 5697017, 7050, NUITKA_BYTECODE_FLAG },
    { "uu", NULL, 5704067, 3533, NUITKA_BYTECODE_FLAG },
    { "uuid", NULL, 5707600, 23160, NUITKA_BYTECODE_FLAG },
    { "venv", NULL, 5730760, 14416, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "wave", NULL, 5745176, 18249, NUITKA_BYTECODE_FLAG },
    { "weakref", NULL, 5763425, 19535, NUITKA_BYTECODE_FLAG },
    { "webbrowser", NULL, 5782960, 16335, NUITKA_BYTECODE_FLAG },
    { "wsgiref", NULL, 5799295, 699, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "wsgiref.handlers", NULL, 5799994, 16251, NUITKA_BYTECODE_FLAG },
    { "wsgiref.headers", NULL, 5816245, 7720, NUITKA_BYTECODE_FLAG },
    { "wsgiref.simple_server", NULL, 5823965, 5166, NUITKA_BYTECODE_FLAG },
    { "wsgiref.util", NULL, 5829131, 5141, NUITKA_BYTECODE_FLAG },
    { "wsgiref.validate", NULL, 5834272, 14637, NUITKA_BYTECODE_FLAG },
    { "xdrlib", NULL, 5848909, 8285, NUITKA_BYTECODE_FLAG },
    { "xml", NULL, 5857194, 667, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom", NULL, 5857861, 5419, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom.NodeFilter", NULL, 5863280, 934, NUITKA_BYTECODE_FLAG },
    { "xml.dom.domreg", NULL, 5864214, 2811, NUITKA_BYTECODE_FLAG },
    { "xml.dom.expatbuilder", NULL, 5867025, 26981, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minicompat", NULL, 5894006, 2780, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minidom", NULL, 5896786, 55580, NUITKA_BYTECODE_FLAG },
    { "xml.dom.pulldom", NULL, 5952366, 10453, NUITKA_BYTECODE_FLAG },
    { "xml.dom.xmlbuilder", NULL, 5962819, 12400, NUITKA_BYTECODE_FLAG },
    { "xml.etree", NULL, 5975219, 106, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.etree.ElementInclude", NULL, 5975325, 1542, NUITKA_BYTECODE_FLAG },
    { "xml.etree.ElementPath", NULL, 5976867, 6310, NUITKA_BYTECODE_FLAG },
    { "xml.etree.ElementTree", NULL, 5983177, 44774, NUITKA_BYTECODE_FLAG },
    { "xml.etree.cElementTree", NULL, 6027951, 148, NUITKA_BYTECODE_FLAG },
    { "xml.parsers", NULL, 6028099, 280, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.parsers.expat", NULL, 6028379, 309, NUITKA_BYTECODE_FLAG },
    { "xml.sax", NULL, 6028688, 3139, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.sax._exceptions", NULL, 6031827, 5448, NUITKA_BYTECODE_FLAG },
    { "xml.sax.expatreader", NULL, 6037275, 12351, NUITKA_BYTECODE_FLAG },
    { "xml.sax.handler", NULL, 6049626, 12324, NUITKA_BYTECODE_FLAG },
    { "xml.sax.saxutils", NULL, 6061950, 12777, NUITKA_BYTECODE_FLAG },
    { "xml.sax.xmlreader", NULL, 6074727, 16885, NUITKA_BYTECODE_FLAG },
    { "xmlrpc", NULL, 6091612, 103, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xmlrpc.client", NULL, 6091715, 34509, NUITKA_BYTECODE_FLAG },
    { "xmlrpc.server", NULL, 6126224, 29351, NUITKA_BYTECODE_FLAG },
    { "zipapp", NULL, 6155575, 5764, NUITKA_BYTECODE_FLAG },
    { "zipfile", NULL, 6161339, 49848, NUITKA_BYTECODE_FLAG },
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
