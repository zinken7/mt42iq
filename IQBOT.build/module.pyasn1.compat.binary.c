/* Generated code for Python module 'pyasn1.compat.binary'
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

/* The "_module_pyasn1$compat$binary" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$compat$binary;
PyDictObject *moduledict_pyasn1$compat$binary;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_0b;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_False;
static PyObject *const_tuple_int_pos_2_int_pos_6_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_reverse;
extern PyObject *const_str_plain_0;
extern PyObject *const_str_plain_1;
static PyObject *const_str_plain_bitstring;
static PyObject *const_tuple_str_plain_value_str_plain_bitstring_str_plain_prefix_tuple;
static PyObject *const_str_digest_1350fd4c86248194dddd035bb3e38203;
extern PyObject *const_int_0;
static PyObject *const_str_digest_bc95cb2008216b3ab18f393e5ae2c051;
static PyObject *const_str_plain_0b0;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_prefix;
static PyObject *const_str_digest_206f76f7a52f47ef7b96e6730becc746;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_None;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_bin;
extern PyObject *const_tuple_str_plain_version_info_tuple;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_empty;
extern PyObject *const_tuple_str_plain_0_tuple;
static PyObject *const_tuple_str_plain_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_450e55dcc86d5f52a78919a037bcd5f2;
extern PyObject *const_slice_int_0_int_pos_2_none;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_int_pos_2_int_pos_6_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_6_tuple, 0, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_6_tuple, 1, const_int_pos_6 ); Py_INCREF( const_int_pos_6 );
    const_str_plain_bitstring = UNSTREAM_STRING_ASCII( &constant_bin[ 2551338 ], 9, 1 );
    const_tuple_str_plain_value_str_plain_bitstring_str_plain_prefix_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_bitstring_str_plain_prefix_tuple, 0, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_bitstring_str_plain_prefix_tuple, 1, const_str_plain_bitstring ); Py_INCREF( const_str_plain_bitstring );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_bitstring_str_plain_prefix_tuple, 2, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    const_str_digest_1350fd4c86248194dddd035bb3e38203 = UNSTREAM_STRING_ASCII( &constant_bin[ 2551347 ], 3, 0 );
    const_str_digest_bc95cb2008216b3ab18f393e5ae2c051 = UNSTREAM_STRING_ASCII( &constant_bin[ 2551350 ], 29, 0 );
    const_str_plain_0b0 = UNSTREAM_STRING_ASCII( &constant_bin[ 1196392 ], 3, 0 );
    const_str_digest_206f76f7a52f47ef7b96e6730becc746 = UNSTREAM_STRING_ASCII( &constant_bin[ 2551358 ], 20, 0 );
    const_tuple_str_plain_1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_1_tuple, 0, const_str_plain_1 ); Py_INCREF( const_str_plain_1 );
    const_str_digest_450e55dcc86d5f52a78919a037bcd5f2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2551379 ], 51, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyasn1$compat$binary( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_82723232f45f105b28f8e2d664b6a7e6;
static PyCodeObject *codeobj_46808e7ff39a95827c98012217c14eac;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_450e55dcc86d5f52a78919a037bcd5f2;
    codeobj_82723232f45f105b28f8e2d664b6a7e6 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_bc95cb2008216b3ab18f393e5ae2c051, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_46808e7ff39a95827c98012217c14eac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bin, 10, const_tuple_str_plain_value_str_plain_bitstring_str_plain_prefix_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyasn1$compat$binary$$$function_1_bin(  );


// The module function definitions.
static PyObject *impl_pyasn1$compat$binary$$$function_1_bin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *var_bitstring = NULL;
    PyObject *var_prefix = NULL;
    struct Nuitka_FrameObject *frame_46808e7ff39a95827c98012217c14eac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_46808e7ff39a95827c98012217c14eac = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_bitstring == NULL );
        var_bitstring = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_46808e7ff39a95827c98012217c14eac, codeobj_46808e7ff39a95827c98012217c14eac, module_pyasn1$compat$binary, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_46808e7ff39a95827c98012217c14eac = cache_frame_46808e7ff39a95827c98012217c14eac;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_46808e7ff39a95827c98012217c14eac );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_46808e7ff39a95827c98012217c14eac ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_value );
        tmp_compexpr_left_1 = par_value;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = const_str_plain_0b;
            assert( var_prefix == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_prefix = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_value );
            tmp_compexpr_left_2 = par_value;
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = const_str_digest_1350fd4c86248194dddd035bb3e38203;
                assert( var_prefix == NULL );
                Py_INCREF( tmp_assign_source_3 );
                var_prefix = tmp_assign_source_3;
            }
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_name_1;
                PyObject *tmp_args_element_name_1;
                tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
                assert( tmp_called_name_1 != NULL );
                CHECK_OBJECT( par_value );
                tmp_args_element_name_1 = par_value;
                frame_46808e7ff39a95827c98012217c14eac->m_frame.f_lineno = 17;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 17;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_value;
                    assert( old != NULL );
                    par_value = tmp_assign_source_4;
                    Py_DECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_5;
                tmp_assign_source_5 = const_str_plain_0b0;
                assert( var_prefix == NULL );
                Py_INCREF( tmp_assign_source_5 );
                var_prefix = tmp_assign_source_5;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        if ( par_value == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_1 = par_value;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        goto loop_end_1;
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if ( par_value == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = par_value;
        tmp_right_name_1 = const_int_pos_1;
        tmp_compexpr_left_3 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( var_bitstring );
            tmp_called_instance_1 = var_bitstring;
            frame_46808e7ff39a95827c98012217c14eac->m_frame.f_lineno = 23;
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_plain_1_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( var_bitstring );
            tmp_called_instance_2 = var_bitstring;
            frame_46808e7ff39a95827c98012217c14eac->m_frame.f_lineno = 25;
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_plain_0_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        if ( par_value == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = par_value;
        tmp_right_name_2 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceRshift, &tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = tmp_left_name_2;
        par_value = tmp_assign_source_6;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT( var_bitstring );
        tmp_called_instance_3 = var_bitstring;
        frame_46808e7ff39a95827c98012217c14eac->m_frame.f_lineno = 29;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_reverse );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_2;
        if ( var_prefix == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prefix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_3 = var_prefix;
        tmp_called_instance_4 = const_str_empty;
        CHECK_OBJECT( var_bitstring );
        tmp_args_element_name_2 = var_bitstring;
        frame_46808e7ff39a95827c98012217c14eac->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_right_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_join, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46808e7ff39a95827c98012217c14eac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_46808e7ff39a95827c98012217c14eac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46808e7ff39a95827c98012217c14eac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_46808e7ff39a95827c98012217c14eac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_46808e7ff39a95827c98012217c14eac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_46808e7ff39a95827c98012217c14eac, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_46808e7ff39a95827c98012217c14eac,
        type_description_1,
        par_value,
        var_bitstring,
        var_prefix
    );


    // Release cached frame.
    if ( frame_46808e7ff39a95827c98012217c14eac == cache_frame_46808e7ff39a95827c98012217c14eac )
    {
        Py_DECREF( frame_46808e7ff39a95827c98012217c14eac );
    }
    cache_frame_46808e7ff39a95827c98012217c14eac = NULL;

    assertFrameObject( frame_46808e7ff39a95827c98012217c14eac );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$binary$$$function_1_bin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)var_bitstring );
    Py_DECREF( var_bitstring );
    var_bitstring = NULL;

    Py_XDECREF( var_prefix );
    var_prefix = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)var_bitstring );
    Py_DECREF( var_bitstring );
    var_bitstring = NULL;

    Py_XDECREF( var_prefix );
    var_prefix = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$binary$$$function_1_bin );
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



static PyObject *MAKE_FUNCTION_pyasn1$compat$binary$$$function_1_bin(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$binary$$$function_1_bin,
        const_str_plain_bin,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_46808e7ff39a95827c98012217c14eac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$binary,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyasn1$compat$binary =
{
    PyModuleDef_HEAD_INIT,
    "pyasn1.compat.binary",
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
MOD_ENTRY_DECL(pyasn1$compat$binary)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(pyasn1$compat$binary)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyasn1$compat$binary );
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
    puts("pyasn1.compat.binary: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.compat.binary: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.compat.binary: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpyasn1$compat$binary" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyasn1$compat$binary = Py_InitModule4(
        "pyasn1.compat.binary",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pyasn1$compat$binary = PyModule_Create( &mdef_pyasn1$compat$binary );
#endif

    moduledict_pyasn1$compat$binary = MODULE_DICT( module_pyasn1$compat$binary );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_pyasn1$compat$binary,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pyasn1$compat$binary,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$compat$binary,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$compat$binary,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pyasn1$compat$binary );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_206f76f7a52f47ef7b96e6730becc746, module_pyasn1$compat$binary );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_82723232f45f105b28f8e2d664b6a7e6;
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
        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_450e55dcc86d5f52a78919a037bcd5f2;
        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_82723232f45f105b28f8e2d664b6a7e6 = MAKE_MODULE_FRAME( codeobj_82723232f45f105b28f8e2d664b6a7e6, module_pyasn1$compat$binary );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_82723232f45f105b28f8e2d664b6a7e6 );
    assert( Py_REFCNT( frame_82723232f45f105b28f8e2d664b6a7e6 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_450e55dcc86d5f52a78919a037bcd5f2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_pyasn1$compat$binary;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_version_info_tuple;
        tmp_level_name_1 = const_int_0;
        frame_82723232f45f105b28f8e2d664b6a7e6->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_version_info );
        Py_DECREF( tmp_import_name_from_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain_version_info, tmp_assign_source_4 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain_version_info );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_version_info );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_subscribed_name_1 = tmp_mvar_value_3;
        tmp_subscript_name_1 = const_slice_int_0_int_pos_2_none;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_int_pos_2_int_pos_6_tuple;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
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
            tmp_assign_source_5 = MAKE_FUNCTION_pyasn1$compat$binary$$$function_1_bin(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain_bin, tmp_assign_source_5 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain_bin );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bin );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bin" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 33;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_6 = tmp_mvar_value_4;
            UPDATE_STRING_DICT0( moduledict_pyasn1$compat$binary, (Nuitka_StringObject *)const_str_plain_bin, tmp_assign_source_6 );
        }
        branch_end_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_82723232f45f105b28f8e2d664b6a7e6 );
#endif
    popFrameStack();

    assertFrameObject( frame_82723232f45f105b28f8e2d664b6a7e6 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_82723232f45f105b28f8e2d664b6a7e6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_82723232f45f105b28f8e2d664b6a7e6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_82723232f45f105b28f8e2d664b6a7e6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_82723232f45f105b28f8e2d664b6a7e6, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_pyasn1$compat$binary );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
