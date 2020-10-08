/* Generated code for Python module 'pyasn1.compat.string'
 * created by Nuitka version 0.6.5
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_pyasn1$compat$string" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$compat$string;
PyDictObject *moduledict_pyasn1$compat$string;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_split;
static PyObject *const_str_digest_d531564137b1e3cdba554ce7596f4c09;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_digest_376a4bd8b021962e5c53a38db0fbd463;
extern PyObject *const_str_plain_partition;
extern PyObject *const_str_plain_sep;
extern PyObject *const_tuple_int_pos_2_int_pos_5_tuple;
extern PyObject *const_str_plain_string;
extern PyObject *const_int_pos_1;
extern PyObject *const_slice_none_int_pos_2_none;
static PyObject *const_tuple_e58e14830aa4f6bdb8943c59b36409f5_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_a;
static PyObject *const_str_digest_be7836c295a86ce9a18ee4ce1c6af707;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_None;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_empty;
static PyObject *const_tuple_str_plain_string_str_plain_sep_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_str_plain_version_info_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_d531564137b1e3cdba554ce7596f4c09 = UNSTREAM_STRING_ASCII( &constant_bin[ 2551918 ], 51, 0 );
    const_str_digest_376a4bd8b021962e5c53a38db0fbd463 = UNSTREAM_STRING_ASCII( &constant_bin[ 2551969 ], 29, 0 );
    const_tuple_e58e14830aa4f6bdb8943c59b36409f5_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e58e14830aa4f6bdb8943c59b36409f5_tuple, 0, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    PyTuple_SET_ITEM( const_tuple_e58e14830aa4f6bdb8943c59b36409f5_tuple, 1, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    PyTuple_SET_ITEM( const_tuple_e58e14830aa4f6bdb8943c59b36409f5_tuple, 2, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_e58e14830aa4f6bdb8943c59b36409f5_tuple, 3, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_e58e14830aa4f6bdb8943c59b36409f5_tuple, 4, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_str_digest_be7836c295a86ce9a18ee4ce1c6af707 = UNSTREAM_STRING_ASCII( &constant_bin[ 2551977 ], 20, 0 );
    const_tuple_str_plain_string_str_plain_sep_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_string_str_plain_sep_tuple, 0, const_str_plain_string ); Py_INCREF( const_str_plain_string );
    PyTuple_SET_ITEM( const_tuple_str_plain_string_str_plain_sep_tuple, 1, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyasn1$compat$string( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8ab16b0418e431698718ece38ca26956;
static PyCodeObject *codeobj_4931074580e5ca3aa908eadaf76b5494;
static PyCodeObject *codeobj_6c973992cbf235b611b4a10a63e2534e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_d531564137b1e3cdba554ce7596f4c09;
    codeobj_8ab16b0418e431698718ece38ca26956 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_376a4bd8b021962e5c53a38db0fbd463, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_4931074580e5ca3aa908eadaf76b5494 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_partition, 25, const_tuple_str_plain_string_str_plain_sep_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6c973992cbf235b611b4a10a63e2534e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_partition, 11, const_tuple_e58e14830aa4f6bdb8943c59b36409f5_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyasn1$compat$string$$$function_1_partition(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$string$$$function_2_partition(  );


// The module function definitions.
static PyObject *impl_pyasn1$compat$string$$$function_1_partition( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[ 0 ];
    PyObject *par_sep = python_pars[ 1 ];
    PyObject *var_a = NULL;
    PyObject *var_c = NULL;
    PyObject *var_b = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6c973992cbf235b611b4a10a63e2534e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6c973992cbf235b611b4a10a63e2534e = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    {
        nuitka_bool tmp_assign_source_1;
        tmp_assign_source_1 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c973992cbf235b611b4a10a63e2534e, codeobj_6c973992cbf235b611b4a10a63e2534e, module_pyasn1$compat$string, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6c973992cbf235b611b4a10a63e2534e = cache_frame_6c973992cbf235b611b4a10a63e2534e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c973992cbf235b611b4a10a63e2534e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c973992cbf235b611b4a10a63e2534e ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_string );
        tmp_called_instance_1 = par_string;
        CHECK_OBJECT( par_sep );
        tmp_args_element_name_1 = par_sep;
        tmp_args_element_name_2 = const_int_pos_1;
        frame_6c973992cbf235b611b4a10a63e2534e->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_split, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooo";
            exception_lineno = 13;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooo";
            exception_lineno = 13;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ooooo";
                    exception_lineno = 13;
                    goto try_except_handler_5;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooo";
            exception_lineno = 13;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert( var_a == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_a = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_c == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_c = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_7;
    }
    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_6c973992cbf235b611b4a10a63e2534e, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_6c973992cbf235b611b4a10a63e2534e, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "ooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_string );
            tmp_tuple_element_1 = par_string;
            tmp_iter_arg_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_1 );
            tmp_tuple_element_1 = const_str_empty;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_1 );
            tmp_tuple_element_1 = const_str_empty;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_iter_arg_2, 2, tmp_tuple_element_1 );
            tmp_assign_source_8 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            assert( !(tmp_assign_source_8 == NULL) );
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_3, 0, 3 );
            if ( tmp_assign_source_9 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "ooooo";
                exception_lineno = 16;
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 1, 3 );
            if ( tmp_assign_source_10 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "ooooo";
                exception_lineno = 16;
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_5, 2, 3 );
            if ( tmp_assign_source_11 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "ooooo";
                exception_lineno = 16;
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_2__element_3 == NULL );
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_11;
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_7;
        // End of try:
        try_end_4:;
        goto try_end_5;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        try_end_5:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
            assert( var_a == NULL );
            Py_INCREF( tmp_assign_source_12 );
            var_a = tmp_assign_source_12;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
            assert( var_b == NULL );
            Py_INCREF( tmp_assign_source_13 );
            var_b = tmp_assign_source_13;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
            tmp_assign_source_14 = tmp_tuple_unpack_2__element_3;
            assert( var_c == NULL );
            Py_INCREF( tmp_assign_source_14 );
            var_c = tmp_assign_source_14;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 12;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_6c973992cbf235b611b4a10a63e2534e->m_frame) frame_6c973992cbf235b611b4a10a63e2534e->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
        branch_end_1:;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_2;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$string$$$function_1_partition );
    return NULL;
    // End of try:
    try_end_3:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    {
        nuitka_bool tmp_condition_result_2;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( par_sep );
            tmp_assign_source_15 = par_sep;
            {
                PyObject *old = var_b;
                var_b = tmp_assign_source_15;
                Py_INCREF( var_b );
                Py_XDECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_tuple_element_2;
        if ( var_a == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_a;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        if ( var_b == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_b;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        if ( var_c == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_c;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c973992cbf235b611b4a10a63e2534e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c973992cbf235b611b4a10a63e2534e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c973992cbf235b611b4a10a63e2534e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c973992cbf235b611b4a10a63e2534e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c973992cbf235b611b4a10a63e2534e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c973992cbf235b611b4a10a63e2534e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c973992cbf235b611b4a10a63e2534e,
        type_description_1,
        par_string,
        par_sep,
        var_a,
        var_c,
        var_b
    );


    // Release cached frame.
    if ( frame_6c973992cbf235b611b4a10a63e2534e == cache_frame_6c973992cbf235b611b4a10a63e2534e )
    {
        Py_DECREF( frame_6c973992cbf235b611b4a10a63e2534e );
    }
    cache_frame_6c973992cbf235b611b4a10a63e2534e = NULL;

    assertFrameObject( frame_6c973992cbf235b611b4a10a63e2534e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$string$$$function_1_partition );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    CHECK_OBJECT( (PyObject *)par_sep );
    Py_DECREF( par_sep );
    par_sep = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    CHECK_OBJECT( (PyObject *)par_sep );
    Py_DECREF( par_sep );
    par_sep = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$string$$$function_1_partition );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyasn1$compat$string$$$function_2_partition( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[ 0 ];
    PyObject *par_sep = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_4931074580e5ca3aa908eadaf76b5494;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4931074580e5ca3aa908eadaf76b5494 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4931074580e5ca3aa908eadaf76b5494, codeobj_4931074580e5ca3aa908eadaf76b5494, module_pyasn1$compat$string, sizeof(void *)+sizeof(void *) );
    frame_4931074580e5ca3aa908eadaf76b5494 = cache_frame_4931074580e5ca3aa908eadaf76b5494;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4931074580e5ca3aa908eadaf76b5494 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4931074580e5ca3aa908eadaf76b5494 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_string );
        tmp_called_instance_1 = par_string;
        CHECK_OBJECT( par_sep );
        tmp_args_element_name_1 = par_sep;
        frame_4931074580e5ca3aa908eadaf76b5494->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_partition, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4931074580e5ca3aa908eadaf76b5494 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4931074580e5ca3aa908eadaf76b5494 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4931074580e5ca3aa908eadaf76b5494 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4931074580e5ca3aa908eadaf76b5494, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4931074580e5ca3aa908eadaf76b5494->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4931074580e5ca3aa908eadaf76b5494, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4931074580e5ca3aa908eadaf76b5494,
        type_description_1,
        par_string,
        par_sep
    );


    // Release cached frame.
    if ( frame_4931074580e5ca3aa908eadaf76b5494 == cache_frame_4931074580e5ca3aa908eadaf76b5494 )
    {
        Py_DECREF( frame_4931074580e5ca3aa908eadaf76b5494 );
    }
    cache_frame_4931074580e5ca3aa908eadaf76b5494 = NULL;

    assertFrameObject( frame_4931074580e5ca3aa908eadaf76b5494 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$string$$$function_2_partition );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    CHECK_OBJECT( (PyObject *)par_sep );
    Py_DECREF( par_sep );
    par_sep = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    CHECK_OBJECT( (PyObject *)par_sep );
    Py_DECREF( par_sep );
    par_sep = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$string$$$function_2_partition );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$string$$$function_1_partition(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$string$$$function_1_partition,
        const_str_plain_partition,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6c973992cbf235b611b4a10a63e2534e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$string,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$string$$$function_2_partition(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$string$$$function_2_partition,
        const_str_plain_partition,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4931074580e5ca3aa908eadaf76b5494,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$string,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyasn1$compat$string =
{
    PyModuleDef_HEAD_INIT,
    "pyasn1.compat.string",
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

#if defined(_NUITKA_EXE) || !0
// For executables or non top level modules, we need not export anything.
MOD_ENTRY_DECL(pyasn1$compat$string)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(pyasn1$compat$string)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyasn1$compat$string );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("pyasn1.compat.string: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.compat.string: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.compat.string: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpyasn1$compat$string" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyasn1$compat$string = Py_InitModule4(
        "pyasn1.compat.string",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pyasn1$compat$string = PyModule_Create( &mdef_pyasn1$compat$string );
#endif

    moduledict_pyasn1$compat$string = MODULE_DICT( module_pyasn1$compat$string );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_pyasn1$compat$string,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pyasn1$compat$string,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$compat$string,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$compat$string,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pyasn1$compat$string );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_be7836c295a86ce9a18ee4ce1c6af707, module_pyasn1$compat$string );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain___name__ ),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF( module_spec_class );

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT( spec_value );

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_8ab16b0418e431698718ece38ca26956;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_d531564137b1e3cdba554ce7596f4c09;
        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_8ab16b0418e431698718ece38ca26956 = MAKE_MODULE_FRAME( codeobj_8ab16b0418e431698718ece38ca26956, module_pyasn1$compat$string );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_8ab16b0418e431698718ece38ca26956 );
    assert( Py_REFCNT( frame_8ab16b0418e431698718ece38ca26956 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_d531564137b1e3cdba554ce7596f4c09;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_2 );
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_pyasn1$compat$string;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_version_info_tuple;
        tmp_level_name_1 = const_int_0;
        frame_8ab16b0418e431698718ece38ca26956->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_version_info );
        Py_DECREF( tmp_import_name_from_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain_version_info, tmp_assign_source_4 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain_version_info );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_version_info );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_subscribed_name_1 = tmp_mvar_value_3;
        tmp_subscript_name_1 = const_slice_none_int_pos_2_none;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_int_pos_2_int_pos_5_tuple;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_FUNCTION_pyasn1$compat$string$$$function_1_partition(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain_partition, tmp_assign_source_5 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = MAKE_FUNCTION_pyasn1$compat$string$$$function_2_partition(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$string, (Nuitka_StringObject *)const_str_plain_partition, tmp_assign_source_6 );
        }
        branch_end_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ab16b0418e431698718ece38ca26956 );
#endif
    popFrameStack();

    assertFrameObject( frame_8ab16b0418e431698718ece38ca26956 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ab16b0418e431698718ece38ca26956 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8ab16b0418e431698718ece38ca26956, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8ab16b0418e431698718ece38ca26956->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8ab16b0418e431698718ece38ca26956, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_pyasn1$compat$string );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
