/* Generated code for Python module 'iqoptionapi.ws.chanels.strike_list'
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

/* The "_module_iqoptionapi$ws$chanels$strike_list" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_iqoptionapi$ws$chanels$strike_list;
PyDictObject *moduledict_iqoptionapi$ws$chanels$strike_list;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_ffd2783aebf4a1c6a03efb2326c2f2e0;
extern PyObject *const_int_pos_60;
static PyObject *const_str_digest_e186ea1cdb34dfd429df7fc1906c4bf3;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_expiration;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_minute;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_api;
extern PyObject *const_str_plain_strftime;
extern PyObject *const_str_digest_6faf706aa81bd74e9873064504519d03;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_sendMessage;
extern PyObject *const_tuple_str_plain_Base_tuple;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_get_digital_expiration_time;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_fromtimestamp;
extern PyObject *const_str_digest_487eceb77cd20fdec569ead95b6cf5a5;
extern PyObject *const_str_digest_faaa09a6be847e1b0823f00f93cbaf08;
extern PyObject *const_tuple_str_digest_6faf706aa81bd74e9873064504519d03_tuple;
extern PyObject *const_tuple_str_digest_e8b2ef18b3a8d6cb16eef935f28e7bab_tuple;
extern PyObject *const_int_0;
static PyObject *const_str_digest_804e0cd733e5f0703de99a5dc7e25e33;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_exp;
extern PyObject *const_str_plain_Base;
extern PyObject *const_int_pos_1000;
extern PyObject *const_str_plain_send_websocket_request;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_9a5e96b670f14133c078ebd5673ad23e_tuple;
extern PyObject *const_str_plain_underlying;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_0d5388d92284aed50fb531891ac5f9c6;
extern PyObject *const_str_digest_ec008b11def3fee25602c86081895340;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_Strike_list;
extern PyObject *const_str_plain_version;
extern PyObject *const_tuple_1ae3dc39c3dd4b82919a8dbb87f9f336_tuple;
extern PyObject *const_str_plain_timesync;
extern PyObject *const_str_plain_second;
static PyObject *const_str_digest_a8abc57323d7ed980ed3aab528260bec;
extern PyObject *const_str_plain_ans;
extern PyObject *const_str_digest_1b628601e14ed99f31ac048b4d132a32;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_plain_body;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_period;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_duration;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_server_timestamp;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_digest_e8b2ef18b3a8d6cb16eef935f28e7bab;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_74efe1661c18dc6665b00a9722e0ce1d;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_ffd2783aebf4a1c6a03efb2326c2f2e0 = UNSTREAM_STRING_ASCII( &constant_bin[ 662796 ], 15, 0 );
    const_str_digest_e186ea1cdb34dfd429df7fc1906c4bf3 = UNSTREAM_STRING_ASCII( &constant_bin[ 662811 ], 43, 0 );
    const_str_digest_804e0cd733e5f0703de99a5dc7e25e33 = UNSTREAM_STRING_ASCII( &constant_bin[ 662854 ], 33, 0 );
    const_tuple_9a5e96b670f14133c078ebd5673ad23e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9a5e96b670f14133c078ebd5673ad23e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9a5e96b670f14133c078ebd5673ad23e_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_9a5e96b670f14133c078ebd5673ad23e_tuple, 2, const_str_plain_duration ); Py_INCREF( const_str_plain_duration );
    PyTuple_SET_ITEM( const_tuple_9a5e96b670f14133c078ebd5673ad23e_tuple, 3, const_str_plain_exp ); Py_INCREF( const_str_plain_exp );
    PyTuple_SET_ITEM( const_tuple_9a5e96b670f14133c078ebd5673ad23e_tuple, 4, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_digest_0d5388d92284aed50fb531891ac5f9c6 = UNSTREAM_STRING_ASCII( &constant_bin[ 662887 ], 20, 0 );
    const_str_digest_a8abc57323d7ed980ed3aab528260bec = UNSTREAM_STRING_ASCII( &constant_bin[ 662907 ], 39, 0 );
    const_str_digest_74efe1661c18dc6665b00a9722e0ce1d = UNSTREAM_STRING_ASCII( &constant_bin[ 662946 ], 65, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_iqoptionapi$ws$chanels$strike_list( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_10aef533d0a09d61703814f8e14534aa;
static PyCodeObject *codeobj_049f83c2e2a1daf9ca98d066b8173aed;
static PyCodeObject *codeobj_12285784d4eb1b447cab9d14521eef37;
static PyCodeObject *codeobj_092acfd9a50b84e9388b783a96553572;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_74efe1661c18dc6665b00a9722e0ce1d;
    codeobj_10aef533d0a09d61703814f8e14534aa = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e186ea1cdb34dfd429df7fc1906c4bf3, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_049f83c2e2a1daf9ca98d066b8173aed = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Strike_list, 4, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_12285784d4eb1b447cab9d14521eef37 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 7, const_tuple_9a5e96b670f14133c078ebd5673ad23e_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_092acfd9a50b84e9388b783a96553572 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_digital_expiration_time, 23, const_tuple_1ae3dc39c3dd4b82919a8dbb87f9f336_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_iqoptionapi$ws$chanels$strike_list$$$function_1___call__(  );


static PyObject *MAKE_FUNCTION_iqoptionapi$ws$chanels$strike_list$$$function_2_get_digital_expiration_time(  );


// The module function definitions.
static PyObject *impl_iqoptionapi$ws$chanels$strike_list$$$function_1___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_duration = python_pars[ 2 ];
    PyObject *var_exp = NULL;
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_12285784d4eb1b447cab9d14521eef37;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_12285784d4eb1b447cab9d14521eef37 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_12285784d4eb1b447cab9d14521eef37, codeobj_12285784d4eb1b447cab9d14521eef37, module_iqoptionapi$ws$chanels$strike_list, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_12285784d4eb1b447cab9d14521eef37 = cache_frame_12285784d4eb1b447cab9d14521eef37;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_12285784d4eb1b447cab9d14521eef37 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_12285784d4eb1b447cab9d14521eef37 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_duration );
        tmp_args_element_name_1 = par_duration;
        frame_12285784d4eb1b447cab9d14521eef37->m_frame.f_lineno = 11;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_digital_expiration_time, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_exp == NULL );
        var_exp = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_dict_key_1 = const_str_plain_name;
        tmp_dict_value_1 = const_str_digest_ffd2783aebf4a1c6a03efb2326c2f2e0;
        tmp_assign_source_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_body;
        tmp_dict_key_3 = const_str_plain_type;
        tmp_dict_value_3 = const_str_digest_faaa09a6be847e1b0823f00f93cbaf08;
        tmp_dict_value_2 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_underlying;
        CHECK_OBJECT( par_name );
        tmp_dict_value_4 = par_name;
        tmp_res = PyDict_SetItem( tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_expiration;
        CHECK_OBJECT( var_exp );
        tmp_int_arg_1 = var_exp;
        tmp_left_name_1 = PyNumber_Int( tmp_int_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );
            Py_DECREF( tmp_dict_value_2 );

            exception_lineno = 16;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1000;
        tmp_dict_value_5 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );
            Py_DECREF( tmp_dict_value_2 );

            exception_lineno = 16;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_dict_value_2, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_period;
        CHECK_OBJECT( par_duration );
        tmp_left_name_2 = par_duration;
        tmp_right_name_2 = const_int_pos_60;
        tmp_dict_value_6 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );
            Py_DECREF( tmp_dict_value_2 );

            exception_lineno = 17;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_dict_value_2, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_version;
        tmp_dict_value_7 = const_str_digest_ec008b11def3fee25602c86081895340;
        tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        assert( var_data == NULL );
        var_data = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_send_websocket_request );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_data );
        tmp_args_element_name_3 = var_data;
        frame_12285784d4eb1b447cab9d14521eef37->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12285784d4eb1b447cab9d14521eef37 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12285784d4eb1b447cab9d14521eef37 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_12285784d4eb1b447cab9d14521eef37, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_12285784d4eb1b447cab9d14521eef37->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_12285784d4eb1b447cab9d14521eef37, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_12285784d4eb1b447cab9d14521eef37,
        type_description_1,
        par_self,
        par_name,
        par_duration,
        var_exp,
        var_data
    );


    // Release cached frame.
    if ( frame_12285784d4eb1b447cab9d14521eef37 == cache_frame_12285784d4eb1b447cab9d14521eef37 )
    {
        Py_DECREF( frame_12285784d4eb1b447cab9d14521eef37 );
    }
    cache_frame_12285784d4eb1b447cab9d14521eef37 = NULL;

    assertFrameObject( frame_12285784d4eb1b447cab9d14521eef37 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$strike_list$$$function_1___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_duration );
    Py_DECREF( par_duration );
    par_duration = NULL;

    CHECK_OBJECT( (PyObject *)var_exp );
    Py_DECREF( var_exp );
    var_exp = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_duration );
    Py_DECREF( par_duration );
    par_duration = NULL;

    Py_XDECREF( var_exp );
    var_exp = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$strike_list$$$function_1___call__ );
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


static PyObject *impl_iqoptionapi$ws$chanels$strike_list$$$function_2_get_digital_expiration_time( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_duration = python_pars[ 1 ];
    PyObject *var_exp = NULL;
    PyObject *var_value = NULL;
    PyObject *var_minute = NULL;
    PyObject *var_second = NULL;
    PyObject *var_ans = NULL;
    struct Nuitka_FrameObject *frame_092acfd9a50b84e9388b783a96553572;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_092acfd9a50b84e9388b783a96553572 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_092acfd9a50b84e9388b783a96553572, codeobj_092acfd9a50b84e9388b783a96553572, module_iqoptionapi$ws$chanels$strike_list, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_092acfd9a50b84e9388b783a96553572 = cache_frame_092acfd9a50b84e9388b783a96553572;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_092acfd9a50b84e9388b783a96553572 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_092acfd9a50b84e9388b783a96553572 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_api );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_timesync );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_int_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_server_timestamp );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_exp == NULL );
        var_exp = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain_datetime );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_datetime );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_exp );
        tmp_args_element_name_1 = var_exp;
        frame_092acfd9a50b84e9388b783a96553572->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fromtimestamp, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_value == NULL );
        var_value = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_value );
        tmp_called_instance_2 = var_value;
        frame_092acfd9a50b84e9388b783a96553572->m_frame.f_lineno = 26;
        tmp_int_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_strftime, &PyTuple_GET_ITEM( const_tuple_str_digest_6faf706aa81bd74e9873064504519d03_tuple, 0 ) );

        if ( tmp_int_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyNumber_Int( tmp_int_arg_2 );
        Py_DECREF( tmp_int_arg_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_minute == NULL );
        var_minute = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_value );
        tmp_called_instance_3 = var_value;
        frame_092acfd9a50b84e9388b783a96553572->m_frame.f_lineno = 27;
        tmp_int_arg_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_strftime, &PyTuple_GET_ITEM( const_tuple_str_digest_e8b2ef18b3a8d6cb16eef935f28e7bab_tuple, 0 ) );

        if ( tmp_int_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = PyNumber_Int( tmp_int_arg_3 );
        Py_DECREF( tmp_int_arg_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_second == NULL );
        var_second = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_exp );
        tmp_left_name_1 = var_exp;
        CHECK_OBJECT( var_exp );
        tmp_left_name_2 = var_exp;
        tmp_right_name_2 = const_int_pos_60;
        tmp_right_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ans == NULL );
        var_ans = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_ans );
        tmp_left_name_3 = var_ans;
        CHECK_OBJECT( par_duration );
        tmp_left_name_5 = par_duration;
        CHECK_OBJECT( var_minute );
        tmp_left_name_6 = var_minute;
        CHECK_OBJECT( par_duration );
        tmp_right_name_5 = par_duration;
        tmp_right_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = const_int_pos_60;
        tmp_right_name_3 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_4, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ans;
            assert( old != NULL );
            var_ans = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_exp );
        tmp_compexpr_left_1 = var_exp;
        CHECK_OBJECT( var_ans );
        tmp_left_name_7 = var_ans;
        tmp_right_name_7 = const_int_pos_10;
        tmp_compexpr_right_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            CHECK_OBJECT( var_ans );
            tmp_left_name_8 = var_ans;
            CHECK_OBJECT( par_duration );
            tmp_left_name_9 = par_duration;
            tmp_right_name_9 = const_int_pos_60;
            tmp_right_name_8 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
            if ( tmp_right_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 31;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_right_name_8 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 31;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_ans;
                assert( old != NULL );
                var_ans = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_092acfd9a50b84e9388b783a96553572 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_092acfd9a50b84e9388b783a96553572 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_092acfd9a50b84e9388b783a96553572, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_092acfd9a50b84e9388b783a96553572->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_092acfd9a50b84e9388b783a96553572, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_092acfd9a50b84e9388b783a96553572,
        type_description_1,
        par_self,
        par_duration,
        var_exp,
        var_value,
        var_minute,
        var_second,
        var_ans
    );


    // Release cached frame.
    if ( frame_092acfd9a50b84e9388b783a96553572 == cache_frame_092acfd9a50b84e9388b783a96553572 )
    {
        Py_DECREF( frame_092acfd9a50b84e9388b783a96553572 );
    }
    cache_frame_092acfd9a50b84e9388b783a96553572 = NULL;

    assertFrameObject( frame_092acfd9a50b84e9388b783a96553572 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_ans );
    tmp_return_value = var_ans;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$strike_list$$$function_2_get_digital_expiration_time );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_duration );
    Py_DECREF( par_duration );
    par_duration = NULL;

    CHECK_OBJECT( (PyObject *)var_exp );
    Py_DECREF( var_exp );
    var_exp = NULL;

    CHECK_OBJECT( (PyObject *)var_value );
    Py_DECREF( var_value );
    var_value = NULL;

    CHECK_OBJECT( (PyObject *)var_minute );
    Py_DECREF( var_minute );
    var_minute = NULL;

    CHECK_OBJECT( (PyObject *)var_second );
    Py_DECREF( var_second );
    var_second = NULL;

    CHECK_OBJECT( (PyObject *)var_ans );
    Py_DECREF( var_ans );
    var_ans = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_duration );
    Py_DECREF( par_duration );
    par_duration = NULL;

    Py_XDECREF( var_exp );
    var_exp = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_minute );
    var_minute = NULL;

    Py_XDECREF( var_second );
    var_second = NULL;

    Py_XDECREF( var_ans );
    var_ans = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$strike_list$$$function_2_get_digital_expiration_time );
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



static PyObject *MAKE_FUNCTION_iqoptionapi$ws$chanels$strike_list$$$function_1___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_iqoptionapi$ws$chanels$strike_list$$$function_1___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_0d5388d92284aed50fb531891ac5f9c6,
#endif
        codeobj_12285784d4eb1b447cab9d14521eef37,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_iqoptionapi$ws$chanels$strike_list,
        const_str_digest_804e0cd733e5f0703de99a5dc7e25e33,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_iqoptionapi$ws$chanels$strike_list$$$function_2_get_digital_expiration_time(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_iqoptionapi$ws$chanels$strike_list$$$function_2_get_digital_expiration_time,
        const_str_plain_get_digital_expiration_time,
#if PYTHON_VERSION >= 300
        const_str_digest_a8abc57323d7ed980ed3aab528260bec,
#endif
        codeobj_092acfd9a50b84e9388b783a96553572,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_iqoptionapi$ws$chanels$strike_list,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_iqoptionapi$ws$chanels$strike_list =
{
    PyModuleDef_HEAD_INIT,
    "iqoptionapi.ws.chanels.strike_list",
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
MOD_ENTRY_DECL(iqoptionapi$ws$chanels$strike_list)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(iqoptionapi$ws$chanels$strike_list)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_iqoptionapi$ws$chanels$strike_list );
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
    puts("iqoptionapi.ws.chanels.strike_list: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("iqoptionapi.ws.chanels.strike_list: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("iqoptionapi.ws.chanels.strike_list: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initiqoptionapi$ws$chanels$strike_list" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_iqoptionapi$ws$chanels$strike_list = Py_InitModule4(
        "iqoptionapi.ws.chanels.strike_list",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_iqoptionapi$ws$chanels$strike_list = PyModule_Create( &mdef_iqoptionapi$ws$chanels$strike_list );
#endif

    moduledict_iqoptionapi$ws$chanels$strike_list = MODULE_DICT( module_iqoptionapi$ws$chanels$strike_list );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_iqoptionapi$ws$chanels$strike_list,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_iqoptionapi$ws$chanels$strike_list,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_iqoptionapi$ws$chanels$strike_list,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_iqoptionapi$ws$chanels$strike_list,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_iqoptionapi$ws$chanels$strike_list );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_1b628601e14ed99f31ac048b4d132a32, module_iqoptionapi$ws$chanels$strike_list );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    struct Nuitka_FrameObject *frame_10aef533d0a09d61703814f8e14534aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_iqoptionapi$ws$chanels$strike_list_4 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_049f83c2e2a1daf9ca98d066b8173aed_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_049f83c2e2a1daf9ca98d066b8173aed_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_74efe1661c18dc6665b00a9722e0ce1d;
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_10aef533d0a09d61703814f8e14534aa = MAKE_MODULE_FRAME( codeobj_10aef533d0a09d61703814f8e14534aa, module_iqoptionapi$ws$chanels$strike_list );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_10aef533d0a09d61703814f8e14534aa );
    assert( Py_REFCNT( frame_10aef533d0a09d61703814f8e14534aa ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_74efe1661c18dc6665b00a9722e0ce1d;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_datetime;
        tmp_globals_name_1 = (PyObject *)moduledict_iqoptionapi$ws$chanels$strike_list;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_10aef533d0a09d61703814f8e14534aa->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_487eceb77cd20fdec569ead95b6cf5a5;
        tmp_globals_name_2 = (PyObject *)moduledict_iqoptionapi$ws$chanels$strike_list;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_Base_tuple;
        tmp_level_name_2 = const_int_0;
        frame_10aef533d0a09d61703814f8e14534aa->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Base );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain_Base, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_logging;
        tmp_globals_name_3 = (PyObject *)moduledict_iqoptionapi$ws$chanels$strike_list;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_10aef533d0a09d61703814f8e14534aa->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain_Base );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Base );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_7 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_7, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases_orig == NULL );
        tmp_class_creation_1__bases_orig = tmp_assign_source_7;
    }
    // Tried code:
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


            exception_lineno = 4;

            goto try_except_handler_1;
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_1;
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_3;
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_1 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_1, const_str_plain___prepare__ );
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
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 4;

                goto try_except_handler_1;
            }
            tmp_tuple_element_2 = const_str_plain_Strike_list;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_10aef533d0a09d61703814f8e14534aa->m_frame.f_lineno = 4;
            tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 4;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_11;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_3 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_3, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 4;

                goto try_except_handler_1;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
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


                    exception_lineno = 4;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 4;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 4;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 4;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_12;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_iqoptionapi$ws$chanels$strike_list_4 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_1b628601e14ed99f31ac048b4d132a32;
        tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$strike_list_4, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_Strike_list;
        tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$strike_list_4, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_049f83c2e2a1daf9ca98d066b8173aed_2, codeobj_049f83c2e2a1daf9ca98d066b8173aed, module_iqoptionapi$ws$chanels$strike_list, sizeof(void *) );
        frame_049f83c2e2a1daf9ca98d066b8173aed_2 = cache_frame_049f83c2e2a1daf9ca98d066b8173aed_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_049f83c2e2a1daf9ca98d066b8173aed_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_049f83c2e2a1daf9ca98d066b8173aed_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_plain_sendMessage;
        tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$strike_list_4, const_str_plain_name, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_iqoptionapi$ws$chanels$strike_list$$$function_1___call__(  );



        tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$strike_list_4, const_str_plain___call__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_iqoptionapi$ws$chanels$strike_list$$$function_2_get_digital_expiration_time(  );



        tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$strike_list_4, const_str_plain_get_digital_expiration_time, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_049f83c2e2a1daf9ca98d066b8173aed_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_049f83c2e2a1daf9ca98d066b8173aed_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_049f83c2e2a1daf9ca98d066b8173aed_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_049f83c2e2a1daf9ca98d066b8173aed_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_049f83c2e2a1daf9ca98d066b8173aed_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_049f83c2e2a1daf9ca98d066b8173aed_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_049f83c2e2a1daf9ca98d066b8173aed_2 == cache_frame_049f83c2e2a1daf9ca98d066b8173aed_2 )
        {
            Py_DECREF( frame_049f83c2e2a1daf9ca98d066b8173aed_2 );
        }
        cache_frame_049f83c2e2a1daf9ca98d066b8173aed_2 = NULL;

        assertFrameObject( frame_049f83c2e2a1daf9ca98d066b8173aed_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT( tmp_class_creation_1__bases_orig );
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 4;

                goto try_except_handler_3;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            CHECK_OBJECT( tmp_class_creation_1__bases_orig );
            tmp_dictset_value = tmp_class_creation_1__bases_orig;
            tmp_res = PyObject_SetItem( locals_iqoptionapi$ws$chanels$strike_list_4, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 4;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_Strike_list;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_iqoptionapi$ws$chanels$strike_list_4;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_10aef533d0a09d61703814f8e14534aa->m_frame.f_lineno = 4;
            tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 4;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_13 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_13 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$strike_list );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_iqoptionapi$ws$chanels$strike_list_4 );
        locals_iqoptionapi$ws$chanels$strike_list_4 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_iqoptionapi$ws$chanels$strike_list_4 );
        locals_iqoptionapi$ws$chanels$strike_list_4 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$strike_list );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( iqoptionapi$ws$chanels$strike_list );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 4;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$ws$chanels$strike_list, (Nuitka_StringObject *)const_str_plain_Strike_list, tmp_assign_source_13 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases_orig );
    Py_DECREF( tmp_class_creation_1__bases_orig );
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_10aef533d0a09d61703814f8e14534aa );
#endif
    popFrameStack();

    assertFrameObject( frame_10aef533d0a09d61703814f8e14534aa );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_10aef533d0a09d61703814f8e14534aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10aef533d0a09d61703814f8e14534aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10aef533d0a09d61703814f8e14534aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10aef533d0a09d61703814f8e14534aa, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
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


    return MOD_RETURN_VALUE( module_iqoptionapi$ws$chanels$strike_list );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
