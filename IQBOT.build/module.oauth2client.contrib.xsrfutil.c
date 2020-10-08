/* Generated code for Python module 'oauth2client.contrib.xsrfutil'
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

/* The "_module_oauth2client$contrib$xsrfutil" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauth2client$contrib$xsrfutil;
PyDictObject *moduledict_oauth2client$contrib$xsrfutil;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_when;
extern PyObject *const_str_plain_token;
extern PyObject *const_str_plain_decoded;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_a786b077eeb74539678429694d384189;
extern PyObject *const_tuple_str_plain__helpers_tuple;
static PyObject *const_str_digest_cc170c5d388b57a6d859bbce7efd6e14;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_binascii;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_tuple_str_empty_none_tuple;
extern PyObject *const_str_plain__helpers;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_y;
static PyObject *const_str_plain_DEFAULT_TIMEOUT_SECS;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_hmac;
extern PyObject *const_int_pos_3600;
static PyObject *const_tuple_ce70c82576b4c65a61467c0abac68f3f_tuple;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_digest;
extern PyObject *const_str_plain_key;
extern PyObject *const_int_0;
static PyObject *const_str_plain_expected_token;
extern PyObject *const_str_plain_Error;
extern PyObject *const_str_plain_oauth2client;
extern PyObject *const_str_plain_validate_token;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_user_id;
extern PyObject *const_int_neg_1;
extern PyObject *const_tuple_int_pos_2_tuple;
extern PyObject *const_str_plain_current_time;
extern PyObject *const_str_plain_base64;
extern PyObject *const_str_plain_urlsafe_b64decode;
extern PyObject *const_bytes_chr_58;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_603c015a5fafaa8fa125fa9abf56b9f3;
extern PyObject *const_str_plain_generate_token;
extern PyObject *const_str_plain_positional;
static PyObject *const_str_plain_DELIMITER;
static PyObject *const_str_digest_9d5b7488aa0ae4c4fc7952c39d08073a;
extern PyObject *const_str_plain__to_bytes;
extern PyObject *const_str_plain_urlsafe_b64encode;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_digester;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_action_id;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_307573fcb0ac27c1d9c87cfac0ca4eb5;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_new;
static PyObject *const_tuple_b89c75229482e48d4fedaf17c73c26bd_tuple;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_ec2246d79ba8cbaeca928375ad4fff5c;
static PyObject *const_str_plain_different;
extern PyObject *const_dict_81b3970727674c20ce12b1a4757dad21;
static PyObject *const_str_plain_token_time;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_a786b077eeb74539678429694d384189 = UNSTREAM_STRING_ASCII( &constant_bin[ 2499782 ], 38, 0 );
    const_str_digest_cc170c5d388b57a6d859bbce7efd6e14 = UNSTREAM_STRING_ASCII( &constant_bin[ 2499820 ], 481, 0 );
    const_str_plain_DEFAULT_TIMEOUT_SECS = UNSTREAM_STRING_ASCII( &constant_bin[ 2500301 ], 20, 1 );
    const_tuple_ce70c82576b4c65a61467c0abac68f3f_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_ce70c82576b4c65a61467c0abac68f3f_tuple, 0, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_ce70c82576b4c65a61467c0abac68f3f_tuple, 1, const_str_plain_token ); Py_INCREF( const_str_plain_token );
    PyTuple_SET_ITEM( const_tuple_ce70c82576b4c65a61467c0abac68f3f_tuple, 2, const_str_plain_user_id ); Py_INCREF( const_str_plain_user_id );
    PyTuple_SET_ITEM( const_tuple_ce70c82576b4c65a61467c0abac68f3f_tuple, 3, const_str_plain_action_id ); Py_INCREF( const_str_plain_action_id );
    PyTuple_SET_ITEM( const_tuple_ce70c82576b4c65a61467c0abac68f3f_tuple, 4, const_str_plain_current_time ); Py_INCREF( const_str_plain_current_time );
    PyTuple_SET_ITEM( const_tuple_ce70c82576b4c65a61467c0abac68f3f_tuple, 5, const_str_plain_decoded ); Py_INCREF( const_str_plain_decoded );
    const_str_plain_token_time = UNSTREAM_STRING_ASCII( &constant_bin[ 2500321 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_ce70c82576b4c65a61467c0abac68f3f_tuple, 6, const_str_plain_token_time ); Py_INCREF( const_str_plain_token_time );
    const_str_plain_expected_token = UNSTREAM_STRING_ASCII( &constant_bin[ 2500331 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_ce70c82576b4c65a61467c0abac68f3f_tuple, 7, const_str_plain_expected_token ); Py_INCREF( const_str_plain_expected_token );
    const_str_plain_different = UNSTREAM_STRING_ASCII( &constant_bin[ 135476 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_ce70c82576b4c65a61467c0abac68f3f_tuple, 8, const_str_plain_different ); Py_INCREF( const_str_plain_different );
    PyTuple_SET_ITEM( const_tuple_ce70c82576b4c65a61467c0abac68f3f_tuple, 9, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_ce70c82576b4c65a61467c0abac68f3f_tuple, 10, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_str_digest_603c015a5fafaa8fa125fa9abf56b9f3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2499790 ], 29, 0 );
    const_str_plain_DELIMITER = UNSTREAM_STRING_ASCII( &constant_bin[ 2500345 ], 9, 1 );
    const_str_digest_9d5b7488aa0ae4c4fc7952c39d08073a = UNSTREAM_STRING_ASCII( &constant_bin[ 2500354 ], 594, 0 );
    const_str_plain_digester = UNSTREAM_STRING_ASCII( &constant_bin[ 2500948 ], 8, 1 );
    const_str_digest_307573fcb0ac27c1d9c87cfac0ca4eb5 = UNSTREAM_STRING_ASCII( &constant_bin[ 2500956 ], 52, 0 );
    const_tuple_b89c75229482e48d4fedaf17c73c26bd_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_b89c75229482e48d4fedaf17c73c26bd_tuple, 0, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_b89c75229482e48d4fedaf17c73c26bd_tuple, 1, const_str_plain_user_id ); Py_INCREF( const_str_plain_user_id );
    PyTuple_SET_ITEM( const_tuple_b89c75229482e48d4fedaf17c73c26bd_tuple, 2, const_str_plain_action_id ); Py_INCREF( const_str_plain_action_id );
    PyTuple_SET_ITEM( const_tuple_b89c75229482e48d4fedaf17c73c26bd_tuple, 3, const_str_plain_when ); Py_INCREF( const_str_plain_when );
    PyTuple_SET_ITEM( const_tuple_b89c75229482e48d4fedaf17c73c26bd_tuple, 4, const_str_plain_digester ); Py_INCREF( const_str_plain_digester );
    PyTuple_SET_ITEM( const_tuple_b89c75229482e48d4fedaf17c73c26bd_tuple, 5, const_str_plain_digest ); Py_INCREF( const_str_plain_digest );
    PyTuple_SET_ITEM( const_tuple_b89c75229482e48d4fedaf17c73c26bd_tuple, 6, const_str_plain_token ); Py_INCREF( const_str_plain_token );
    const_str_digest_ec2246d79ba8cbaeca928375ad4fff5c = UNSTREAM_STRING_ASCII( &constant_bin[ 2501008 ], 60, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_oauth2client$contrib$xsrfutil( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_388a1b1ebeb149b5d2b382902e4cd5f2;
static PyCodeObject *codeobj_aa5a6e9cb7cf2779556664d64d44a413;
static PyCodeObject *codeobj_57181278ac187ee49f32fd19338b13cc;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ec2246d79ba8cbaeca928375ad4fff5c;
    codeobj_388a1b1ebeb149b5d2b382902e4cd5f2 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_a786b077eeb74539678429694d384189, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_aa5a6e9cb7cf2779556664d64d44a413 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_token, 32, const_tuple_b89c75229482e48d4fedaf17c73c26bd_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_57181278ac187ee49f32fd19338b13cc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_validate_token, 60, const_tuple_ce70c82576b4c65a61467c0abac68f3f_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_oauth2client$contrib$xsrfutil$$$function_1_generate_token( PyObject *defaults );


static PyObject *MAKE_FUNCTION_oauth2client$contrib$xsrfutil$$$function_2_validate_token( PyObject *defaults );


// The module function definitions.
static PyObject *impl_oauth2client$contrib$xsrfutil$$$function_1_generate_token( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[ 0 ];
    PyObject *par_user_id = python_pars[ 1 ];
    PyObject *par_action_id = python_pars[ 2 ];
    PyObject *par_when = python_pars[ 3 ];
    PyObject *var_digester = NULL;
    PyObject *var_digest = NULL;
    PyObject *var_token = NULL;
    struct Nuitka_FrameObject *frame_aa5a6e9cb7cf2779556664d64d44a413;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa5a6e9cb7cf2779556664d64d44a413 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aa5a6e9cb7cf2779556664d64d44a413, codeobj_aa5a6e9cb7cf2779556664d64d44a413, module_oauth2client$contrib$xsrfutil, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aa5a6e9cb7cf2779556664d64d44a413 = cache_frame_aa5a6e9cb7cf2779556664d64d44a413;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aa5a6e9cb7cf2779556664d64d44a413 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aa5a6e9cb7cf2779556664d64d44a413 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_hmac );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hmac );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hmac" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_new );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__to_bytes );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_key );
        tmp_tuple_element_1 = par_key;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_81b3970727674c20ce12b1a4757dad21 );
        frame_aa5a6e9cb7cf2779556664d64d44a413->m_frame.f_lineno = 47;
        tmp_args_element_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_aa5a6e9cb7cf2779556664d64d44a413->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_digester == NULL );
        var_digester = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_kw_name_2;
        CHECK_OBJECT( var_digester );
        tmp_source_name_3 = var_digester;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_update );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__to_bytes );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_user_id );
        tmp_unicode_arg_1 = par_user_id;
        tmp_tuple_element_2 = PyObject_Unicode( tmp_unicode_arg_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_81b3970727674c20ce12b1a4757dad21 );
        frame_aa5a6e9cb7cf2779556664d64d44a413->m_frame.f_lineno = 48;
        tmp_args_element_name_2 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_aa5a6e9cb7cf2779556664d64d44a413->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( var_digester );
        tmp_source_name_5 = var_digester;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_update );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_DELIMITER );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DELIMITER );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DELIMITER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_4;
        frame_aa5a6e9cb7cf2779556664d64d44a413->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        CHECK_OBJECT( var_digester );
        tmp_source_name_6 = var_digester;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_update );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_5;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__to_bytes );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 50;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_action_id );
        tmp_tuple_element_3 = par_action_id;
        tmp_args_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
        tmp_kw_name_3 = PyDict_Copy( const_dict_81b3970727674c20ce12b1a4757dad21 );
        frame_aa5a6e9cb7cf2779556664d64d44a413->m_frame.f_lineno = 50;
        tmp_args_element_name_4 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 50;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_aa5a6e9cb7cf2779556664d64d44a413->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT( var_digester );
        tmp_source_name_8 = var_digester;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_update );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_DELIMITER );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DELIMITER );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DELIMITER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = tmp_mvar_value_6;
        frame_aa5a6e9cb7cf2779556664d64d44a413->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_unicode_arg_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_kw_name_4;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_7;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__to_bytes );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_when );
        tmp_or_left_value_1 = par_when;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_8;
        frame_aa5a6e9cb7cf2779556664d64d44a413->m_frame.f_lineno = 52;
        tmp_int_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_time );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_or_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_unicode_arg_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF( tmp_or_left_value_1 );
        tmp_unicode_arg_2 = tmp_or_left_value_1;
        or_end_1:;
        tmp_tuple_element_4 = PyObject_Unicode( tmp_unicode_arg_2 );
        Py_DECREF( tmp_unicode_arg_2 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_4 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
        tmp_kw_name_4 = PyDict_Copy( const_dict_81b3970727674c20ce12b1a4757dad21 );
        frame_aa5a6e9cb7cf2779556664d64d44a413->m_frame.f_lineno = 52;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_when;
            assert( old != NULL );
            par_when = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( var_digester );
        tmp_called_instance_2 = var_digester;
        CHECK_OBJECT( par_when );
        tmp_args_element_name_6 = par_when;
        frame_aa5a6e9cb7cf2779556664d64d44a413->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_update, call_args );
        }

        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_digester );
        tmp_called_instance_3 = var_digester;
        frame_aa5a6e9cb7cf2779556664d64d44a413->m_frame.f_lineno = 54;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_digest );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_digest == NULL );
        var_digest = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_base64 );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_9;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_urlsafe_b64encode );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_digest );
        tmp_left_name_2 = var_digest;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_DELIMITER );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DELIMITER );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_called_name_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DELIMITER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = tmp_mvar_value_10;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_when );
        tmp_right_name_2 = par_when;
        tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_aa5a6e9cb7cf2779556664d64d44a413->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_token == NULL );
        var_token = tmp_assign_source_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa5a6e9cb7cf2779556664d64d44a413 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa5a6e9cb7cf2779556664d64d44a413 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aa5a6e9cb7cf2779556664d64d44a413, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aa5a6e9cb7cf2779556664d64d44a413->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aa5a6e9cb7cf2779556664d64d44a413, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aa5a6e9cb7cf2779556664d64d44a413,
        type_description_1,
        par_key,
        par_user_id,
        par_action_id,
        par_when,
        var_digester,
        var_digest,
        var_token
    );


    // Release cached frame.
    if ( frame_aa5a6e9cb7cf2779556664d64d44a413 == cache_frame_aa5a6e9cb7cf2779556664d64d44a413 )
    {
        Py_DECREF( frame_aa5a6e9cb7cf2779556664d64d44a413 );
    }
    cache_frame_aa5a6e9cb7cf2779556664d64d44a413 = NULL;

    assertFrameObject( frame_aa5a6e9cb7cf2779556664d64d44a413 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_token );
    tmp_return_value = var_token;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$contrib$xsrfutil$$$function_1_generate_token );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_user_id );
    Py_DECREF( par_user_id );
    par_user_id = NULL;

    CHECK_OBJECT( (PyObject *)par_action_id );
    Py_DECREF( par_action_id );
    par_action_id = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    CHECK_OBJECT( (PyObject *)var_digester );
    Py_DECREF( var_digester );
    var_digester = NULL;

    CHECK_OBJECT( (PyObject *)var_digest );
    Py_DECREF( var_digest );
    var_digest = NULL;

    CHECK_OBJECT( (PyObject *)var_token );
    Py_DECREF( var_token );
    var_token = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_user_id );
    Py_DECREF( par_user_id );
    par_user_id = NULL;

    CHECK_OBJECT( (PyObject *)par_action_id );
    Py_DECREF( par_action_id );
    par_action_id = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    Py_XDECREF( var_digester );
    var_digester = NULL;

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
    NUITKA_CANNOT_GET_HERE( oauth2client$contrib$xsrfutil$$$function_1_generate_token );
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


static PyObject *impl_oauth2client$contrib$xsrfutil$$$function_2_validate_token( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[ 0 ];
    PyObject *par_token = python_pars[ 1 ];
    PyObject *par_user_id = python_pars[ 2 ];
    PyObject *par_action_id = python_pars[ 3 ];
    PyObject *par_current_time = python_pars[ 4 ];
    PyObject *var_decoded = NULL;
    PyObject *var_token_time = NULL;
    PyObject *var_expected_token = NULL;
    PyObject *var_different = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_57181278ac187ee49f32fd19338b13cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_57181278ac187ee49f32fd19338b13cc = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_57181278ac187ee49f32fd19338b13cc, codeobj_57181278ac187ee49f32fd19338b13cc, module_oauth2client$contrib$xsrfutil, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_57181278ac187ee49f32fd19338b13cc = cache_frame_57181278ac187ee49f32fd19338b13cc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_57181278ac187ee49f32fd19338b13cc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_57181278ac187ee49f32fd19338b13cc ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_token );
        tmp_operand_name_1 = par_token;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_base64 );

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

            exception_lineno = 81;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_token );
        tmp_args_element_name_1 = par_token;
        frame_57181278ac187ee49f32fd19338b13cc->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_urlsafe_b64decode, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert( var_decoded == NULL );
        var_decoded = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_decoded );
        tmp_source_name_1 = var_decoded;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_split );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_DELIMITER );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DELIMITER );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DELIMITER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        frame_57181278ac187ee49f32fd19338b13cc->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert( var_token_time == NULL );
        var_token_time = tmp_assign_source_2;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_57181278ac187ee49f32fd19338b13cc, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_57181278ac187ee49f32fd19338b13cc, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_1 = PyExc_TypeError;
        tmp_compexpr_right_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyExc_ValueError;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 1, tmp_tuple_element_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_binascii );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_binascii );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "binascii" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Error );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_right_1 );

            exception_lineno = 83;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 2, tmp_tuple_element_1 );
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 80;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_57181278ac187ee49f32fd19338b13cc->m_frame) frame_57181278ac187ee49f32fd19338b13cc->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
        branch_end_2:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$contrib$xsrfutil$$$function_2_validate_token );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_current_time );
        tmp_compexpr_left_2 = par_current_time;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_time );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 86;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_4;
            frame_57181278ac187ee49f32fd19338b13cc->m_frame.f_lineno = 86;
            tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_time );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_current_time;
                assert( old != NULL );
                par_current_time = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT( par_current_time );
        tmp_left_name_1 = par_current_time;
        CHECK_OBJECT( var_token_time );
        tmp_right_name_1 = var_token_time;
        tmp_compexpr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_DEFAULT_TIMEOUT_SECS );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_TIMEOUT_SECS );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_TIMEOUT_SECS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_3 = tmp_mvar_value_5;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooooooooooo";
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_generate_token );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_generate_token );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "generate_token" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_6;
        CHECK_OBJECT( par_key );
        tmp_tuple_element_2 = par_key;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_user_id );
        tmp_tuple_element_2 = par_user_id;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
        tmp_dict_key_1 = const_str_plain_action_id;
        CHECK_OBJECT( par_action_id );
        tmp_dict_value_1 = par_action_id;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_when;
        CHECK_OBJECT( var_token_time );
        tmp_dict_value_2 = var_token_time;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_57181278ac187ee49f32fd19338b13cc->m_frame.f_lineno = 92;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_expected_token == NULL );
        var_expected_token = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_token );
        tmp_len_arg_1 = par_token;
        tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_expected_token );
        tmp_len_arg_2 = var_expected_token;
        tmp_compexpr_right_4 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 94;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        assert( !(tmp_res == -1) );
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_int_0;
        assert( var_different == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_different = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_bytearray_arg_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_bytearray_arg_2;
        tmp_called_name_3 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT( par_token );
        tmp_bytearray_arg_1 = par_token;
        tmp_args_element_name_3 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_expected_token );
        tmp_bytearray_arg_2 = var_expected_token;
        tmp_args_element_name_4 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_2 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 99;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_57181278ac187ee49f32fd19338b13cc->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooo";
                exception_lineno = 99;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "ooooooooooo";
            exception_lineno = 99;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "ooooooooooo";
            exception_lineno = 99;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
            Py_XDECREF( old );
        }

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

                    type_description_1 = "ooooooooooo";
                    exception_lineno = 99;
                    goto try_except_handler_6;
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

            type_description_1 = "ooooooooooo";
            exception_lineno = 99;
            goto try_except_handler_6;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_11;
            Py_INCREF( var_x );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_12;
            Py_INCREF( var_y );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_different );
        tmp_left_name_2 = var_different;
        CHECK_OBJECT( var_x );
        tmp_left_name_3 = var_x;
        CHECK_OBJECT( var_y );
        tmp_right_name_3 = var_y;
        tmp_right_name_2 = BINARY_OPERATION( PyNumber_Xor, tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_13 = tmp_left_name_2;
        var_different = tmp_assign_source_13;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_different );
        tmp_operand_name_2 = var_different;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res == 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_57181278ac187ee49f32fd19338b13cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_57181278ac187ee49f32fd19338b13cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_57181278ac187ee49f32fd19338b13cc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_57181278ac187ee49f32fd19338b13cc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_57181278ac187ee49f32fd19338b13cc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_57181278ac187ee49f32fd19338b13cc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_57181278ac187ee49f32fd19338b13cc,
        type_description_1,
        par_key,
        par_token,
        par_user_id,
        par_action_id,
        par_current_time,
        var_decoded,
        var_token_time,
        var_expected_token,
        var_different,
        var_x,
        var_y
    );


    // Release cached frame.
    if ( frame_57181278ac187ee49f32fd19338b13cc == cache_frame_57181278ac187ee49f32fd19338b13cc )
    {
        Py_DECREF( frame_57181278ac187ee49f32fd19338b13cc );
    }
    cache_frame_57181278ac187ee49f32fd19338b13cc = NULL;

    assertFrameObject( frame_57181278ac187ee49f32fd19338b13cc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$contrib$xsrfutil$$$function_2_validate_token );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_token );
    Py_DECREF( par_token );
    par_token = NULL;

    CHECK_OBJECT( (PyObject *)par_user_id );
    Py_DECREF( par_user_id );
    par_user_id = NULL;

    CHECK_OBJECT( (PyObject *)par_action_id );
    Py_DECREF( par_action_id );
    par_action_id = NULL;

    Py_XDECREF( par_current_time );
    par_current_time = NULL;

    Py_XDECREF( var_decoded );
    var_decoded = NULL;

    Py_XDECREF( var_token_time );
    var_token_time = NULL;

    Py_XDECREF( var_expected_token );
    var_expected_token = NULL;

    Py_XDECREF( var_different );
    var_different = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_token );
    Py_DECREF( par_token );
    par_token = NULL;

    CHECK_OBJECT( (PyObject *)par_user_id );
    Py_DECREF( par_user_id );
    par_user_id = NULL;

    CHECK_OBJECT( (PyObject *)par_action_id );
    Py_DECREF( par_action_id );
    par_action_id = NULL;

    Py_XDECREF( par_current_time );
    par_current_time = NULL;

    Py_XDECREF( var_decoded );
    var_decoded = NULL;

    Py_XDECREF( var_token_time );
    var_token_time = NULL;

    Py_XDECREF( var_expected_token );
    var_expected_token = NULL;

    Py_XDECREF( var_different );
    var_different = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$contrib$xsrfutil$$$function_2_validate_token );
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



static PyObject *MAKE_FUNCTION_oauth2client$contrib$xsrfutil$$$function_1_generate_token( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$contrib$xsrfutil$$$function_1_generate_token,
        const_str_plain_generate_token,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_aa5a6e9cb7cf2779556664d64d44a413,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$contrib$xsrfutil,
        const_str_digest_cc170c5d388b57a6d859bbce7efd6e14,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$contrib$xsrfutil$$$function_2_validate_token( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$contrib$xsrfutil$$$function_2_validate_token,
        const_str_plain_validate_token,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_57181278ac187ee49f32fd19338b13cc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$contrib$xsrfutil,
        const_str_digest_9d5b7488aa0ae4c4fc7952c39d08073a,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_oauth2client$contrib$xsrfutil =
{
    PyModuleDef_HEAD_INIT,
    "oauth2client.contrib.xsrfutil",
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
MOD_ENTRY_DECL(oauth2client$contrib$xsrfutil)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(oauth2client$contrib$xsrfutil)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_oauth2client$contrib$xsrfutil );
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
    puts("oauth2client.contrib.xsrfutil: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauth2client.contrib.xsrfutil: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauth2client.contrib.xsrfutil: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initoauth2client$contrib$xsrfutil" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_oauth2client$contrib$xsrfutil = Py_InitModule4(
        "oauth2client.contrib.xsrfutil",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_oauth2client$contrib$xsrfutil = PyModule_Create( &mdef_oauth2client$contrib$xsrfutil );
#endif

    moduledict_oauth2client$contrib$xsrfutil = MODULE_DICT( module_oauth2client$contrib$xsrfutil );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_oauth2client$contrib$xsrfutil,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_oauth2client$contrib$xsrfutil,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_oauth2client$contrib$xsrfutil,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_oauth2client$contrib$xsrfutil,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_oauth2client$contrib$xsrfutil );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_603c015a5fafaa8fa125fa9abf56b9f3, module_oauth2client$contrib$xsrfutil );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_388a1b1ebeb149b5d2b382902e4cd5f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_307573fcb0ac27c1d9c87cfac0ca4eb5;
        UPDATE_STRING_DICT0( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_ec2246d79ba8cbaeca928375ad4fff5c;
        UPDATE_STRING_DICT0( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_388a1b1ebeb149b5d2b382902e4cd5f2 = MAKE_MODULE_FRAME( codeobj_388a1b1ebeb149b5d2b382902e4cd5f2, module_oauth2client$contrib$xsrfutil );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_388a1b1ebeb149b5d2b382902e4cd5f2 );
    assert( Py_REFCNT( frame_388a1b1ebeb149b5d2b382902e4cd5f2 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_ec2246d79ba8cbaeca928375ad4fff5c;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_base64;
        tmp_globals_name_1 = (PyObject *)moduledict_oauth2client$contrib$xsrfutil;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_388a1b1ebeb149b5d2b382902e4cd5f2->m_frame.f_lineno = 17;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_base64, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_binascii;
        tmp_globals_name_2 = (PyObject *)moduledict_oauth2client$contrib$xsrfutil;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_388a1b1ebeb149b5d2b382902e4cd5f2->m_frame.f_lineno = 18;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_binascii, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_hmac;
        tmp_globals_name_3 = (PyObject *)moduledict_oauth2client$contrib$xsrfutil;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_388a1b1ebeb149b5d2b382902e4cd5f2->m_frame.f_lineno = 19;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_hmac, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_time;
        tmp_globals_name_4 = (PyObject *)moduledict_oauth2client$contrib$xsrfutil;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_388a1b1ebeb149b5d2b382902e4cd5f2->m_frame.f_lineno = 20;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        assert( !(tmp_assign_source_7 == NULL) );
        UPDATE_STRING_DICT1( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_oauth2client;
        tmp_globals_name_5 = (PyObject *)moduledict_oauth2client$contrib$xsrfutil;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain__helpers_tuple;
        tmp_level_name_5 = const_int_0;
        frame_388a1b1ebeb149b5d2b382902e4cd5f2->m_frame.f_lineno = 22;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain__helpers );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain__helpers, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_bytes_chr_58;
        UPDATE_STRING_DICT0( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_DELIMITER, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_int_pos_3600;
        UPDATE_STRING_DICT0( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_DEFAULT_TIMEOUT_SECS, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_defaults_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_388a1b1ebeb149b5d2b382902e4cd5f2->m_frame.f_lineno = 32;
        tmp_called_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_positional, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = const_tuple_str_empty_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_args_element_name_1 = MAKE_FUNCTION_oauth2client$contrib$xsrfutil$$$function_1_generate_token( tmp_defaults_1 );



        frame_388a1b1ebeb149b5d2b382902e4cd5f2->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_generate_token, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        frame_388a1b1ebeb149b5d2b382902e4cd5f2->m_frame.f_lineno = 60;
        tmp_called_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_positional, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = const_tuple_str_empty_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_args_element_name_2 = MAKE_FUNCTION_oauth2client$contrib$xsrfutil$$$function_2_validate_token( tmp_defaults_2 );



        frame_388a1b1ebeb149b5d2b382902e4cd5f2->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$contrib$xsrfutil, (Nuitka_StringObject *)const_str_plain_validate_token, tmp_assign_source_12 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_388a1b1ebeb149b5d2b382902e4cd5f2 );
#endif
    popFrameStack();

    assertFrameObject( frame_388a1b1ebeb149b5d2b382902e4cd5f2 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_388a1b1ebeb149b5d2b382902e4cd5f2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_388a1b1ebeb149b5d2b382902e4cd5f2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_388a1b1ebeb149b5d2b382902e4cd5f2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_388a1b1ebeb149b5d2b382902e4cd5f2, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_oauth2client$contrib$xsrfutil );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
