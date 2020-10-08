/* Generated code for Python module 'websocket._logging'
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

/* The "_module_websocket$_logging" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websocket$_logging;
PyDictObject *moduledict_websocket$_logging;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_setLevel;
static PyObject *const_str_digest_4511525f4aa166428a9ec60bcea19225;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_tuple_str_plain_traceable_str_plain_handler_tuple;
static PyObject *const_str_plain__traceEnabled;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_debug;
static PyObject *const_str_plain_traceable;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_41269616217e4243f2b2bba17db1f893;
static PyObject *const_tuple_str_plain_title_str_plain_message_tuple;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_isEnabledForError;
extern PyObject *const_str_plain_addHandler;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_emit;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_Handler;
extern PyObject *const_str_plain___all__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain_websocket_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_record;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_ERROR;
extern PyObject *const_tuple_str_plain_msg_tuple;
extern PyObject *const_str_digest_895053584462000f806d2a64eaddf388;
extern PyObject *const_str_plain_NullHandler;
extern PyObject *const_str_digest_6fc4ed4d6fa397c0103d45e9c12271f9;
static PyObject *const_str_digest_8b1e83400664285b39d73f22663054d3;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_1872f92c2fe2ae81926b0b0e155a223b;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_StreamHandler;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_list_1efac79b534b01a89d4c2c6b7cd55e29_list;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_warning;
static PyObject *const_str_digest_9ef18eb316e1eb5e5e3954c398293166;
extern PyObject *const_tuple_str_digest_32efba87eb7b18f4091a8bb1a0e216e8_tuple;
extern PyObject *const_str_plain_DEBUG;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_isEnabledForDebug;
static PyObject *const_str_plain_isEnabledFor;
extern PyObject *const_str_plain_title;
extern PyObject *const_str_plain_dump;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_trace;
extern PyObject *const_str_plain_websocket;
static PyObject *const_str_plain__logger;
extern PyObject *const_str_digest_32efba87eb7b18f4091a8bb1a0e216e8;
static PyObject *const_str_digest_1a500b238e6f2b7b78e61b3998c9bf05;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_handler;
extern PyObject *const_tuple_str_plain_self_str_plain_record_tuple;
static PyObject *const_str_plain_enableTrace;
extern PyObject *const_tuple_str_plain_NullHandler_tuple;
extern PyObject *const_str_plain_error;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_4511525f4aa166428a9ec60bcea19225 = UNSTREAM_STRING_ASCII( &constant_bin[ 740872 ], 4, 0 );
    const_tuple_str_plain_traceable_str_plain_handler_tuple = PyTuple_New( 2 );
    const_str_plain_traceable = UNSTREAM_STRING_ASCII( &constant_bin[ 2864721 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_traceable_str_plain_handler_tuple, 0, const_str_plain_traceable ); Py_INCREF( const_str_plain_traceable );
    PyTuple_SET_ITEM( const_tuple_str_plain_traceable_str_plain_handler_tuple, 1, const_str_plain_handler ); Py_INCREF( const_str_plain_handler );
    const_str_plain__traceEnabled = UNSTREAM_STRING_ASCII( &constant_bin[ 2864730 ], 13, 1 );
    const_str_digest_41269616217e4243f2b2bba17db1f893 = UNSTREAM_STRING_ASCII( &constant_bin[ 2864743 ], 27, 0 );
    const_tuple_str_plain_title_str_plain_message_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_title_str_plain_message_tuple, 0, const_str_plain_title ); Py_INCREF( const_str_plain_title );
    PyTuple_SET_ITEM( const_tuple_str_plain_title_str_plain_message_tuple, 1, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_8b1e83400664285b39d73f22663054d3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2864770 ], 49, 0 );
    const_str_digest_1872f92c2fe2ae81926b0b0e155a223b = UNSTREAM_STRING_ASCII( &constant_bin[ 2864819 ], 108, 0 );
    const_list_1efac79b534b01a89d4c2c6b7cd55e29_list = PyList_New( 8 );
    const_str_plain_enableTrace = UNSTREAM_STRING_ASCII( &constant_bin[ 2864927 ], 11, 1 );
    PyList_SET_ITEM( const_list_1efac79b534b01a89d4c2c6b7cd55e29_list, 0, const_str_plain_enableTrace ); Py_INCREF( const_str_plain_enableTrace );
    PyList_SET_ITEM( const_list_1efac79b534b01a89d4c2c6b7cd55e29_list, 1, const_str_plain_dump ); Py_INCREF( const_str_plain_dump );
    PyList_SET_ITEM( const_list_1efac79b534b01a89d4c2c6b7cd55e29_list, 2, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    PyList_SET_ITEM( const_list_1efac79b534b01a89d4c2c6b7cd55e29_list, 3, const_str_plain_warning ); Py_INCREF( const_str_plain_warning );
    PyList_SET_ITEM( const_list_1efac79b534b01a89d4c2c6b7cd55e29_list, 4, const_str_plain_debug ); Py_INCREF( const_str_plain_debug );
    PyList_SET_ITEM( const_list_1efac79b534b01a89d4c2c6b7cd55e29_list, 5, const_str_plain_trace ); Py_INCREF( const_str_plain_trace );
    PyList_SET_ITEM( const_list_1efac79b534b01a89d4c2c6b7cd55e29_list, 6, const_str_plain_isEnabledForError ); Py_INCREF( const_str_plain_isEnabledForError );
    PyList_SET_ITEM( const_list_1efac79b534b01a89d4c2c6b7cd55e29_list, 7, const_str_plain_isEnabledForDebug ); Py_INCREF( const_str_plain_isEnabledForDebug );
    const_str_digest_9ef18eb316e1eb5e5e3954c398293166 = UNSTREAM_STRING_ASCII( &constant_bin[ 2864751 ], 18, 0 );
    const_str_plain_isEnabledFor = UNSTREAM_STRING_ASCII( &constant_bin[ 2864938 ], 12, 1 );
    const_str_plain__logger = UNSTREAM_STRING_ASCII( &constant_bin[ 635820 ], 7, 1 );
    const_str_digest_1a500b238e6f2b7b78e61b3998c9bf05 = UNSTREAM_STRING_ASCII( &constant_bin[ 2410273 ], 4, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_websocket$_logging( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_28fb8e21892d80dc213c6b09bf73bc07;
static PyCodeObject *codeobj_d202e4e65dd01ca325d9729222c387eb;
static PyCodeObject *codeobj_0146c8d88c901e3848b00890073e633c;
static PyCodeObject *codeobj_bdc0a645ae5c02abfb62c1bc5bbf21ed;
static PyCodeObject *codeobj_652ee473e6292db4de472330614f77c7;
static PyCodeObject *codeobj_81ec897280729566b758912991b121d3;
static PyCodeObject *codeobj_3d3194c38538bb596385de445d20284e;
static PyCodeObject *codeobj_2f8099541f292d10791c83cd4d60f429;
static PyCodeObject *codeobj_cca3697869ef510edf2a15ff495c2044;
static PyCodeObject *codeobj_d748659964f3d70b3538a3af881eb641;
static PyCodeObject *codeobj_fc6f3d87763e6dfaeb372fd3dd9dcc81;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_8b1e83400664285b39d73f22663054d3;
    codeobj_28fb8e21892d80dc213c6b09bf73bc07 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_41269616217e4243f2b2bba17db1f893, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d202e4e65dd01ca325d9729222c387eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_NullHandler, 28, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_0146c8d88c901e3848b00890073e633c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_debug, 68, const_tuple_str_plain_msg_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bdc0a645ae5c02abfb62c1bc5bbf21ed = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dump, 53, const_tuple_str_plain_title_str_plain_message_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_652ee473e6292db4de472330614f77c7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_emit, 29, const_tuple_str_plain_self_str_plain_record_tuple, 2, 0, CO_NOFREE );
    codeobj_81ec897280729566b758912991b121d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_enableTrace, 40, const_tuple_str_plain_traceable_str_plain_handler_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3d3194c38538bb596385de445d20284e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_error, 60, const_tuple_str_plain_msg_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2f8099541f292d10791c83cd4d60f429 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isEnabledForDebug, 81, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cca3697869ef510edf2a15ff495c2044 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isEnabledForError, 77, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d748659964f3d70b3538a3af881eb641 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_trace, 72, const_tuple_str_plain_msg_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fc6f3d87763e6dfaeb372fd3dd9dcc81 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_warning, 64, const_tuple_str_plain_msg_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_1_emit(  );


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_2_enableTrace( PyObject *defaults );


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_3_dump(  );


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_4_error(  );


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_5_warning(  );


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_6_debug(  );


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_7_trace(  );


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_8_isEnabledForError(  );


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_9_isEnabledForDebug(  );


// The module function definitions.
static PyObject *impl_websocket$_logging$$$function_1_emit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_record = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_1_emit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_record );
    Py_DECREF( par_record );
    par_record = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_record );
    Py_DECREF( par_record );
    par_record = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_1_emit );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_websocket$_logging$$$function_2_enableTrace( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_traceable = python_pars[ 0 ];
    PyObject *par_handler = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_81ec897280729566b758912991b121d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_81ec897280729566b758912991b121d3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( par_traceable );
        tmp_assign_source_1 = par_traceable;
        UPDATE_STRING_DICT0( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__traceEnabled, tmp_assign_source_1 );
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_81ec897280729566b758912991b121d3, codeobj_81ec897280729566b758912991b121d3, module_websocket$_logging, sizeof(void *)+sizeof(void *) );
    frame_81ec897280729566b758912991b121d3 = cache_frame_81ec897280729566b758912991b121d3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_81ec897280729566b758912991b121d3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_81ec897280729566b758912991b121d3 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_traceable );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_traceable );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__logger );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__logger );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_logger" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 49;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_handler );
            tmp_args_element_name_1 = par_handler;
            frame_81ec897280729566b758912991b121d3->m_frame.f_lineno = 49;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_addHandler, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__logger );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__logger );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_logger" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 50;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setLevel );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_logging );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 50;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_DEBUG );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 50;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_81ec897280729566b758912991b121d3->m_frame.f_lineno = 50;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81ec897280729566b758912991b121d3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81ec897280729566b758912991b121d3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_81ec897280729566b758912991b121d3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_81ec897280729566b758912991b121d3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_81ec897280729566b758912991b121d3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_81ec897280729566b758912991b121d3,
        type_description_1,
        par_traceable,
        par_handler
    );


    // Release cached frame.
    if ( frame_81ec897280729566b758912991b121d3 == cache_frame_81ec897280729566b758912991b121d3 )
    {
        Py_DECREF( frame_81ec897280729566b758912991b121d3 );
    }
    cache_frame_81ec897280729566b758912991b121d3 = NULL;

    assertFrameObject( frame_81ec897280729566b758912991b121d3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_2_enableTrace );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_traceable );
    Py_DECREF( par_traceable );
    par_traceable = NULL;

    CHECK_OBJECT( (PyObject *)par_handler );
    Py_DECREF( par_handler );
    par_handler = NULL;

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

    CHECK_OBJECT( (PyObject *)par_traceable );
    Py_DECREF( par_traceable );
    par_traceable = NULL;

    CHECK_OBJECT( (PyObject *)par_handler );
    Py_DECREF( par_handler );
    par_handler = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_2_enableTrace );
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


static PyObject *impl_websocket$_logging$$$function_3_dump( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_title = python_pars[ 0 ];
    PyObject *par_message = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_bdc0a645ae5c02abfb62c1bc5bbf21ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bdc0a645ae5c02abfb62c1bc5bbf21ed = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bdc0a645ae5c02abfb62c1bc5bbf21ed, codeobj_bdc0a645ae5c02abfb62c1bc5bbf21ed, module_websocket$_logging, sizeof(void *)+sizeof(void *) );
    frame_bdc0a645ae5c02abfb62c1bc5bbf21ed = cache_frame_bdc0a645ae5c02abfb62c1bc5bbf21ed;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bdc0a645ae5c02abfb62c1bc5bbf21ed );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bdc0a645ae5c02abfb62c1bc5bbf21ed ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__traceEnabled );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__traceEnabled );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_traceEnabled" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__logger );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__logger );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_logger" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 55;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_debug );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = const_str_digest_1a500b238e6f2b7b78e61b3998c9bf05;
            CHECK_OBJECT( par_title );
            tmp_right_name_1 = par_title;
            tmp_left_name_1 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_2, tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 55;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_str_digest_4511525f4aa166428a9ec60bcea19225;
            tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 55;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_bdc0a645ae5c02abfb62c1bc5bbf21ed->m_frame.f_lineno = 55;
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


                exception_lineno = 55;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__logger );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__logger );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_logger" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 56;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_message );
            tmp_args_element_name_2 = par_message;
            frame_bdc0a645ae5c02abfb62c1bc5bbf21ed->m_frame.f_lineno = 56;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_debug, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_3;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__logger );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__logger );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_logger" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 57;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_4;
            frame_bdc0a645ae5c02abfb62c1bc5bbf21ed->m_frame.f_lineno = 57;
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_debug, &PyTuple_GET_ITEM( const_tuple_str_digest_32efba87eb7b18f4091a8bb1a0e216e8_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bdc0a645ae5c02abfb62c1bc5bbf21ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bdc0a645ae5c02abfb62c1bc5bbf21ed );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bdc0a645ae5c02abfb62c1bc5bbf21ed, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bdc0a645ae5c02abfb62c1bc5bbf21ed->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bdc0a645ae5c02abfb62c1bc5bbf21ed, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bdc0a645ae5c02abfb62c1bc5bbf21ed,
        type_description_1,
        par_title,
        par_message
    );


    // Release cached frame.
    if ( frame_bdc0a645ae5c02abfb62c1bc5bbf21ed == cache_frame_bdc0a645ae5c02abfb62c1bc5bbf21ed )
    {
        Py_DECREF( frame_bdc0a645ae5c02abfb62c1bc5bbf21ed );
    }
    cache_frame_bdc0a645ae5c02abfb62c1bc5bbf21ed = NULL;

    assertFrameObject( frame_bdc0a645ae5c02abfb62c1bc5bbf21ed );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_3_dump );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_title );
    Py_DECREF( par_title );
    par_title = NULL;

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

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

    CHECK_OBJECT( (PyObject *)par_title );
    Py_DECREF( par_title );
    par_title = NULL;

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_3_dump );
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


static PyObject *impl_websocket$_logging$$$function_4_error( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3d3194c38538bb596385de445d20284e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3d3194c38538bb596385de445d20284e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3d3194c38538bb596385de445d20284e, codeobj_3d3194c38538bb596385de445d20284e, module_websocket$_logging, sizeof(void *) );
    frame_3d3194c38538bb596385de445d20284e = cache_frame_3d3194c38538bb596385de445d20284e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3d3194c38538bb596385de445d20284e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3d3194c38538bb596385de445d20284e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__logger );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__logger );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_logger" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_msg );
        tmp_args_element_name_1 = par_msg;
        frame_3d3194c38538bb596385de445d20284e->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_error, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d3194c38538bb596385de445d20284e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d3194c38538bb596385de445d20284e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3d3194c38538bb596385de445d20284e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3d3194c38538bb596385de445d20284e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3d3194c38538bb596385de445d20284e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3d3194c38538bb596385de445d20284e,
        type_description_1,
        par_msg
    );


    // Release cached frame.
    if ( frame_3d3194c38538bb596385de445d20284e == cache_frame_3d3194c38538bb596385de445d20284e )
    {
        Py_DECREF( frame_3d3194c38538bb596385de445d20284e );
    }
    cache_frame_3d3194c38538bb596385de445d20284e = NULL;

    assertFrameObject( frame_3d3194c38538bb596385de445d20284e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_4_error );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_4_error );
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


static PyObject *impl_websocket$_logging$$$function_5_warning( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_fc6f3d87763e6dfaeb372fd3dd9dcc81;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fc6f3d87763e6dfaeb372fd3dd9dcc81 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fc6f3d87763e6dfaeb372fd3dd9dcc81, codeobj_fc6f3d87763e6dfaeb372fd3dd9dcc81, module_websocket$_logging, sizeof(void *) );
    frame_fc6f3d87763e6dfaeb372fd3dd9dcc81 = cache_frame_fc6f3d87763e6dfaeb372fd3dd9dcc81;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fc6f3d87763e6dfaeb372fd3dd9dcc81 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fc6f3d87763e6dfaeb372fd3dd9dcc81 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__logger );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__logger );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_logger" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_msg );
        tmp_args_element_name_1 = par_msg;
        frame_fc6f3d87763e6dfaeb372fd3dd9dcc81->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_warning, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc6f3d87763e6dfaeb372fd3dd9dcc81 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc6f3d87763e6dfaeb372fd3dd9dcc81 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fc6f3d87763e6dfaeb372fd3dd9dcc81, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fc6f3d87763e6dfaeb372fd3dd9dcc81->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fc6f3d87763e6dfaeb372fd3dd9dcc81, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fc6f3d87763e6dfaeb372fd3dd9dcc81,
        type_description_1,
        par_msg
    );


    // Release cached frame.
    if ( frame_fc6f3d87763e6dfaeb372fd3dd9dcc81 == cache_frame_fc6f3d87763e6dfaeb372fd3dd9dcc81 )
    {
        Py_DECREF( frame_fc6f3d87763e6dfaeb372fd3dd9dcc81 );
    }
    cache_frame_fc6f3d87763e6dfaeb372fd3dd9dcc81 = NULL;

    assertFrameObject( frame_fc6f3d87763e6dfaeb372fd3dd9dcc81 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_5_warning );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_5_warning );
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


static PyObject *impl_websocket$_logging$$$function_6_debug( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_0146c8d88c901e3848b00890073e633c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0146c8d88c901e3848b00890073e633c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0146c8d88c901e3848b00890073e633c, codeobj_0146c8d88c901e3848b00890073e633c, module_websocket$_logging, sizeof(void *) );
    frame_0146c8d88c901e3848b00890073e633c = cache_frame_0146c8d88c901e3848b00890073e633c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0146c8d88c901e3848b00890073e633c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0146c8d88c901e3848b00890073e633c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__logger );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__logger );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_logger" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_msg );
        tmp_args_element_name_1 = par_msg;
        frame_0146c8d88c901e3848b00890073e633c->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_debug, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0146c8d88c901e3848b00890073e633c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0146c8d88c901e3848b00890073e633c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0146c8d88c901e3848b00890073e633c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0146c8d88c901e3848b00890073e633c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0146c8d88c901e3848b00890073e633c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0146c8d88c901e3848b00890073e633c,
        type_description_1,
        par_msg
    );


    // Release cached frame.
    if ( frame_0146c8d88c901e3848b00890073e633c == cache_frame_0146c8d88c901e3848b00890073e633c )
    {
        Py_DECREF( frame_0146c8d88c901e3848b00890073e633c );
    }
    cache_frame_0146c8d88c901e3848b00890073e633c = NULL;

    assertFrameObject( frame_0146c8d88c901e3848b00890073e633c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_6_debug );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_6_debug );
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


static PyObject *impl_websocket$_logging$$$function_7_trace( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d748659964f3d70b3538a3af881eb641;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d748659964f3d70b3538a3af881eb641 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d748659964f3d70b3538a3af881eb641, codeobj_d748659964f3d70b3538a3af881eb641, module_websocket$_logging, sizeof(void *) );
    frame_d748659964f3d70b3538a3af881eb641 = cache_frame_d748659964f3d70b3538a3af881eb641;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d748659964f3d70b3538a3af881eb641 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d748659964f3d70b3538a3af881eb641 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__traceEnabled );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__traceEnabled );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_traceEnabled" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__logger );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__logger );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_logger" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 74;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_msg );
            tmp_args_element_name_1 = par_msg;
            frame_d748659964f3d70b3538a3af881eb641->m_frame.f_lineno = 74;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_debug, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d748659964f3d70b3538a3af881eb641 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d748659964f3d70b3538a3af881eb641 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d748659964f3d70b3538a3af881eb641, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d748659964f3d70b3538a3af881eb641->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d748659964f3d70b3538a3af881eb641, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d748659964f3d70b3538a3af881eb641,
        type_description_1,
        par_msg
    );


    // Release cached frame.
    if ( frame_d748659964f3d70b3538a3af881eb641 == cache_frame_d748659964f3d70b3538a3af881eb641 )
    {
        Py_DECREF( frame_d748659964f3d70b3538a3af881eb641 );
    }
    cache_frame_d748659964f3d70b3538a3af881eb641 = NULL;

    assertFrameObject( frame_d748659964f3d70b3538a3af881eb641 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_7_trace );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_7_trace );
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


static PyObject *impl_websocket$_logging$$$function_8_isEnabledForError( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_cca3697869ef510edf2a15ff495c2044;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cca3697869ef510edf2a15ff495c2044 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_cca3697869ef510edf2a15ff495c2044, codeobj_cca3697869ef510edf2a15ff495c2044, module_websocket$_logging, 0 );
    frame_cca3697869ef510edf2a15ff495c2044 = cache_frame_cca3697869ef510edf2a15ff495c2044;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cca3697869ef510edf2a15ff495c2044 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cca3697869ef510edf2a15ff495c2044 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__logger );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__logger );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_logger" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_isEnabledFor );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_logging );

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

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ERROR );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_cca3697869ef510edf2a15ff495c2044->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cca3697869ef510edf2a15ff495c2044 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cca3697869ef510edf2a15ff495c2044 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cca3697869ef510edf2a15ff495c2044 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cca3697869ef510edf2a15ff495c2044, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cca3697869ef510edf2a15ff495c2044->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cca3697869ef510edf2a15ff495c2044, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cca3697869ef510edf2a15ff495c2044,
        type_description_1
    );


    // Release cached frame.
    if ( frame_cca3697869ef510edf2a15ff495c2044 == cache_frame_cca3697869ef510edf2a15ff495c2044 )
    {
        Py_DECREF( frame_cca3697869ef510edf2a15ff495c2044 );
    }
    cache_frame_cca3697869ef510edf2a15ff495c2044 = NULL;

    assertFrameObject( frame_cca3697869ef510edf2a15ff495c2044 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_8_isEnabledForError );
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


static PyObject *impl_websocket$_logging$$$function_9_isEnabledForDebug( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_2f8099541f292d10791c83cd4d60f429;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2f8099541f292d10791c83cd4d60f429 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_2f8099541f292d10791c83cd4d60f429, codeobj_2f8099541f292d10791c83cd4d60f429, module_websocket$_logging, 0 );
    frame_2f8099541f292d10791c83cd4d60f429 = cache_frame_2f8099541f292d10791c83cd4d60f429;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2f8099541f292d10791c83cd4d60f429 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2f8099541f292d10791c83cd4d60f429 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__logger );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__logger );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_logger" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_isEnabledFor );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_logging );

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

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_DEBUG );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_2f8099541f292d10791c83cd4d60f429->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2f8099541f292d10791c83cd4d60f429 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2f8099541f292d10791c83cd4d60f429 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2f8099541f292d10791c83cd4d60f429 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2f8099541f292d10791c83cd4d60f429, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2f8099541f292d10791c83cd4d60f429->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2f8099541f292d10791c83cd4d60f429, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2f8099541f292d10791c83cd4d60f429,
        type_description_1
    );


    // Release cached frame.
    if ( frame_2f8099541f292d10791c83cd4d60f429 == cache_frame_2f8099541f292d10791c83cd4d60f429 )
    {
        Py_DECREF( frame_2f8099541f292d10791c83cd4d60f429 );
    }
    cache_frame_2f8099541f292d10791c83cd4d60f429 = NULL;

    assertFrameObject( frame_2f8099541f292d10791c83cd4d60f429 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_logging$$$function_9_isEnabledForDebug );
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



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_1_emit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function_1_emit,
        const_str_plain_emit,
#if PYTHON_VERSION >= 300
        const_str_digest_895053584462000f806d2a64eaddf388,
#endif
        codeobj_652ee473e6292db4de472330614f77c7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_logging,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_2_enableTrace( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function_2_enableTrace,
        const_str_plain_enableTrace,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_81ec897280729566b758912991b121d3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_logging,
        const_str_digest_1872f92c2fe2ae81926b0b0e155a223b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_3_dump(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function_3_dump,
        const_str_plain_dump,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bdc0a645ae5c02abfb62c1bc5bbf21ed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_logging,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_4_error(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function_4_error,
        const_str_plain_error,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3d3194c38538bb596385de445d20284e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_logging,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_5_warning(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function_5_warning,
        const_str_plain_warning,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fc6f3d87763e6dfaeb372fd3dd9dcc81,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_logging,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_6_debug(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function_6_debug,
        const_str_plain_debug,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0146c8d88c901e3848b00890073e633c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_logging,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_7_trace(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function_7_trace,
        const_str_plain_trace,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d748659964f3d70b3538a3af881eb641,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_logging,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_8_isEnabledForError(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function_8_isEnabledForError,
        const_str_plain_isEnabledForError,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cca3697869ef510edf2a15ff495c2044,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_logging,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function_9_isEnabledForDebug(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function_9_isEnabledForDebug,
        const_str_plain_isEnabledForDebug,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2f8099541f292d10791c83cd4d60f429,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_logging,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_websocket$_logging =
{
    PyModuleDef_HEAD_INIT,
    "websocket._logging",
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
MOD_ENTRY_DECL(websocket$_logging)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(websocket$_logging)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_websocket$_logging );
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
    puts("websocket._logging: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("websocket._logging: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("websocket._logging: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initwebsocket$_logging" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_websocket$_logging = Py_InitModule4(
        "websocket._logging",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_websocket$_logging = PyModule_Create( &mdef_websocket$_logging );
#endif

    moduledict_websocket$_logging = MODULE_DICT( module_websocket$_logging );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_websocket$_logging,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_websocket$_logging,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_logging,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_logging,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_websocket$_logging );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_9ef18eb316e1eb5e5e3954c398293166, module_websocket$_logging );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_28fb8e21892d80dc213c6b09bf73bc07;
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
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_websocket$_logging_28 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_d202e4e65dd01ca325d9729222c387eb_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d202e4e65dd01ca325d9729222c387eb_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_6fc4ed4d6fa397c0103d45e9c12271f9;
        UPDATE_STRING_DICT0( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_8b1e83400664285b39d73f22663054d3;
        UPDATE_STRING_DICT0( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_28fb8e21892d80dc213c6b09bf73bc07 = MAKE_MODULE_FRAME( codeobj_28fb8e21892d80dc213c6b09bf73bc07, module_websocket$_logging );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_28fb8e21892d80dc213c6b09bf73bc07 );
    assert( Py_REFCNT( frame_28fb8e21892d80dc213c6b09bf73bc07 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_8b1e83400664285b39d73f22663054d3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_logging;
        tmp_globals_name_1 = (PyObject *)moduledict_websocket$_logging;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_28fb8e21892d80dc213c6b09bf73bc07->m_frame.f_lineno = 22;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_28fb8e21892d80dc213c6b09bf73bc07->m_frame.f_lineno = 24;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_plain_websocket_tuple, 0 ) );

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__logger, tmp_assign_source_5 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_logging;
        tmp_globals_name_2 = (PyObject *)moduledict_websocket$_logging;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_NullHandler_tuple;
        tmp_level_name_2 = const_int_0;
        frame_28fb8e21892d80dc213c6b09bf73bc07->m_frame.f_lineno = 26;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto try_except_handler_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_NullHandler );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_NullHandler, tmp_assign_source_6 );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_28fb8e21892d80dc213c6b09bf73bc07, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_28fb8e21892d80dc213c6b09bf73bc07, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_2;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_logging );

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

                exception_lineno = 28;

                goto try_except_handler_3;
            }

            tmp_source_name_1 = tmp_mvar_value_4;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Handler );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            tmp_assign_source_7 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_assign_source_7, 0, tmp_tuple_element_1 );
            assert( tmp_class_creation_1__bases_orig == NULL );
            tmp_class_creation_1__bases_orig = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_dircall_arg1_1;
            CHECK_OBJECT( tmp_class_creation_1__bases_orig );
            tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
            Py_INCREF( tmp_dircall_arg1_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
                tmp_assign_source_8 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
            }
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            assert( tmp_class_creation_1__bases == NULL );
            tmp_class_creation_1__bases = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = PyDict_New();
            assert( tmp_class_creation_1__class_decl_dict == NULL );
            tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_metaclass_name_1;
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_key_name_1;
            PyObject *tmp_dict_name_1;
            PyObject *tmp_dict_name_2;
            PyObject *tmp_key_name_2;
            nuitka_bool tmp_condition_result_3;
            int tmp_truth_name_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_bases_name_1;
            tmp_key_name_1 = const_str_plain_metaclass;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
            tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_1;
            }
            else
            {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
            tmp_key_name_2 = const_str_plain_metaclass;
            tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
            if ( tmp_metaclass_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_2;
            }
            else
            {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_type_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
            Py_DECREF( tmp_type_arg_1 );
            if ( tmp_metaclass_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
            Py_INCREF( tmp_metaclass_name_1 );
            condexpr_end_2:;
            condexpr_end_1:;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_bases_name_1 = tmp_class_creation_1__bases;
            tmp_assign_source_10 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
            Py_DECREF( tmp_metaclass_name_1 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            assert( tmp_class_creation_1__metaclass == NULL );
            tmp_class_creation_1__metaclass = tmp_assign_source_10;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_key_name_3;
            PyObject *tmp_dict_name_3;
            tmp_key_name_3 = const_str_plain_metaclass;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
            tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
            tmp_dictdel_key = const_str_plain_metaclass;
            tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_res = PyObject_HasAttr( tmp_source_name_2, const_str_plain___prepare__ );
            tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_kw_name_1;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_source_name_3 = tmp_class_creation_1__metaclass;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 28;

                    goto try_except_handler_3;
                }
                tmp_tuple_element_2 = const_str_plain_NullHandler;
                tmp_args_name_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( tmp_class_creation_1__bases );
                tmp_tuple_element_2 = tmp_class_creation_1__bases;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
                CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
                tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
                frame_28fb8e21892d80dc213c6b09bf73bc07->m_frame.f_lineno = 28;
                tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 28;

                    goto try_except_handler_3;
                }
                assert( tmp_class_creation_1__prepared == NULL );
                tmp_class_creation_1__prepared = tmp_assign_source_11;
            }
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_source_name_4;
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_source_name_4 = tmp_class_creation_1__prepared;
                tmp_res = PyObject_HasAttr( tmp_source_name_4, const_str_plain___getitem__ );
                tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 28;

                    goto try_except_handler_3;
                }
                tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_4;
                }
                else
                {
                    goto branch_no_4;
                }
                branch_yes_4:;
                {
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_raise_value_1;
                    PyObject *tmp_left_name_1;
                    PyObject *tmp_right_name_1;
                    PyObject *tmp_tuple_element_3;
                    PyObject *tmp_getattr_target_1;
                    PyObject *tmp_getattr_attr_1;
                    PyObject *tmp_getattr_default_1;
                    PyObject *tmp_source_name_5;
                    PyObject *tmp_type_arg_2;
                    tmp_raise_type_1 = PyExc_TypeError;
                    tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                    CHECK_OBJECT( tmp_class_creation_1__metaclass );
                    tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                    tmp_getattr_attr_1 = const_str_plain___name__;
                    tmp_getattr_default_1 = const_str_angle_metaclass;
                    tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                    if ( tmp_tuple_element_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 28;

                        goto try_except_handler_3;
                    }
                    tmp_right_name_1 = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                    CHECK_OBJECT( tmp_class_creation_1__prepared );
                    tmp_type_arg_2 = tmp_class_creation_1__prepared;
                    tmp_source_name_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
                    assert( !(tmp_source_name_5 == NULL) );
                    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___name__ );
                    Py_DECREF( tmp_source_name_5 );
                    if ( tmp_tuple_element_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_right_name_1 );

                        exception_lineno = 28;

                        goto try_except_handler_3;
                    }
                    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                    tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                    Py_DECREF( tmp_right_name_1 );
                    if ( tmp_raise_value_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 28;

                        goto try_except_handler_3;
                    }
                    exception_type = tmp_raise_type_1;
                    Py_INCREF( tmp_raise_type_1 );
                    exception_value = tmp_raise_value_1;
                    exception_lineno = 28;
                    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                    goto try_except_handler_3;
                }
                branch_no_4:;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_12;
                tmp_assign_source_12 = PyDict_New();
                assert( tmp_class_creation_1__prepared == NULL );
                tmp_class_creation_1__prepared = tmp_assign_source_12;
            }
            branch_end_3:;
        }
        {
            PyObject *tmp_assign_source_13;
            {
                PyObject *tmp_set_locals_1;
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_set_locals_1 = tmp_class_creation_1__prepared;
                locals_websocket$_logging_28 = tmp_set_locals_1;
                Py_INCREF( tmp_set_locals_1 );
            }
            // Tried code:
            // Tried code:
            tmp_dictset_value = const_str_digest_9ef18eb316e1eb5e5e3954c398293166;
            tmp_res = PyObject_SetItem( locals_websocket$_logging_28, const_str_plain___module__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_5;
            }
            tmp_dictset_value = const_str_plain_NullHandler;
            tmp_res = PyObject_SetItem( locals_websocket$_logging_28, const_str_plain___qualname__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_5;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_d202e4e65dd01ca325d9729222c387eb_2, codeobj_d202e4e65dd01ca325d9729222c387eb, module_websocket$_logging, sizeof(void *) );
            frame_d202e4e65dd01ca325d9729222c387eb_2 = cache_frame_d202e4e65dd01ca325d9729222c387eb_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_d202e4e65dd01ca325d9729222c387eb_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_d202e4e65dd01ca325d9729222c387eb_2 ) == 2 ); // Frame stack

            // Framed code:
            tmp_dictset_value = MAKE_FUNCTION_websocket$_logging$$$function_1_emit(  );



            tmp_res = PyObject_SetItem( locals_websocket$_logging_28, const_str_plain_emit, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

#if 0
            RESTORE_FRAME_EXCEPTION( frame_d202e4e65dd01ca325d9729222c387eb_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_d202e4e65dd01ca325d9729222c387eb_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_d202e4e65dd01ca325d9729222c387eb_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_d202e4e65dd01ca325d9729222c387eb_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_d202e4e65dd01ca325d9729222c387eb_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_d202e4e65dd01ca325d9729222c387eb_2,
                type_description_2,
                outline_0_var___class__
            );


            // Release cached frame.
            if ( frame_d202e4e65dd01ca325d9729222c387eb_2 == cache_frame_d202e4e65dd01ca325d9729222c387eb_2 )
            {
                Py_DECREF( frame_d202e4e65dd01ca325d9729222c387eb_2 );
            }
            cache_frame_d202e4e65dd01ca325d9729222c387eb_2 = NULL;

            assertFrameObject( frame_d202e4e65dd01ca325d9729222c387eb_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;

            goto try_except_handler_5;
            skip_nested_handling_1:;
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                CHECK_OBJECT( tmp_class_creation_1__bases );
                tmp_compexpr_left_2 = tmp_class_creation_1__bases;
                CHECK_OBJECT( tmp_class_creation_1__bases_orig );
                tmp_compexpr_right_2 = tmp_class_creation_1__bases_orig;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 28;

                    goto try_except_handler_5;
                }
                tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_5;
                }
                else
                {
                    goto branch_no_5;
                }
                branch_yes_5:;
                CHECK_OBJECT( tmp_class_creation_1__bases_orig );
                tmp_dictset_value = tmp_class_creation_1__bases_orig;
                tmp_res = PyObject_SetItem( locals_websocket$_logging_28, const_str_plain___orig_bases__, tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 28;

                    goto try_except_handler_5;
                }
                branch_no_5:;
            }
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_called_name_2;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_kw_name_2;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_called_name_2 = tmp_class_creation_1__metaclass;
                tmp_tuple_element_4 = const_str_plain_NullHandler;
                tmp_args_name_2 = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( tmp_class_creation_1__bases );
                tmp_tuple_element_4 = tmp_class_creation_1__bases;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
                tmp_tuple_element_4 = locals_websocket$_logging_28;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
                CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
                tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
                frame_28fb8e21892d80dc213c6b09bf73bc07->m_frame.f_lineno = 28;
                tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_args_name_2 );
                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 28;

                    goto try_except_handler_5;
                }
                assert( outline_0_var___class__ == NULL );
                outline_0_var___class__ = tmp_assign_source_14;
            }
            CHECK_OBJECT( outline_0_var___class__ );
            tmp_assign_source_13 = outline_0_var___class__;
            Py_INCREF( tmp_assign_source_13 );
            goto try_return_handler_5;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( websocket$_logging );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_5:;
            Py_DECREF( locals_websocket$_logging_28 );
            locals_websocket$_logging_28 = NULL;
            goto try_return_handler_4;
            // Exception handler code:
            try_except_handler_5:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF( locals_websocket$_logging_28 );
            locals_websocket$_logging_28 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto try_except_handler_4;
            // End of try:
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( websocket$_logging );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_4:;
            CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
            Py_DECREF( outline_0_var___class__ );
            outline_0_var___class__ = NULL;

            goto outline_result_1;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_3 = exception_type;
            exception_keeper_value_3 = exception_value;
            exception_keeper_tb_3 = exception_tb;
            exception_keeper_lineno_3 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( websocket$_logging );
            return MOD_RETURN_VALUE( NULL );
            outline_exception_1:;
            exception_lineno = 28;
            goto try_except_handler_3;
            outline_result_1:;
            UPDATE_STRING_DICT1( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_NullHandler, tmp_assign_source_13 );
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_class_creation_1__bases_orig );
        tmp_class_creation_1__bases_orig = NULL;

        Py_XDECREF( tmp_class_creation_1__bases );
        tmp_class_creation_1__bases = NULL;

        Py_XDECREF( tmp_class_creation_1__class_decl_dict );
        tmp_class_creation_1__class_decl_dict = NULL;

        Py_XDECREF( tmp_class_creation_1__metaclass );
        tmp_class_creation_1__metaclass = NULL;

        Py_XDECREF( tmp_class_creation_1__prepared );
        tmp_class_creation_1__prepared = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases_orig );
        Py_DECREF( tmp_class_creation_1__bases_orig );
        tmp_class_creation_1__bases_orig = NULL;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
        Py_DECREF( tmp_class_creation_1__bases );
        tmp_class_creation_1__bases = NULL;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
        Py_DECREF( tmp_class_creation_1__class_decl_dict );
        tmp_class_creation_1__class_decl_dict = NULL;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
        Py_DECREF( tmp_class_creation_1__metaclass );
        tmp_class_creation_1__metaclass = NULL;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
        Py_DECREF( tmp_class_creation_1__prepared );
        tmp_class_creation_1__prepared = NULL;

        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 25;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_28fb8e21892d80dc213c6b09bf73bc07->m_frame) frame_28fb8e21892d80dc213c6b09bf73bc07->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_2;
        branch_end_1:;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_logging );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__logger );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__logger );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_logger" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_5;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_addHandler );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_NullHandler );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NullHandler );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NullHandler" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_6;
        frame_28fb8e21892d80dc213c6b09bf73bc07->m_frame.f_lineno = 32;
        tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        frame_28fb8e21892d80dc213c6b09bf73bc07->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_False;
        UPDATE_STRING_DICT0( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain__traceEnabled, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = LIST_COPY( const_list_1efac79b534b01a89d4c2c6b7cd55e29_list );
        UPDATE_STRING_DICT1( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_7;
        frame_28fb8e21892d80dc213c6b09bf73bc07->m_frame.f_lineno = 40;
        tmp_tuple_element_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_StreamHandler );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_5 );
        tmp_assign_source_17 = MAKE_FUNCTION_websocket$_logging$$$function_2_enableTrace( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_enableTrace, tmp_assign_source_17 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_28fb8e21892d80dc213c6b09bf73bc07 );
#endif
    popFrameStack();

    assertFrameObject( frame_28fb8e21892d80dc213c6b09bf73bc07 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_28fb8e21892d80dc213c6b09bf73bc07 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_28fb8e21892d80dc213c6b09bf73bc07, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_28fb8e21892d80dc213c6b09bf73bc07->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_28fb8e21892d80dc213c6b09bf73bc07, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_websocket$_logging$$$function_3_dump(  );



        UPDATE_STRING_DICT1( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_dump, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_websocket$_logging$$$function_4_error(  );



        UPDATE_STRING_DICT1( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_error, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_websocket$_logging$$$function_5_warning(  );



        UPDATE_STRING_DICT1( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_warning, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_websocket$_logging$$$function_6_debug(  );



        UPDATE_STRING_DICT1( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_debug, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_websocket$_logging$$$function_7_trace(  );



        UPDATE_STRING_DICT1( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_trace, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_websocket$_logging$$$function_8_isEnabledForError(  );



        UPDATE_STRING_DICT1( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_isEnabledForError, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_FUNCTION_websocket$_logging$$$function_9_isEnabledForDebug(  );



        UPDATE_STRING_DICT1( moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain_isEnabledForDebug, tmp_assign_source_24 );
    }

    return MOD_RETURN_VALUE( module_websocket$_logging );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
