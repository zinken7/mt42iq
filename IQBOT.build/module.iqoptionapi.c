/* Generated code for Python module 'iqoptionapi'
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

/* The "_module_iqoptionapi" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_iqoptionapi;
PyDictObject *moduledict_iqoptionapi;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_str_plain_iqoptionapi_tuple;
extern PyObject *const_str_plain_setLevel;
static PyObject *const_list_str_digest_1b66662b58955e0b7de0d4c265f6fe51_list;
static PyObject *const_str_plain__prepare_logging;
static PyObject *const_str_plain_iqoptionapi;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_addHandler;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain_websocket_tuple;
extern PyObject *const_str_plain_logger;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_NullHandler;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_str_plain_logger_str_plain_websocket_logger_tuple;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_3b220d731e26ace42c4fc9494fa8760d;
extern PyObject *const_str_plain_DEBUG;
static PyObject *const_str_digest_9509035b6b0dc77970c3242ca6bcb7de;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_logging;
static PyObject *const_str_plain_websocket_logger;
extern PyObject *const_str_plain_websocket;
static PyObject *const_str_digest_1b66662b58955e0b7de0d4c265f6fe51;
static PyObject *const_str_digest_e79b23bb6d1909a55999f462d40ef9d7;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_3f720bcc4bc5884332af0d7208391965;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_iqoptionapi_tuple = PyTuple_New( 1 );
    const_str_plain_iqoptionapi = UNSTREAM_STRING_ASCII( &constant_bin[ 635745 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_iqoptionapi_tuple, 0, const_str_plain_iqoptionapi ); Py_INCREF( const_str_plain_iqoptionapi );
    const_list_str_digest_1b66662b58955e0b7de0d4c265f6fe51_list = PyList_New( 1 );
    const_str_digest_1b66662b58955e0b7de0d4c265f6fe51 = UNSTREAM_STRING_ASCII( &constant_bin[ 635756 ], 39, 0 );
    PyList_SET_ITEM( const_list_str_digest_1b66662b58955e0b7de0d4c265f6fe51_list, 0, const_str_digest_1b66662b58955e0b7de0d4c265f6fe51 ); Py_INCREF( const_str_digest_1b66662b58955e0b7de0d4c265f6fe51 );
    const_str_plain__prepare_logging = UNSTREAM_STRING_ASCII( &constant_bin[ 635795 ], 16, 1 );
    const_tuple_str_plain_logger_str_plain_websocket_logger_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_logger_str_plain_websocket_logger_tuple, 0, const_str_plain_logger ); Py_INCREF( const_str_plain_logger );
    const_str_plain_websocket_logger = UNSTREAM_STRING_ASCII( &constant_bin[ 635811 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_logger_str_plain_websocket_logger_tuple, 1, const_str_plain_websocket_logger ); Py_INCREF( const_str_plain_websocket_logger );
    const_str_digest_3b220d731e26ace42c4fc9494fa8760d = UNSTREAM_STRING_ASCII( &constant_bin[ 635827 ], 35, 0 );
    const_str_digest_9509035b6b0dc77970c3242ca6bcb7de = UNSTREAM_STRING_ASCII( &constant_bin[ 635862 ], 51, 0 );
    const_str_digest_e79b23bb6d1909a55999f462d40ef9d7 = UNSTREAM_STRING_ASCII( &constant_bin[ 635913 ], 20, 0 );
    const_str_digest_3f720bcc4bc5884332af0d7208391965 = UNSTREAM_STRING_ASCII( &constant_bin[ 635933 ], 40, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_iqoptionapi( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_51bd137380cebda96b79e4ad16d4dda7;
static PyCodeObject *codeobj_613795b10df7c6f3f50739b76b12fa48;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_9509035b6b0dc77970c3242ca6bcb7de;
    codeobj_51bd137380cebda96b79e4ad16d4dda7 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e79b23bb6d1909a55999f462d40ef9d7, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_613795b10df7c6f3f50739b76b12fa48 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__prepare_logging, 5, const_tuple_str_plain_logger_str_plain_websocket_logger_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_iqoptionapi$$$function_1__prepare_logging(  );


// The module function definitions.
static PyObject *impl_iqoptionapi$$$function_1__prepare_logging( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_logger = NULL;
    PyObject *var_websocket_logger = NULL;
    struct Nuitka_FrameObject *frame_613795b10df7c6f3f50739b76b12fa48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_613795b10df7c6f3f50739b76b12fa48 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_613795b10df7c6f3f50739b76b12fa48, codeobj_613795b10df7c6f3f50739b76b12fa48, module_iqoptionapi, sizeof(void *)+sizeof(void *) );
    frame_613795b10df7c6f3f50739b76b12fa48 = cache_frame_613795b10df7c6f3f50739b76b12fa48;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_613795b10df7c6f3f50739b76b12fa48 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_613795b10df7c6f3f50739b76b12fa48 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 7;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_613795b10df7c6f3f50739b76b12fa48->m_frame.f_lineno = 7;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_plain_iqoptionapi_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_logger == NULL );
        var_logger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( var_logger );
        tmp_source_name_1 = var_logger;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setLevel );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 8;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_DEBUG );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 8;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_613795b10df7c6f3f50739b76b12fa48->m_frame.f_lineno = 8;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( var_logger );
        tmp_source_name_3 = var_logger;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_addHandler );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        frame_613795b10df7c6f3f50739b76b12fa48->m_frame.f_lineno = 9;
        tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_NullHandler );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_613795b10df7c6f3f50739b76b12fa48->m_frame.f_lineno = 9;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 11;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        frame_613795b10df7c6f3f50739b76b12fa48->m_frame.f_lineno = 11;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_plain_websocket_tuple, 0 ) );

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_websocket_logger == NULL );
        var_websocket_logger = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT( var_websocket_logger );
        tmp_source_name_4 = var_websocket_logger;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_setLevel );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 12;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_DEBUG );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 12;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_613795b10df7c6f3f50739b76b12fa48->m_frame.f_lineno = 12;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT( var_websocket_logger );
        tmp_source_name_6 = var_websocket_logger;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_addHandler );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 13;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_6;
        frame_613795b10df7c6f3f50739b76b12fa48->m_frame.f_lineno = 13;
        tmp_args_element_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_NullHandler );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 13;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_613795b10df7c6f3f50739b76b12fa48->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_613795b10df7c6f3f50739b76b12fa48 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_613795b10df7c6f3f50739b76b12fa48 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_613795b10df7c6f3f50739b76b12fa48, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_613795b10df7c6f3f50739b76b12fa48->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_613795b10df7c6f3f50739b76b12fa48, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_613795b10df7c6f3f50739b76b12fa48,
        type_description_1,
        var_logger,
        var_websocket_logger
    );


    // Release cached frame.
    if ( frame_613795b10df7c6f3f50739b76b12fa48 == cache_frame_613795b10df7c6f3f50739b76b12fa48 )
    {
        Py_DECREF( frame_613795b10df7c6f3f50739b76b12fa48 );
    }
    cache_frame_613795b10df7c6f3f50739b76b12fa48 = NULL;

    assertFrameObject( frame_613795b10df7c6f3f50739b76b12fa48 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( iqoptionapi$$$function_1__prepare_logging );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_logger );
    Py_DECREF( var_logger );
    var_logger = NULL;

    CHECK_OBJECT( (PyObject *)var_websocket_logger );
    Py_DECREF( var_websocket_logger );
    var_websocket_logger = NULL;

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

    Py_XDECREF( var_logger );
    var_logger = NULL;

    Py_XDECREF( var_websocket_logger );
    var_websocket_logger = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( iqoptionapi$$$function_1__prepare_logging );
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



static PyObject *MAKE_FUNCTION_iqoptionapi$$$function_1__prepare_logging(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_iqoptionapi$$$function_1__prepare_logging,
        const_str_plain__prepare_logging,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_613795b10df7c6f3f50739b76b12fa48,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_iqoptionapi,
        const_str_digest_3f720bcc4bc5884332af0d7208391965,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_iqoptionapi =
{
    PyModuleDef_HEAD_INIT,
    "iqoptionapi",
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
MOD_ENTRY_DECL(iqoptionapi)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(iqoptionapi)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_iqoptionapi );
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
    puts("iqoptionapi: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("iqoptionapi: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("iqoptionapi: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initiqoptionapi" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_iqoptionapi = Py_InitModule4(
        "iqoptionapi",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_iqoptionapi = PyModule_Create( &mdef_iqoptionapi );
#endif

    moduledict_iqoptionapi = MODULE_DICT( module_iqoptionapi );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_iqoptionapi,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_iqoptionapi,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_iqoptionapi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_iqoptionapi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_iqoptionapi );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_iqoptionapi, module_iqoptionapi );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___name__ ),
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
#if 1
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_51bd137380cebda96b79e4ad16d4dda7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_3b220d731e26ace42c4fc9494fa8760d;
        UPDATE_STRING_DICT0( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_9509035b6b0dc77970c3242ca6bcb7de;
        UPDATE_STRING_DICT0( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY( const_list_str_digest_1b66662b58955e0b7de0d4c265f6fe51_list );
        UPDATE_STRING_DICT1( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_51bd137380cebda96b79e4ad16d4dda7 = MAKE_MODULE_FRAME( codeobj_51bd137380cebda96b79e4ad16d4dda7, module_iqoptionapi );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_51bd137380cebda96b79e4ad16d4dda7 );
    assert( Py_REFCNT( frame_51bd137380cebda96b79e4ad16d4dda7 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_9509035b6b0dc77970c3242ca6bcb7de;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_logging;
        tmp_globals_name_1 = (PyObject *)moduledict_iqoptionapi;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_51bd137380cebda96b79e4ad16d4dda7->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_iqoptionapi$$$function_1__prepare_logging(  );



        UPDATE_STRING_DICT1( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain__prepare_logging, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi, (Nuitka_StringObject *)const_str_plain__prepare_logging );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prepare_logging );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_called_name_1 = tmp_mvar_value_3;
        frame_51bd137380cebda96b79e4ad16d4dda7->m_frame.f_lineno = 15;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_51bd137380cebda96b79e4ad16d4dda7 );
#endif
    popFrameStack();

    assertFrameObject( frame_51bd137380cebda96b79e4ad16d4dda7 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_51bd137380cebda96b79e4ad16d4dda7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_51bd137380cebda96b79e4ad16d4dda7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_51bd137380cebda96b79e4ad16d4dda7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_51bd137380cebda96b79e4ad16d4dda7, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_iqoptionapi );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
