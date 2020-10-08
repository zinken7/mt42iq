/* Generated code for Python module 'oauth2client._pkce'
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

/* The "_module_oauth2client$_pkce" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauth2client$_pkce;
PyDictObject *moduledict_oauth2client$_pkce;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_urandom;
extern PyObject *const_str_plain_code_verifier;
static PyObject *const_str_digest_15a816dbe26967eba5c849c7c06fb147;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_262ac177501f5e57b79e768aa68349a1;
extern PyObject *const_str_plain_code_challenge;
static PyObject *const_str_digest_7e38755829f70961ee47492397909b6b;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_hashlib;
static PyObject *const_str_digest_87078cea8de1bba408cbac8200afdd43;
extern PyObject *const_str_plain_digest;
extern PyObject *const_int_0;
extern PyObject *const_tuple_bytes_chr_61_tuple;
extern PyObject *const_tuple_int_pos_64_tuple;
extern PyObject *const_bytes_chr_61;
static PyObject *const_str_digest_bc241f087e8357ec95ba420095b4105c;
static PyObject *const_str_digest_1a06fb5eaa44b5bb24b9378dbdbd8930;
static PyObject *const_str_digest_54ac5fa4f521d7ef0b1e0ddcf181a82c;
extern PyObject *const_str_plain_rstrip;
extern PyObject *const_str_plain_base64;
extern PyObject *const_int_pos_128;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_urlsafe_b64encode;
extern PyObject *const_str_plain_verifier;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_64;
static PyObject *const_str_plain_n_bytes;
static PyObject *const_tuple_str_plain_n_bytes_str_plain_verifier_tuple;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_sha256;
static PyObject *const_tuple_str_plain_verifier_str_plain_digest_tuple;
static PyObject *const_str_digest_d6cde90ebeed0802a0e3d0bbe48b074b;
extern PyObject *const_int_pos_43;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_15a816dbe26967eba5c849c7c06fb147 = UNSTREAM_STRING_ASCII( &constant_bin[ 2425389 ], 49, 0 );
    const_str_digest_262ac177501f5e57b79e768aa68349a1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2425438 ], 27, 0 );
    const_str_digest_7e38755829f70961ee47492397909b6b = UNSTREAM_STRING_ASCII( &constant_bin[ 2425465 ], 403, 0 );
    const_str_digest_87078cea8de1bba408cbac8200afdd43 = UNSTREAM_STRING_ASCII( &constant_bin[ 2425868 ], 40, 0 );
    const_str_digest_bc241f087e8357ec95ba420095b4105c = UNSTREAM_STRING_ASCII( &constant_bin[ 2425908 ], 109, 0 );
    const_str_digest_1a06fb5eaa44b5bb24b9378dbdbd8930 = UNSTREAM_STRING_ASCII( &constant_bin[ 2426017 ], 41, 0 );
    const_str_digest_54ac5fa4f521d7ef0b1e0ddcf181a82c = UNSTREAM_STRING_ASCII( &constant_bin[ 2425446 ], 18, 0 );
    const_str_plain_n_bytes = UNSTREAM_STRING_ASCII( &constant_bin[ 63028 ], 7, 1 );
    const_tuple_str_plain_n_bytes_str_plain_verifier_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_bytes_str_plain_verifier_tuple, 0, const_str_plain_n_bytes ); Py_INCREF( const_str_plain_n_bytes );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_bytes_str_plain_verifier_tuple, 1, const_str_plain_verifier ); Py_INCREF( const_str_plain_verifier );
    const_tuple_str_plain_verifier_str_plain_digest_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_verifier_str_plain_digest_tuple, 0, const_str_plain_verifier ); Py_INCREF( const_str_plain_verifier );
    PyTuple_SET_ITEM( const_tuple_str_plain_verifier_str_plain_digest_tuple, 1, const_str_plain_digest ); Py_INCREF( const_str_plain_digest );
    const_str_digest_d6cde90ebeed0802a0e3d0bbe48b074b = UNSTREAM_STRING_ASCII( &constant_bin[ 2426058 ], 415, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_oauth2client$_pkce( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0a3bc9ff03f1f0da966ba2252bc213f9;
static PyCodeObject *codeobj_886702bec84576187bf34aa00c810f82;
static PyCodeObject *codeobj_0fbf2fdcd57f4a34357332069123b2e8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_15a816dbe26967eba5c849c7c06fb147;
    codeobj_0a3bc9ff03f1f0da966ba2252bc213f9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_262ac177501f5e57b79e768aa68349a1, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_886702bec84576187bf34aa00c810f82 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_code_challenge, 52, const_tuple_str_plain_verifier_str_plain_digest_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0fbf2fdcd57f4a34357332069123b2e8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_code_verifier, 27, const_tuple_str_plain_n_bytes_str_plain_verifier_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_oauth2client$_pkce$$$function_1_code_verifier( PyObject *defaults );


static PyObject *MAKE_FUNCTION_oauth2client$_pkce$$$function_2_code_challenge(  );


// The module function definitions.
static PyObject *impl_oauth2client$_pkce$$$function_1_code_verifier( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n_bytes = python_pars[ 0 ];
    PyObject *var_verifier = NULL;
    struct Nuitka_FrameObject *frame_0fbf2fdcd57f4a34357332069123b2e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0fbf2fdcd57f4a34357332069123b2e8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0fbf2fdcd57f4a34357332069123b2e8, codeobj_0fbf2fdcd57f4a34357332069123b2e8, module_oauth2client$_pkce, sizeof(void *)+sizeof(void *) );
    frame_0fbf2fdcd57f4a34357332069123b2e8 = cache_frame_0fbf2fdcd57f4a34357332069123b2e8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0fbf2fdcd57f4a34357332069123b2e8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0fbf2fdcd57f4a34357332069123b2e8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain_base64 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_urlsafe_b64encode );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_n_bytes );
        tmp_args_element_name_2 = par_n_bytes;
        frame_0fbf2fdcd57f4a34357332069123b2e8->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_urandom, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0fbf2fdcd57f4a34357332069123b2e8->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0fbf2fdcd57f4a34357332069123b2e8->m_frame.f_lineno = 41;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_rstrip, &PyTuple_GET_ITEM( const_tuple_bytes_chr_61_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_verifier == NULL );
        var_verifier = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_verifier );
        tmp_len_arg_1 = var_verifier;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_43;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_1a06fb5eaa44b5bb24b9378dbdbd8930;
            frame_0fbf2fdcd57f4a34357332069123b2e8->m_frame.f_lineno = 45;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 45;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_len_arg_2;
            CHECK_OBJECT( var_verifier );
            tmp_len_arg_2 = var_verifier;
            tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_pos_128;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            assert( !(tmp_res == -1) );
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_87078cea8de1bba408cbac8200afdd43;
                frame_0fbf2fdcd57f4a34357332069123b2e8->m_frame.f_lineno = 47;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 47;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            CHECK_OBJECT( var_verifier );
            tmp_return_value = var_verifier;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0fbf2fdcd57f4a34357332069123b2e8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0fbf2fdcd57f4a34357332069123b2e8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0fbf2fdcd57f4a34357332069123b2e8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0fbf2fdcd57f4a34357332069123b2e8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0fbf2fdcd57f4a34357332069123b2e8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0fbf2fdcd57f4a34357332069123b2e8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0fbf2fdcd57f4a34357332069123b2e8,
        type_description_1,
        par_n_bytes,
        var_verifier
    );


    // Release cached frame.
    if ( frame_0fbf2fdcd57f4a34357332069123b2e8 == cache_frame_0fbf2fdcd57f4a34357332069123b2e8 )
    {
        Py_DECREF( frame_0fbf2fdcd57f4a34357332069123b2e8 );
    }
    cache_frame_0fbf2fdcd57f4a34357332069123b2e8 = NULL;

    assertFrameObject( frame_0fbf2fdcd57f4a34357332069123b2e8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pkce$$$function_1_code_verifier );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n_bytes );
    Py_DECREF( par_n_bytes );
    par_n_bytes = NULL;

    CHECK_OBJECT( (PyObject *)var_verifier );
    Py_DECREF( var_verifier );
    var_verifier = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n_bytes );
    Py_DECREF( par_n_bytes );
    par_n_bytes = NULL;

    Py_XDECREF( var_verifier );
    var_verifier = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$_pkce$$$function_1_code_verifier );
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


static PyObject *impl_oauth2client$_pkce$$$function_2_code_challenge( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_verifier = python_pars[ 0 ];
    PyObject *var_digest = NULL;
    struct Nuitka_FrameObject *frame_886702bec84576187bf34aa00c810f82;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_886702bec84576187bf34aa00c810f82 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_886702bec84576187bf34aa00c810f82, codeobj_886702bec84576187bf34aa00c810f82, module_oauth2client$_pkce, sizeof(void *)+sizeof(void *) );
    frame_886702bec84576187bf34aa00c810f82 = cache_frame_886702bec84576187bf34aa00c810f82;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_886702bec84576187bf34aa00c810f82 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_886702bec84576187bf34aa00c810f82 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain_hashlib );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_verifier );
        tmp_args_element_name_1 = par_verifier;
        frame_886702bec84576187bf34aa00c810f82->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_sha256, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_886702bec84576187bf34aa00c810f82->m_frame.f_lineno = 66;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_digest );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_digest == NULL );
        var_digest = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain_base64 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_2;
        CHECK_OBJECT( var_digest );
        tmp_args_element_name_2 = var_digest;
        frame_886702bec84576187bf34aa00c810f82->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_called_instance_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_urlsafe_b64encode, call_args );
        }

        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_886702bec84576187bf34aa00c810f82->m_frame.f_lineno = 67;
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_rstrip, &PyTuple_GET_ITEM( const_tuple_bytes_chr_61_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_886702bec84576187bf34aa00c810f82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_886702bec84576187bf34aa00c810f82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_886702bec84576187bf34aa00c810f82 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_886702bec84576187bf34aa00c810f82, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_886702bec84576187bf34aa00c810f82->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_886702bec84576187bf34aa00c810f82, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_886702bec84576187bf34aa00c810f82,
        type_description_1,
        par_verifier,
        var_digest
    );


    // Release cached frame.
    if ( frame_886702bec84576187bf34aa00c810f82 == cache_frame_886702bec84576187bf34aa00c810f82 )
    {
        Py_DECREF( frame_886702bec84576187bf34aa00c810f82 );
    }
    cache_frame_886702bec84576187bf34aa00c810f82 = NULL;

    assertFrameObject( frame_886702bec84576187bf34aa00c810f82 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pkce$$$function_2_code_challenge );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_verifier );
    Py_DECREF( par_verifier );
    par_verifier = NULL;

    CHECK_OBJECT( (PyObject *)var_digest );
    Py_DECREF( var_digest );
    var_digest = NULL;

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

    CHECK_OBJECT( (PyObject *)par_verifier );
    Py_DECREF( par_verifier );
    par_verifier = NULL;

    Py_XDECREF( var_digest );
    var_digest = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$_pkce$$$function_2_code_challenge );
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



static PyObject *MAKE_FUNCTION_oauth2client$_pkce$$$function_1_code_verifier( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pkce$$$function_1_code_verifier,
        const_str_plain_code_verifier,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0fbf2fdcd57f4a34357332069123b2e8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pkce,
        const_str_digest_d6cde90ebeed0802a0e3d0bbe48b074b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_pkce$$$function_2_code_challenge(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pkce$$$function_2_code_challenge,
        const_str_plain_code_challenge,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_886702bec84576187bf34aa00c810f82,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pkce,
        const_str_digest_7e38755829f70961ee47492397909b6b,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_oauth2client$_pkce =
{
    PyModuleDef_HEAD_INIT,
    "oauth2client._pkce",
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
MOD_ENTRY_DECL(oauth2client$_pkce)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(oauth2client$_pkce)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_oauth2client$_pkce );
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
    puts("oauth2client._pkce: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauth2client._pkce: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauth2client._pkce: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initoauth2client$_pkce" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_oauth2client$_pkce = Py_InitModule4(
        "oauth2client._pkce",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_oauth2client$_pkce = PyModule_Create( &mdef_oauth2client$_pkce );
#endif

    moduledict_oauth2client$_pkce = MODULE_DICT( module_oauth2client$_pkce );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_oauth2client$_pkce,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_oauth2client$_pkce,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_oauth2client$_pkce,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_oauth2client$_pkce,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_oauth2client$_pkce );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_54ac5fa4f521d7ef0b1e0ddcf181a82c, module_oauth2client$_pkce );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_0a3bc9ff03f1f0da966ba2252bc213f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_bc241f087e8357ec95ba420095b4105c;
        UPDATE_STRING_DICT0( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_15a816dbe26967eba5c849c7c06fb147;
        UPDATE_STRING_DICT0( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_0a3bc9ff03f1f0da966ba2252bc213f9 = MAKE_MODULE_FRAME( codeobj_0a3bc9ff03f1f0da966ba2252bc213f9, module_oauth2client$_pkce );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0a3bc9ff03f1f0da966ba2252bc213f9 );
    assert( Py_REFCNT( frame_0a3bc9ff03f1f0da966ba2252bc213f9 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_15a816dbe26967eba5c849c7c06fb147;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_base64;
        tmp_globals_name_1 = (PyObject *)moduledict_oauth2client$_pkce;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_0a3bc9ff03f1f0da966ba2252bc213f9->m_frame.f_lineno = 22;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain_base64, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_hashlib;
        tmp_globals_name_2 = (PyObject *)moduledict_oauth2client$_pkce;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_0a3bc9ff03f1f0da966ba2252bc213f9->m_frame.f_lineno = 23;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain_hashlib, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_os;
        tmp_globals_name_3 = (PyObject *)moduledict_oauth2client$_pkce;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_0a3bc9ff03f1f0da966ba2252bc213f9->m_frame.f_lineno = 24;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a3bc9ff03f1f0da966ba2252bc213f9 );
#endif
    popFrameStack();

    assertFrameObject( frame_0a3bc9ff03f1f0da966ba2252bc213f9 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a3bc9ff03f1f0da966ba2252bc213f9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0a3bc9ff03f1f0da966ba2252bc213f9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0a3bc9ff03f1f0da966ba2252bc213f9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0a3bc9ff03f1f0da966ba2252bc213f9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_int_pos_64_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_7 = MAKE_FUNCTION_oauth2client$_pkce$$$function_1_code_verifier( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain_code_verifier, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_oauth2client$_pkce$$$function_2_code_challenge(  );



        UPDATE_STRING_DICT1( moduledict_oauth2client$_pkce, (Nuitka_StringObject *)const_str_plain_code_challenge, tmp_assign_source_8 );
    }

    return MOD_RETURN_VALUE( module_oauth2client$_pkce );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
