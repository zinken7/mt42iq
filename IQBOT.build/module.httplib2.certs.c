/* Generated code for Python module 'httplib2.certs'
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

/* The "_module_httplib2$certs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httplib2$certs;
PyDictObject *moduledict_httplib2$certs;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_environ;
static PyObject *const_str_digest_01159a7b6ec0feb4d45fa73bc85b2cc3;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_get_tuple;
static PyObject *const_str_digest_6243cda0d26a794e9acc3d1a1bf535db;
static PyObject *const_str_digest_ef70efccd1065c0a6745782477743441;
static PyObject *const_str_digest_e1fa9314319918826672aa791652155b;
static PyObject *const_str_plain_custom_ca_locater_where;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_path;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_env_tuple;
static PyObject *const_str_digest_c1ec23da46505cd237f72c8f6bf4b48c;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_abspath;
extern PyObject *const_tuple_str_plain_where_tuple;
extern PyObject *const_str_plain_where;
static PyObject *const_str_plain_HTTPLIB2_CA_CERTS;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_env;
extern PyObject *const_str_plain_os;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_ca_certs_locater;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_6d2afc6c6ae9c4ae73dc2e9116da748f;
static PyObject *const_str_plain_custom_ca_locater_available;
extern PyObject *const_str_plain_isfile;
static PyObject *const_tuple_str_plain_HTTPLIB2_CA_CERTS_tuple;
extern PyObject *const_str_plain_join;
static PyObject *const_str_plain_BUILTIN_CA_CERTS;
extern PyObject *const_str_plain_certifi;
extern PyObject *const_str_plain_dirname;
static PyObject *const_str_plain_certifi_where;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_certifi_available;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_01159a7b6ec0feb4d45fa73bc85b2cc3 = UNSTREAM_STRING_ASCII( &constant_bin[ 459495 ], 23, 0 );
    const_str_digest_6243cda0d26a794e9acc3d1a1bf535db = UNSTREAM_STRING_ASCII( &constant_bin[ 459518 ], 55, 0 );
    const_str_digest_ef70efccd1065c0a6745782477743441 = UNSTREAM_STRING_ASCII( &constant_bin[ 459573 ], 11, 0 );
    const_str_digest_e1fa9314319918826672aa791652155b = UNSTREAM_STRING_ASCII( &constant_bin[ 459503 ], 14, 0 );
    const_str_plain_custom_ca_locater_where = UNSTREAM_STRING_ASCII( &constant_bin[ 459584 ], 23, 1 );
    const_tuple_str_plain_env_tuple = PyTuple_New( 1 );
    const_str_plain_env = UNSTREAM_STRING_ASCII( &constant_bin[ 69072 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_env_tuple, 0, const_str_plain_env ); Py_INCREF( const_str_plain_env );
    const_str_digest_c1ec23da46505cd237f72c8f6bf4b48c = UNSTREAM_STRING_ASCII( &constant_bin[ 459607 ], 37, 0 );
    const_str_plain_HTTPLIB2_CA_CERTS = UNSTREAM_STRING_ASCII( &constant_bin[ 459539 ], 17, 1 );
    const_str_plain_ca_certs_locater = UNSTREAM_STRING_ASCII( &constant_bin[ 459644 ], 16, 1 );
    const_str_digest_6d2afc6c6ae9c4ae73dc2e9116da748f = UNSTREAM_STRING_ASCII( &constant_bin[ 459660 ], 45, 0 );
    const_str_plain_custom_ca_locater_available = UNSTREAM_STRING_ASCII( &constant_bin[ 459705 ], 27, 1 );
    const_tuple_str_plain_HTTPLIB2_CA_CERTS_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPLIB2_CA_CERTS_tuple, 0, const_str_plain_HTTPLIB2_CA_CERTS ); Py_INCREF( const_str_plain_HTTPLIB2_CA_CERTS );
    const_str_plain_BUILTIN_CA_CERTS = UNSTREAM_STRING_ASCII( &constant_bin[ 459732 ], 16, 1 );
    const_str_plain_certifi_where = UNSTREAM_STRING_ASCII( &constant_bin[ 459748 ], 13, 1 );
    const_str_plain_certifi_available = UNSTREAM_STRING_ASCII( &constant_bin[ 459761 ], 17, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_httplib2$certs( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_26d17855ce40e5dedece0026a27b041e;
static PyCodeObject *codeobj_97ac9c0ffb9ea057986160e50e1ca08a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_6d2afc6c6ae9c4ae73dc2e9116da748f;
    codeobj_26d17855ce40e5dedece0026a27b041e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_01159a7b6ec0feb4d45fa73bc85b2cc3, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_97ac9c0ffb9ea057986160e50e1ca08a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_where, 27, const_tuple_str_plain_env_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_httplib2$certs$$$function_1_where(  );


// The module function definitions.
static PyObject *impl_httplib2$certs$$$function_1_where( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_env = NULL;
    struct Nuitka_FrameObject *frame_97ac9c0ffb9ea057986160e50e1ca08a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_97ac9c0ffb9ea057986160e50e1ca08a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_97ac9c0ffb9ea057986160e50e1ca08a, codeobj_97ac9c0ffb9ea057986160e50e1ca08a, module_httplib2$certs, sizeof(void *) );
    frame_97ac9c0ffb9ea057986160e50e1ca08a = cache_frame_97ac9c0ffb9ea057986160e50e1ca08a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_97ac9c0ffb9ea057986160e50e1ca08a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_97ac9c0ffb9ea057986160e50e1ca08a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 28;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_environ );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_97ac9c0ffb9ea057986160e50e1ca08a->m_frame.f_lineno = 28;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_HTTPLIB2_CA_CERTS_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert( var_env == NULL );
        var_env = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_env );
        tmp_compexpr_left_1 = var_env;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            int tmp_truth_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 30;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_env );
            tmp_args_element_name_1 = var_env;
            frame_97ac9c0ffb9ea057986160e50e1ca08a->m_frame.f_lineno = 30;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isfile, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 30;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_1 );
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            CHECK_OBJECT( var_env );
            tmp_return_value = var_env;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_6243cda0d26a794e9acc3d1a1bf535db;
                frame_97ac9c0ffb9ea057986160e50e1ca08a->m_frame.f_lineno = 33;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 33;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_custom_ca_locater_available );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_custom_ca_locater_available );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "custom_ca_locater_available" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_mvar_value_3 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_custom_ca_locater_where );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_custom_ca_locater_where );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "custom_ca_locater_where" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 35;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_4;
            frame_97ac9c0ffb9ea057986160e50e1ca08a->m_frame.f_lineno = 35;
            tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_mvar_value_5;
        int tmp_truth_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_certifi_available );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_certifi_available );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "certifi_available" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_mvar_value_5 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_certifi_where );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_certifi_where );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "certifi_where" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 37;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_6;
            frame_97ac9c0ffb9ea057986160e50e1ca08a->m_frame.f_lineno = 37;
            tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_BUILTIN_CA_CERTS );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUILTIN_CA_CERTS );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUILTIN_CA_CERTS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_return_value = tmp_mvar_value_7;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_97ac9c0ffb9ea057986160e50e1ca08a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_97ac9c0ffb9ea057986160e50e1ca08a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_97ac9c0ffb9ea057986160e50e1ca08a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_97ac9c0ffb9ea057986160e50e1ca08a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_97ac9c0ffb9ea057986160e50e1ca08a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_97ac9c0ffb9ea057986160e50e1ca08a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_97ac9c0ffb9ea057986160e50e1ca08a,
        type_description_1,
        var_env
    );


    // Release cached frame.
    if ( frame_97ac9c0ffb9ea057986160e50e1ca08a == cache_frame_97ac9c0ffb9ea057986160e50e1ca08a )
    {
        Py_DECREF( frame_97ac9c0ffb9ea057986160e50e1ca08a );
    }
    cache_frame_97ac9c0ffb9ea057986160e50e1ca08a = NULL;

    assertFrameObject( frame_97ac9c0ffb9ea057986160e50e1ca08a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( httplib2$certs$$$function_1_where );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_env );
    Py_DECREF( var_env );
    var_env = NULL;

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

    Py_XDECREF( var_env );
    var_env = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( httplib2$certs$$$function_1_where );
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



static PyObject *MAKE_FUNCTION_httplib2$certs$$$function_1_where(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httplib2$certs$$$function_1_where,
        const_str_plain_where,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_97ac9c0ffb9ea057986160e50e1ca08a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_httplib2$certs,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_httplib2$certs =
{
    PyModuleDef_HEAD_INIT,
    "httplib2.certs",
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
MOD_ENTRY_DECL(httplib2$certs)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(httplib2$certs)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_httplib2$certs );
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
    puts("httplib2.certs: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("httplib2.certs: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("httplib2.certs: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inithttplib2$certs" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_httplib2$certs = Py_InitModule4(
        "httplib2.certs",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_httplib2$certs = PyModule_Create( &mdef_httplib2$certs );
#endif

    moduledict_httplib2$certs = MODULE_DICT( module_httplib2$certs );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_httplib2$certs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_httplib2$certs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_httplib2$certs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_httplib2$certs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_httplib2$certs );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_e1fa9314319918826672aa791652155b, module_httplib2$certs );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_26d17855ce40e5dedece0026a27b041e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_c1ec23da46505cd237f72c8f6bf4b48c;
        UPDATE_STRING_DICT0( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_6d2afc6c6ae9c4ae73dc2e9116da748f;
        UPDATE_STRING_DICT0( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_26d17855ce40e5dedece0026a27b041e = MAKE_MODULE_FRAME( codeobj_26d17855ce40e5dedece0026a27b041e, module_httplib2$certs );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_26d17855ce40e5dedece0026a27b041e );
    assert( Py_REFCNT( frame_26d17855ce40e5dedece0026a27b041e ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_6d2afc6c6ae9c4ae73dc2e9116da748f;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_os;
        tmp_globals_name_1 = (PyObject *)moduledict_httplib2$certs;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_26d17855ce40e5dedece0026a27b041e->m_frame.f_lineno = 3;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_False;
        UPDATE_STRING_DICT0( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_certifi_available, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        UPDATE_STRING_DICT0( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_certifi_where, tmp_assign_source_6 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_certifi;
        tmp_globals_name_2 = (PyObject *)moduledict_httplib2$certs;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_where_tuple;
        tmp_level_name_2 = const_int_0;
        frame_26d17855ce40e5dedece0026a27b041e->m_frame.f_lineno = 8;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_where );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_certifi_where, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_True;
        UPDATE_STRING_DICT0( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_certifi_available, tmp_assign_source_8 );
    }
    goto try_end_1;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_26d17855ce40e5dedece0026a27b041e, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_26d17855ce40e5dedece0026a27b041e, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
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
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 7;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_26d17855ce40e5dedece0026a27b041e->m_frame) frame_26d17855ce40e5dedece0026a27b041e->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_2;
        branch_no_1:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
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
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( httplib2$certs );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_False;
        UPDATE_STRING_DICT0( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_custom_ca_locater_available, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_None;
        UPDATE_STRING_DICT0( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_custom_ca_locater_where, tmp_assign_source_10 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_ca_certs_locater;
        tmp_globals_name_3 = (PyObject *)moduledict_httplib2$certs;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_get_tuple;
        tmp_level_name_3 = const_int_0;
        frame_26d17855ce40e5dedece0026a27b041e->m_frame.f_lineno = 16;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_get );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_custom_ca_locater_where, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_True;
        UPDATE_STRING_DICT0( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_custom_ca_locater_available, tmp_assign_source_12 );
    }
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

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_26d17855ce40e5dedece0026a27b041e, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_26d17855ce40e5dedece0026a27b041e, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 15;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_26d17855ce40e5dedece0026a27b041e->m_frame) frame_26d17855ce40e5dedece0026a27b041e->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_4;
        branch_no_2:;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( httplib2$certs );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dirname );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_5;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_abspath );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain___file__ );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___file__ );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__file__" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_6;
        frame_26d17855ce40e5dedece0026a27b041e->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_26d17855ce40e5dedece0026a27b041e->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = const_str_digest_ef70efccd1065c0a6745782477743441;
        frame_26d17855ce40e5dedece0026a27b041e->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_4 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_BUILTIN_CA_CERTS, tmp_assign_source_13 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_26d17855ce40e5dedece0026a27b041e );
#endif
    popFrameStack();

    assertFrameObject( frame_26d17855ce40e5dedece0026a27b041e );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_26d17855ce40e5dedece0026a27b041e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_26d17855ce40e5dedece0026a27b041e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_26d17855ce40e5dedece0026a27b041e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_26d17855ce40e5dedece0026a27b041e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_httplib2$certs$$$function_1_where(  );



        UPDATE_STRING_DICT1( moduledict_httplib2$certs, (Nuitka_StringObject *)const_str_plain_where, tmp_assign_source_14 );
    }

    return MOD_RETURN_VALUE( module_httplib2$certs );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
