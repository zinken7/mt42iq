/* Generated code for Python module 'iqoptionapi.expiration'
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

/* The "_module_iqoptionapi$expiration" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_iqoptionapi$expiration;
PyDictObject *moduledict_iqoptionapi$expiration;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_time;
static PyObject *const_str_plain_date_to_timestamp;
extern PyObject *const_int_pos_60;
extern PyObject *const_str_plain_get_remaning_time;
extern PyObject *const_str_plain_idx;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_timetuple;
extern PyObject *const_str_plain_strftime;
extern PyObject *const_int_pos_300;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_digest_6faf706aa81bd74e9873064504519d03;
static PyObject *const_tuple_str_plain_x_str_plain_duration_tuple;
extern PyObject *const_str_plain_remaning;
static PyObject *const_xrange_0_5;
extern PyObject *const_str_plain_timedelta;
static PyObject *const_dict_c3721c40643bb24366f18ef30b94c96b;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_62b97a19790557b033052386e87459ef;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_fromtimestamp;
extern PyObject *const_str_plain_min;
extern PyObject *const_tuple_str_digest_6faf706aa81bd74e9873064504519d03_tuple;
extern PyObject *const_int_pos_11;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_microsecond;
extern PyObject *const_str_plain_mktime;
extern PyObject *const_int_pos_15;
static PyObject *const_str_plain_exp_date;
extern PyObject *const_str_plain_exp;
static PyObject *const_tuple_b560ca48c2b2f8efa98a39e7636dd8cb_tuple;
extern PyObject *const_str_plain_timestamp;
static PyObject *const_tuple_78cce1b93f6a131c4c4886b3cbde7c7f_tuple;
extern PyObject *const_str_digest_681127b0040c32c62f05144eaaa6930f;
static PyObject *const_str_plain_dr;
extern PyObject *const_str_plain_origin;
static PyObject *const_dict_b92f689eefe75e03f16db58a0a420f6f;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_second;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_append;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_int_pos_50;
extern PyObject *const_dict_d3e305893e6430856cec586a957bee97;
extern PyObject *const_tuple_str_plain_datetime_str_plain_timedelta_tuple;
static PyObject *const_str_digest_d3b3eed4cbbd0a3e5b8e2f3263fcc9a2;
extern PyObject *const_str_plain_duration;
extern PyObject *const_str_plain_dt;
extern PyObject *const_str_plain_minutes;
extern PyObject *const_tuple_str_plain_dt_tuple;
extern PyObject *const_int_pos_30;
extern PyObject *const_str_plain_get_expiration_time;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_now_date;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_date_to_timestamp = UNSTREAM_STRING_ASCII( &constant_bin[ 646564 ], 17, 1 );
    const_tuple_str_plain_x_str_plain_duration_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_duration_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_duration_tuple, 1, const_str_plain_duration ); Py_INCREF( const_str_plain_duration );
    const_xrange_0_5 = BUILTIN_XRANGE3( const_int_0, const_int_pos_5, const_int_pos_1 );
    const_dict_c3721c40643bb24366f18ef30b94c96b = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_c3721c40643bb24366f18ef30b94c96b, const_str_plain_second, const_int_0 );
    PyDict_SetItem( const_dict_c3721c40643bb24366f18ef30b94c96b, const_str_plain_microsecond, const_int_0 );
    assert( PyDict_Size( const_dict_c3721c40643bb24366f18ef30b94c96b ) == 2 );
    const_str_digest_62b97a19790557b033052386e87459ef = UNSTREAM_STRING_ASCII( &constant_bin[ 646581 ], 31, 0 );
    const_str_plain_exp_date = UNSTREAM_STRING_ASCII( &constant_bin[ 646612 ], 8, 1 );
    const_tuple_b560ca48c2b2f8efa98a39e7636dd8cb_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_b560ca48c2b2f8efa98a39e7636dd8cb_tuple, 0, const_str_plain_timestamp ); Py_INCREF( const_str_plain_timestamp );
    PyTuple_SET_ITEM( const_tuple_b560ca48c2b2f8efa98a39e7636dd8cb_tuple, 1, const_str_plain_now_date ); Py_INCREF( const_str_plain_now_date );
    PyTuple_SET_ITEM( const_tuple_b560ca48c2b2f8efa98a39e7636dd8cb_tuple, 2, const_str_plain_exp_date ); Py_INCREF( const_str_plain_exp_date );
    PyTuple_SET_ITEM( const_tuple_b560ca48c2b2f8efa98a39e7636dd8cb_tuple, 3, const_str_plain_exp ); Py_INCREF( const_str_plain_exp );
    PyTuple_SET_ITEM( const_tuple_b560ca48c2b2f8efa98a39e7636dd8cb_tuple, 4, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_b560ca48c2b2f8efa98a39e7636dd8cb_tuple, 5, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    PyTuple_SET_ITEM( const_tuple_b560ca48c2b2f8efa98a39e7636dd8cb_tuple, 6, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    PyTuple_SET_ITEM( const_tuple_b560ca48c2b2f8efa98a39e7636dd8cb_tuple, 7, const_str_plain_remaning ); Py_INCREF( const_str_plain_remaning );
    PyTuple_SET_ITEM( const_tuple_b560ca48c2b2f8efa98a39e7636dd8cb_tuple, 8, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_plain_dr = UNSTREAM_STRING_ASCII( &constant_bin[ 102 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_b560ca48c2b2f8efa98a39e7636dd8cb_tuple, 9, const_str_plain_dr ); Py_INCREF( const_str_plain_dr );
    const_tuple_78cce1b93f6a131c4c4886b3cbde7c7f_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_78cce1b93f6a131c4c4886b3cbde7c7f_tuple, 0, const_str_plain_timestamp ); Py_INCREF( const_str_plain_timestamp );
    PyTuple_SET_ITEM( const_tuple_78cce1b93f6a131c4c4886b3cbde7c7f_tuple, 1, const_str_plain_duration ); Py_INCREF( const_str_plain_duration );
    PyTuple_SET_ITEM( const_tuple_78cce1b93f6a131c4c4886b3cbde7c7f_tuple, 2, const_str_plain_now_date ); Py_INCREF( const_str_plain_now_date );
    PyTuple_SET_ITEM( const_tuple_78cce1b93f6a131c4c4886b3cbde7c7f_tuple, 3, const_str_plain_exp_date ); Py_INCREF( const_str_plain_exp_date );
    PyTuple_SET_ITEM( const_tuple_78cce1b93f6a131c4c4886b3cbde7c7f_tuple, 4, const_str_plain_exp ); Py_INCREF( const_str_plain_exp );
    PyTuple_SET_ITEM( const_tuple_78cce1b93f6a131c4c4886b3cbde7c7f_tuple, 5, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_78cce1b93f6a131c4c4886b3cbde7c7f_tuple, 6, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    PyTuple_SET_ITEM( const_tuple_78cce1b93f6a131c4c4886b3cbde7c7f_tuple, 7, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    PyTuple_SET_ITEM( const_tuple_78cce1b93f6a131c4c4886b3cbde7c7f_tuple, 8, const_str_plain_remaning ); Py_INCREF( const_str_plain_remaning );
    PyTuple_SET_ITEM( const_tuple_78cce1b93f6a131c4c4886b3cbde7c7f_tuple, 9, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_78cce1b93f6a131c4c4886b3cbde7c7f_tuple, 10, const_str_plain_close ); Py_INCREF( const_str_plain_close );
    const_dict_b92f689eefe75e03f16db58a0a420f6f = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_b92f689eefe75e03f16db58a0a420f6f, const_str_plain_minutes, const_int_pos_2 );
    assert( PyDict_Size( const_dict_b92f689eefe75e03f16db58a0a420f6f ) == 1 );
    const_str_digest_d3b3eed4cbbd0a3e5b8e2f3263fcc9a2 = UNSTREAM_STRING_ASCII( &constant_bin[ 646620 ], 53, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_iqoptionapi$expiration( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6523be6de965c8d1e97fce9c5f1c9e76;
static PyCodeObject *codeobj_90fe3fd19127d5262084d06ab1bed030;
static PyCodeObject *codeobj_0a993cf8f56030ac49b8287c57a2f9b4;
static PyCodeObject *codeobj_08b6f75838960167ba2e7e9544896717;
static PyCodeObject *codeobj_7bff93e357d9768bb995eeb8a443a993;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_d3b3eed4cbbd0a3e5b8e2f3263fcc9a2;
    codeobj_6523be6de965c8d1e97fce9c5f1c9e76 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 44, const_tuple_str_plain_x_str_plain_duration_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_90fe3fd19127d5262084d06ab1bed030 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_62b97a19790557b033052386e87459ef, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_0a993cf8f56030ac49b8287c57a2f9b4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_date_to_timestamp, 10, const_tuple_str_plain_dt_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_08b6f75838960167ba2e7e9544896717 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_expiration_time, 15, const_tuple_78cce1b93f6a131c4c4886b3cbde7c7f_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7bff93e357d9768bb995eeb8a443a993 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_remaning_time, 49, const_tuple_b560ca48c2b2f8efa98a39e7636dd8cb_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_iqoptionapi$expiration$$$function_1_date_to_timestamp(  );


static PyObject *MAKE_FUNCTION_iqoptionapi$expiration$$$function_2_get_expiration_time(  );


static PyObject *MAKE_FUNCTION_iqoptionapi$expiration$$$function_3_get_remaning_time(  );


// The module function definitions.
static PyObject *impl_iqoptionapi$expiration$$$function_1_date_to_timestamp( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dt = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_0a993cf8f56030ac49b8287c57a2f9b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0a993cf8f56030ac49b8287c57a2f9b4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0a993cf8f56030ac49b8287c57a2f9b4, codeobj_0a993cf8f56030ac49b8287c57a2f9b4, module_iqoptionapi$expiration, sizeof(void *) );
    frame_0a993cf8f56030ac49b8287c57a2f9b4 = cache_frame_0a993cf8f56030ac49b8287c57a2f9b4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0a993cf8f56030ac49b8287c57a2f9b4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0a993cf8f56030ac49b8287c57a2f9b4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mktime );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_dt );
        tmp_called_instance_1 = par_dt;
        frame_0a993cf8f56030ac49b8287c57a2f9b4->m_frame.f_lineno = 12;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_timetuple );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0a993cf8f56030ac49b8287c57a2f9b4->m_frame.f_lineno = 12;
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


            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a993cf8f56030ac49b8287c57a2f9b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a993cf8f56030ac49b8287c57a2f9b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a993cf8f56030ac49b8287c57a2f9b4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0a993cf8f56030ac49b8287c57a2f9b4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0a993cf8f56030ac49b8287c57a2f9b4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0a993cf8f56030ac49b8287c57a2f9b4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0a993cf8f56030ac49b8287c57a2f9b4,
        type_description_1,
        par_dt
    );


    // Release cached frame.
    if ( frame_0a993cf8f56030ac49b8287c57a2f9b4 == cache_frame_0a993cf8f56030ac49b8287c57a2f9b4 )
    {
        Py_DECREF( frame_0a993cf8f56030ac49b8287c57a2f9b4 );
    }
    cache_frame_0a993cf8f56030ac49b8287c57a2f9b4 = NULL;

    assertFrameObject( frame_0a993cf8f56030ac49b8287c57a2f9b4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( iqoptionapi$expiration$$$function_1_date_to_timestamp );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dt );
    Py_DECREF( par_dt );
    par_dt = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dt );
    Py_DECREF( par_dt );
    par_dt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( iqoptionapi$expiration$$$function_1_date_to_timestamp );
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


static PyObject *impl_iqoptionapi$expiration$$$function_2_get_expiration_time( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_timestamp = python_pars[ 0 ];
    PyObject *par_duration = python_pars[ 1 ];
    PyObject *var_now_date = NULL;
    PyObject *var_exp_date = NULL;
    PyObject *var_exp = NULL;
    PyObject *var__ = NULL;
    PyObject *var_index = NULL;
    PyObject *var_remaning = NULL;
    PyObject *var_t = NULL;
    PyObject *var_close = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_08b6f75838960167ba2e7e9544896717;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_6523be6de965c8d1e97fce9c5f1c9e76_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_6523be6de965c8d1e97fce9c5f1c9e76_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_08b6f75838960167ba2e7e9544896717 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_08b6f75838960167ba2e7e9544896717, codeobj_08b6f75838960167ba2e7e9544896717, module_iqoptionapi$expiration, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_08b6f75838960167ba2e7e9544896717 = cache_frame_08b6f75838960167ba2e7e9544896717;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_08b6f75838960167ba2e7e9544896717 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_08b6f75838960167ba2e7e9544896717 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_datetime );

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

            exception_lineno = 17;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_timestamp );
        tmp_args_element_name_1 = par_timestamp;
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fromtimestamp, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        assert( var_now_date == NULL );
        var_now_date = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( var_now_date );
        tmp_source_name_1 = var_now_date;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_replace );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_c3721c40643bb24366f18ef30b94c96b );
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 18;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        assert( var_exp_date == NULL );
        var_exp_date = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "date_to_timestamp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 19;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_exp_date );
        tmp_left_name_2 = var_exp_date;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_timedelta );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 19;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_kw_name_2 = PyDict_Copy( const_dict_d3e305893e6430856cec586a957bee97 );
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 19;
        tmp_right_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_timestamp );
        tmp_right_name_2 = par_timestamp;
        tmp_compexpr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_30;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "ooooooNoooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( var_exp_date );
            tmp_left_name_3 = var_exp_date;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_timedelta );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 20;
                type_description_1 = "ooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            tmp_kw_name_3 = PyDict_Copy( const_dict_d3e305893e6430856cec586a957bee97 );
            frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 20;
            tmp_right_name_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;
                type_description_1 = "ooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;
                type_description_1 = "ooooooNoooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_exp_date;
                assert( old != NULL );
                var_exp_date = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( var_exp_date );
            tmp_left_name_4 = var_exp_date;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_timedelta );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 23;
                type_description_1 = "ooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            tmp_kw_name_4 = PyDict_Copy( const_dict_b92f689eefe75e03f16db58a0a420f6f );
            frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 23;
            tmp_right_name_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_4 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "ooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "ooooooNoooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_exp_date;
                assert( old != NULL );
                var_exp_date = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyList_New( 0 );
        assert( var_exp == NULL );
        var_exp = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = const_xrange_0_5;
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
        assert( !(tmp_assign_source_6 == NULL) );
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
                type_description_1 = "ooooooNoooo";
                exception_lineno = 25;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_8 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_8;
            Py_INCREF( var__ );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_exp );
        tmp_source_name_2 = var_exp;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooNoooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "date_to_timestamp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 26;
            type_description_1 = "ooooooNoooo";
            goto try_except_handler_2;
        }

        tmp_called_name_7 = tmp_mvar_value_6;
        CHECK_OBJECT( var_exp_date );
        tmp_args_element_name_4 = var_exp_date;
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 26;
            type_description_1 = "ooooooNoooo";
            goto try_except_handler_2;
        }
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooNoooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_kw_name_5;
        CHECK_OBJECT( var_exp_date );
        tmp_left_name_5 = var_exp_date;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_timedelta );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;
            type_description_1 = "ooooooNoooo";
            goto try_except_handler_2;
        }

        tmp_called_name_8 = tmp_mvar_value_7;
        tmp_kw_name_5 = PyDict_Copy( const_dict_d3e305893e6430856cec586a957bee97 );
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 27;
        tmp_right_name_5 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_8, tmp_kw_name_5 );
        Py_DECREF( tmp_kw_name_5 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooNoooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooNoooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_date;
            assert( old != NULL );
            var_exp_date = tmp_assign_source_9;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooooooNoooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_int_0;
        assert( var_index == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_index = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_datetime );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 31;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_8;
        CHECK_OBJECT( par_timestamp );
        tmp_args_element_name_5 = par_timestamp;
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_fromtimestamp, call_args );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_now_date;
            assert( old != NULL );
            var_now_date = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_3;
        PyObject *tmp_kw_name_6;
        CHECK_OBJECT( var_now_date );
        tmp_source_name_3 = var_now_date;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_replace );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_6 = PyDict_Copy( const_dict_c3721c40643bb24366f18ef30b94c96b );
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 32;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_9, tmp_kw_name_6 );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_kw_name_6 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_exp_date;
            assert( old != NULL );
            var_exp_date = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    loop_start_2:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        if ( var_index == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "index" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = var_index;
        tmp_compexpr_right_2 = const_int_pos_50;
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
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
        goto loop_end_2;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_left_name_6;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_right_name_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_left_name_7;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_int_arg_4;
        CHECK_OBJECT( var_exp_date );
        tmp_called_instance_3 = var_exp_date;
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 34;
        tmp_int_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_strftime, &PyTuple_GET_ITEM( const_tuple_str_digest_6faf706aa81bd74e9873064504519d03_tuple, 0 ) );

        if ( tmp_int_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = PyNumber_Int( tmp_int_arg_2 );
        Py_DECREF( tmp_int_arg_2 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = const_int_pos_15;
        tmp_compexpr_left_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "date_to_timestamp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 34;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_9;
        CHECK_OBJECT( var_exp_date );
        tmp_args_element_name_6 = var_exp_date;
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_int_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        if ( tmp_int_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = PyNumber_Int( tmp_int_arg_3 );
        Py_DECREF( tmp_int_arg_3 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_timestamp );
        tmp_int_arg_4 = par_timestamp;
        tmp_right_name_7 = PyNumber_Int( tmp_int_arg_4 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 34;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_int_pos_300;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_12;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_8;
            CHECK_OBJECT( var_exp );
            tmp_source_name_4 = var_exp;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_1 = "ooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );
            }

            if ( tmp_mvar_value_10 == NULL )
            {
                Py_DECREF( tmp_called_name_11 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "date_to_timestamp" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 35;
                type_description_1 = "ooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_12 = tmp_mvar_value_10;
            CHECK_OBJECT( var_exp_date );
            tmp_args_element_name_8 = var_exp_date;
            frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 35;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
            }

            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_11 );

                exception_lineno = 35;
                type_description_1 = "ooooooNoooo";
                goto frame_exception_exit_1;
            }
            frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 35;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_1 = "ooooooNoooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            if ( var_index == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "index" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 36;
                type_description_1 = "ooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_8 = var_index;
            tmp_right_name_8 = const_int_pos_1;
            tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                type_description_1 = "ooooooNoooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_index;
                var_index = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_kw_name_7;
        CHECK_OBJECT( var_exp_date );
        tmp_left_name_9 = var_exp_date;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_timedelta );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 37;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_11;
        tmp_kw_name_7 = PyDict_Copy( const_dict_d3e305893e6430856cec586a957bee97 );
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 37;
        tmp_right_name_9 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_13, tmp_kw_name_7 );
        Py_DECREF( tmp_kw_name_7 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_exp_date;
            assert( old != NULL );
            var_exp_date = tmp_assign_source_14;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooooooNoooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = PyList_New( 0 );
        assert( var_remaning == NULL );
        var_remaning = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( var_exp );
        tmp_iter_arg_2 = var_exp;
        tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_16;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_17 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooNoooo";
                exception_lineno = 41;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_18 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_t;
            var_t = tmp_assign_source_18;
            Py_INCREF( var_t );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_source_name_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_int_arg_5;
        PyObject *tmp_right_name_10;
        PyObject *tmp_int_arg_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_12;
        CHECK_OBJECT( var_remaning );
        tmp_source_name_5 = var_remaning;
        tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "ooooooNoooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_t );
        tmp_int_arg_5 = var_t;
        tmp_left_name_10 = PyNumber_Int( tmp_int_arg_5 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_14 );

            exception_lineno = 42;
            type_description_1 = "ooooooNoooo";
            goto try_except_handler_3;
        }
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_left_name_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 42;
            type_description_1 = "ooooooNoooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_4 = tmp_mvar_value_12;
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 42;
        tmp_int_arg_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_time );
        if ( tmp_int_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 42;
            type_description_1 = "ooooooNoooo";
            goto try_except_handler_3;
        }
        tmp_right_name_10 = PyNumber_Int( tmp_int_arg_6 );
        Py_DECREF( tmp_int_arg_6 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 42;
            type_description_1 = "ooooooNoooo";
            goto try_except_handler_3;
        }
        tmp_args_element_name_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_14 );

            exception_lineno = 42;
            type_description_1 = "ooooooNoooo";
            goto try_except_handler_3;
        }
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "ooooooNoooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "ooooooNoooo";
        goto try_except_handler_3;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_2;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_19;
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( var_remaning );
            tmp_iter_arg_3 = var_remaning;
            tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_1 = "ooooooNoooo";
                goto try_except_handler_4;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_21;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_6523be6de965c8d1e97fce9c5f1c9e76_2, codeobj_6523be6de965c8d1e97fce9c5f1c9e76, module_iqoptionapi$expiration, sizeof(void *)+sizeof(void *) );
        frame_6523be6de965c8d1e97fce9c5f1c9e76_2 = cache_frame_6523be6de965c8d1e97fce9c5f1c9e76_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_6523be6de965c8d1e97fce9c5f1c9e76_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_6523be6de965c8d1e97fce9c5f1c9e76_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_3 = tmp_listcomp_1__$0;
            tmp_assign_source_22 = ITERATOR_NEXT( tmp_next_source_3 );
            if ( tmp_assign_source_22 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_4;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "oo";
                    exception_lineno = 44;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_22;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_23 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_23;
                Py_INCREF( outline_0_var_x );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_15;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_name_15 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_15 != NULL );
            CHECK_OBJECT( outline_0_var_x );
            tmp_left_name_11 = outline_0_var_x;
            tmp_left_name_12 = const_int_pos_60;
            CHECK_OBJECT( par_duration );
            tmp_right_name_12 = par_duration;
            tmp_right_name_11 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_12, tmp_right_name_12 );
            if ( tmp_right_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_args_element_name_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
            Py_DECREF( tmp_right_name_11 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            frame_6523be6de965c8d1e97fce9c5f1c9e76_2->m_frame.f_lineno = 44;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
            }

            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_2 = "oo";
            goto try_except_handler_5;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_19 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_19 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( iqoptionapi$expiration$$$function_2_get_expiration_time );
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_6523be6de965c8d1e97fce9c5f1c9e76_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_6523be6de965c8d1e97fce9c5f1c9e76_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_6523be6de965c8d1e97fce9c5f1c9e76_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_6523be6de965c8d1e97fce9c5f1c9e76_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_6523be6de965c8d1e97fce9c5f1c9e76_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_6523be6de965c8d1e97fce9c5f1c9e76_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_6523be6de965c8d1e97fce9c5f1c9e76_2,
            type_description_2,
            outline_0_var_x,
            par_duration
        );


        // Release cached frame.
        if ( frame_6523be6de965c8d1e97fce9c5f1c9e76_2 == cache_frame_6523be6de965c8d1e97fce9c5f1c9e76_2 )
        {
            Py_DECREF( frame_6523be6de965c8d1e97fce9c5f1c9e76_2 );
        }
        cache_frame_6523be6de965c8d1e97fce9c5f1c9e76_2 = NULL;

        assertFrameObject( frame_6523be6de965c8d1e97fce9c5f1c9e76_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooNoooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( iqoptionapi$expiration$$$function_2_get_expiration_time );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF( outline_0_var_x );
        outline_0_var_x = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_x );
        outline_0_var_x = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( iqoptionapi$expiration$$$function_2_get_expiration_time );
        return NULL;
        outline_exception_1:;
        exception_lineno = 44;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert( var_close == NULL );
        var_close = tmp_assign_source_19;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_int_arg_7;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_called_name_16;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_called_name_17;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_int_arg_8;
        PyObject *tmp_called_name_18;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_14;
        CHECK_OBJECT( var_exp );
        tmp_subscribed_name_1 = var_exp;
        CHECK_OBJECT( var_close );
        tmp_source_name_6 = var_close;
        tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_index );
        if ( tmp_called_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_17 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_17 != NULL );
        CHECK_OBJECT( var_close );
        tmp_args_element_name_12 = var_close;
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_args_element_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_16 );

            exception_lineno = 46;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_subscript_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_int_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_int_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyNumber_Int( tmp_int_arg_7 );
        Py_DECREF( tmp_int_arg_7 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_close );
        tmp_source_name_7 = var_close;
        tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_index );
        if ( tmp_called_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 46;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_19 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_19 != NULL );
        CHECK_OBJECT( var_close );
        tmp_args_element_name_14 = var_close;
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_args_element_name_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_called_name_18 );

            exception_lineno = 46;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        frame_08b6f75838960167ba2e7e9544896717->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_int_arg_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_int_arg_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 46;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyNumber_Int( tmp_int_arg_8 );
        Py_DECREF( tmp_int_arg_8 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 46;
            type_description_1 = "ooooooNoooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_08b6f75838960167ba2e7e9544896717 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_08b6f75838960167ba2e7e9544896717 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_08b6f75838960167ba2e7e9544896717 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_08b6f75838960167ba2e7e9544896717, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_08b6f75838960167ba2e7e9544896717->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_08b6f75838960167ba2e7e9544896717, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_08b6f75838960167ba2e7e9544896717,
        type_description_1,
        par_timestamp,
        par_duration,
        var_now_date,
        var_exp_date,
        var_exp,
        var__,
        NULL,
        var_index,
        var_remaning,
        var_t,
        var_close
    );


    // Release cached frame.
    if ( frame_08b6f75838960167ba2e7e9544896717 == cache_frame_08b6f75838960167ba2e7e9544896717 )
    {
        Py_DECREF( frame_08b6f75838960167ba2e7e9544896717 );
    }
    cache_frame_08b6f75838960167ba2e7e9544896717 = NULL;

    assertFrameObject( frame_08b6f75838960167ba2e7e9544896717 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( iqoptionapi$expiration$$$function_2_get_expiration_time );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_timestamp );
    Py_DECREF( par_timestamp );
    par_timestamp = NULL;

    CHECK_OBJECT( (PyObject *)par_duration );
    Py_DECREF( par_duration );
    par_duration = NULL;

    CHECK_OBJECT( (PyObject *)var_now_date );
    Py_DECREF( var_now_date );
    var_now_date = NULL;

    CHECK_OBJECT( (PyObject *)var_exp_date );
    Py_DECREF( var_exp_date );
    var_exp_date = NULL;

    CHECK_OBJECT( (PyObject *)var_exp );
    Py_DECREF( var_exp );
    var_exp = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    CHECK_OBJECT( (PyObject *)var_remaning );
    Py_DECREF( var_remaning );
    var_remaning = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    CHECK_OBJECT( (PyObject *)var_close );
    Py_DECREF( var_close );
    var_close = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_timestamp );
    Py_DECREF( par_timestamp );
    par_timestamp = NULL;

    CHECK_OBJECT( (PyObject *)par_duration );
    Py_DECREF( par_duration );
    par_duration = NULL;

    Py_XDECREF( var_now_date );
    var_now_date = NULL;

    Py_XDECREF( var_exp_date );
    var_exp_date = NULL;

    Py_XDECREF( var_exp );
    var_exp = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_remaning );
    var_remaning = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_close );
    var_close = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( iqoptionapi$expiration$$$function_2_get_expiration_time );
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


static PyObject *impl_iqoptionapi$expiration$$$function_3_get_remaning_time( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_timestamp = python_pars[ 0 ];
    PyObject *var_now_date = NULL;
    PyObject *var_exp_date = NULL;
    PyObject *var_exp = NULL;
    PyObject *var__ = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_index = NULL;
    PyObject *var_remaning = NULL;
    PyObject *var_t = NULL;
    PyObject *var_dr = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_7bff93e357d9768bb995eeb8a443a993;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_7bff93e357d9768bb995eeb8a443a993 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7bff93e357d9768bb995eeb8a443a993, codeobj_7bff93e357d9768bb995eeb8a443a993, module_iqoptionapi$expiration, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7bff93e357d9768bb995eeb8a443a993 = cache_frame_7bff93e357d9768bb995eeb8a443a993;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7bff93e357d9768bb995eeb8a443a993 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7bff93e357d9768bb995eeb8a443a993 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_datetime );

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

            exception_lineno = 50;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_timestamp );
        tmp_args_element_name_1 = par_timestamp;
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fromtimestamp, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_now_date == NULL );
        var_now_date = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( var_now_date );
        tmp_source_name_1 = var_now_date;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_replace );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_c3721c40643bb24366f18ef30b94c96b );
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 51;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_exp_date == NULL );
        var_exp_date = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "date_to_timestamp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_exp_date );
        tmp_left_name_2 = var_exp_date;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_timedelta );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_kw_name_2 = PyDict_Copy( const_dict_d3e305893e6430856cec586a957bee97 );
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 52;
        tmp_right_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_timestamp );
        tmp_right_name_2 = par_timestamp;
        tmp_compexpr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_30;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( var_exp_date );
            tmp_left_name_3 = var_exp_date;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_timedelta );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 53;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            tmp_kw_name_3 = PyDict_Copy( const_dict_d3e305893e6430856cec586a957bee97 );
            frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 53;
            tmp_right_name_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_exp_date;
                assert( old != NULL );
                var_exp_date = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( var_exp_date );
            tmp_left_name_4 = var_exp_date;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_timedelta );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 56;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            tmp_kw_name_4 = PyDict_Copy( const_dict_b92f689eefe75e03f16db58a0a420f6f );
            frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 56;
            tmp_right_name_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_4 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_exp_date;
                assert( old != NULL );
                var_exp_date = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyList_New( 0 );
        assert( var_exp == NULL );
        var_exp = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = const_xrange_0_5;
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
        assert( !(tmp_assign_source_6 == NULL) );
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
                type_description_1 = "oooooooooo";
                exception_lineno = 58;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_8 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_8;
            Py_INCREF( var__ );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_exp );
        tmp_source_name_2 = var_exp;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "date_to_timestamp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_7 = tmp_mvar_value_6;
        CHECK_OBJECT( var_exp_date );
        tmp_args_element_name_4 = var_exp_date;
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_kw_name_5;
        CHECK_OBJECT( var_exp_date );
        tmp_left_name_5 = var_exp_date;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_timedelta );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_8 = tmp_mvar_value_7;
        tmp_kw_name_5 = PyDict_Copy( const_dict_d3e305893e6430856cec586a957bee97 );
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 60;
        tmp_right_name_5 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_8, tmp_kw_name_5 );
        Py_DECREF( tmp_kw_name_5 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_date;
            assert( old != NULL );
            var_exp_date = tmp_assign_source_9;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_int_pos_11;
        assert( var_idx == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_idx = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_int_0;
        assert( var_index == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_index = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_datetime );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 63;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_8;
        CHECK_OBJECT( par_timestamp );
        tmp_args_element_name_5 = par_timestamp;
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_fromtimestamp, call_args );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_now_date;
            assert( old != NULL );
            var_now_date = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_3;
        PyObject *tmp_kw_name_6;
        CHECK_OBJECT( var_now_date );
        tmp_source_name_3 = var_now_date;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_replace );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_6 = PyDict_Copy( const_dict_c3721c40643bb24366f18ef30b94c96b );
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 64;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_9, tmp_kw_name_6 );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_kw_name_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_exp_date;
            assert( old != NULL );
            var_exp_date = tmp_assign_source_13;
            Py_DECREF( old );
        }

    }
    loop_start_2:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        if ( var_index == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "index" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 65;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = var_index;
        CHECK_OBJECT( var_idx );
        tmp_compexpr_right_2 = var_idx;
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
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
        goto loop_end_2;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_left_name_6;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_right_name_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_left_name_7;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_int_arg_4;
        CHECK_OBJECT( var_exp_date );
        tmp_called_instance_3 = var_exp_date;
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 66;
        tmp_int_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_strftime, &PyTuple_GET_ITEM( const_tuple_str_digest_6faf706aa81bd74e9873064504519d03_tuple, 0 ) );

        if ( tmp_int_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = PyNumber_Int( tmp_int_arg_2 );
        Py_DECREF( tmp_int_arg_2 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = const_int_pos_15;
        tmp_compexpr_left_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "date_to_timestamp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_9;
        CHECK_OBJECT( var_exp_date );
        tmp_args_element_name_6 = var_exp_date;
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_int_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        if ( tmp_int_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_7 = PyNumber_Int( tmp_int_arg_3 );
        Py_DECREF( tmp_int_arg_3 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_timestamp );
        tmp_int_arg_4 = par_timestamp;
        tmp_right_name_7 = PyNumber_Int( tmp_int_arg_4 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_int_pos_300;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_12;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_8;
            CHECK_OBJECT( var_exp );
            tmp_source_name_4 = var_exp;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_date_to_timestamp );
            }

            if ( tmp_mvar_value_10 == NULL )
            {
                Py_DECREF( tmp_called_name_11 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "date_to_timestamp" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 67;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_12 = tmp_mvar_value_10;
            CHECK_OBJECT( var_exp_date );
            tmp_args_element_name_8 = var_exp_date;
            frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 67;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
            }

            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_11 );

                exception_lineno = 67;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 67;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            if ( var_index == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "index" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 68;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_8 = var_index;
            tmp_right_name_8 = const_int_pos_1;
            tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_index;
                var_index = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_kw_name_7;
        CHECK_OBJECT( var_exp_date );
        tmp_left_name_9 = var_exp_date;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_timedelta );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_11;
        tmp_kw_name_7 = PyDict_Copy( const_dict_d3e305893e6430856cec586a957bee97 );
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 69;
        tmp_right_name_9 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_13, tmp_kw_name_7 );
        Py_DECREF( tmp_kw_name_7 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_exp_date;
            assert( old != NULL );
            var_exp_date = tmp_assign_source_15;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = PyList_New( 0 );
        assert( var_remaning == NULL );
        var_remaning = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_14;
        PyObject *tmp_args_element_name_9;
        tmp_called_name_14 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT( var_exp );
        tmp_args_element_name_9 = var_exp;
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_17;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_18 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooo";
                exception_lineno = 73;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
        tmp_assign_source_19 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_3 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_20 == NULL )
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


            type_description_1 = "oooooooooo";
            exception_lineno = 73;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_20;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_21 == NULL )
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


            type_description_1 = "oooooooooo";
            exception_lineno = 73;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_21;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 73;
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

            type_description_1 = "oooooooooo";
            exception_lineno = 73;
            goto try_except_handler_5;
        }
    }
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_idx;
            assert( old != NULL );
            var_idx = tmp_assign_source_22;
            Py_INCREF( var_idx );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_t;
            var_t = tmp_assign_source_23;
            Py_INCREF( var_t );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_idx );
        tmp_compexpr_left_5 = var_idx;
        tmp_compexpr_right_5 = const_int_pos_5;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
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
            PyObject *tmp_assign_source_24;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            tmp_left_name_10 = const_int_pos_15;
            CHECK_OBJECT( var_idx );
            tmp_left_name_11 = var_idx;
            tmp_right_name_11 = const_int_pos_4;
            tmp_right_name_10 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_11, tmp_right_name_11 );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_24 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_10, tmp_right_name_10 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = var_dr;
                var_dr = tmp_assign_source_24;
                Py_XDECREF( old );
            }

        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            CHECK_OBJECT( var_idx );
            tmp_left_name_12 = var_idx;
            tmp_right_name_12 = const_int_pos_1;
            tmp_assign_source_25 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_12, tmp_right_name_12 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = var_dr;
                var_dr = tmp_assign_source_25;
                Py_XDECREF( old );
            }

        }
        branch_end_4:;
    }
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_source_name_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_13;
        PyObject *tmp_int_arg_5;
        PyObject *tmp_right_name_13;
        PyObject *tmp_int_arg_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_12;
        CHECK_OBJECT( var_remaning );
        tmp_source_name_5 = var_remaning;
        tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
        if ( tmp_called_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_dr );
        tmp_tuple_element_1 = var_dr;
        tmp_args_element_name_10 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_10, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_t );
        tmp_int_arg_5 = var_t;
        tmp_left_name_13 = PyNumber_Int( tmp_int_arg_5 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 78;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_left_name_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 78;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_4 = tmp_mvar_value_12;
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 78;
        tmp_int_arg_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_time );
        if ( tmp_int_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 78;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_13 = PyNumber_Int( tmp_int_arg_6 );
        Py_DECREF( tmp_int_arg_6 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 78;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 78;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_10, 1, tmp_tuple_element_1 );
        frame_7bff93e357d9768bb995eeb8a443a993->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_4;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bff93e357d9768bb995eeb8a443a993 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bff93e357d9768bb995eeb8a443a993 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7bff93e357d9768bb995eeb8a443a993, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7bff93e357d9768bb995eeb8a443a993->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7bff93e357d9768bb995eeb8a443a993, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7bff93e357d9768bb995eeb8a443a993,
        type_description_1,
        par_timestamp,
        var_now_date,
        var_exp_date,
        var_exp,
        var__,
        var_idx,
        var_index,
        var_remaning,
        var_t,
        var_dr
    );


    // Release cached frame.
    if ( frame_7bff93e357d9768bb995eeb8a443a993 == cache_frame_7bff93e357d9768bb995eeb8a443a993 )
    {
        Py_DECREF( frame_7bff93e357d9768bb995eeb8a443a993 );
    }
    cache_frame_7bff93e357d9768bb995eeb8a443a993 = NULL;

    assertFrameObject( frame_7bff93e357d9768bb995eeb8a443a993 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    CHECK_OBJECT( var_remaning );
    tmp_return_value = var_remaning;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( iqoptionapi$expiration$$$function_3_get_remaning_time );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_timestamp );
    Py_DECREF( par_timestamp );
    par_timestamp = NULL;

    CHECK_OBJECT( (PyObject *)var_now_date );
    Py_DECREF( var_now_date );
    var_now_date = NULL;

    CHECK_OBJECT( (PyObject *)var_exp_date );
    Py_DECREF( var_exp_date );
    var_exp_date = NULL;

    CHECK_OBJECT( (PyObject *)var_exp );
    Py_DECREF( var_exp );
    var_exp = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    CHECK_OBJECT( (PyObject *)var_idx );
    Py_DECREF( var_idx );
    var_idx = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    CHECK_OBJECT( (PyObject *)var_remaning );
    Py_DECREF( var_remaning );
    var_remaning = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_dr );
    var_dr = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_timestamp );
    Py_DECREF( par_timestamp );
    par_timestamp = NULL;

    Py_XDECREF( var_now_date );
    var_now_date = NULL;

    Py_XDECREF( var_exp_date );
    var_exp_date = NULL;

    Py_XDECREF( var_exp );
    var_exp = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_remaning );
    var_remaning = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_dr );
    var_dr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( iqoptionapi$expiration$$$function_3_get_remaning_time );
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



static PyObject *MAKE_FUNCTION_iqoptionapi$expiration$$$function_1_date_to_timestamp(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_iqoptionapi$expiration$$$function_1_date_to_timestamp,
        const_str_plain_date_to_timestamp,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0a993cf8f56030ac49b8287c57a2f9b4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_iqoptionapi$expiration,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_iqoptionapi$expiration$$$function_2_get_expiration_time(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_iqoptionapi$expiration$$$function_2_get_expiration_time,
        const_str_plain_get_expiration_time,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_08b6f75838960167ba2e7e9544896717,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_iqoptionapi$expiration,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_iqoptionapi$expiration$$$function_3_get_remaning_time(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_iqoptionapi$expiration$$$function_3_get_remaning_time,
        const_str_plain_get_remaning_time,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7bff93e357d9768bb995eeb8a443a993,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_iqoptionapi$expiration,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_iqoptionapi$expiration =
{
    PyModuleDef_HEAD_INIT,
    "iqoptionapi.expiration",
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
MOD_ENTRY_DECL(iqoptionapi$expiration)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(iqoptionapi$expiration)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_iqoptionapi$expiration );
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
    puts("iqoptionapi.expiration: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("iqoptionapi.expiration: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("iqoptionapi.expiration: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initiqoptionapi$expiration" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_iqoptionapi$expiration = Py_InitModule4(
        "iqoptionapi.expiration",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_iqoptionapi$expiration = PyModule_Create( &mdef_iqoptionapi$expiration );
#endif

    moduledict_iqoptionapi$expiration = MODULE_DICT( module_iqoptionapi$expiration );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_iqoptionapi$expiration,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_iqoptionapi$expiration,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_iqoptionapi$expiration,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_iqoptionapi$expiration,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_iqoptionapi$expiration );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_681127b0040c32c62f05144eaaa6930f, module_iqoptionapi$expiration );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_90fe3fd19127d5262084d06ab1bed030;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_d3b3eed4cbbd0a3e5b8e2f3263fcc9a2;
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_90fe3fd19127d5262084d06ab1bed030 = MAKE_MODULE_FRAME( codeobj_90fe3fd19127d5262084d06ab1bed030, module_iqoptionapi$expiration );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_90fe3fd19127d5262084d06ab1bed030 );
    assert( Py_REFCNT( frame_90fe3fd19127d5262084d06ab1bed030 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_d3b3eed4cbbd0a3e5b8e2f3263fcc9a2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_time;
        tmp_globals_name_1 = (PyObject *)moduledict_iqoptionapi$expiration;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_90fe3fd19127d5262084d06ab1bed030->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_datetime;
        tmp_globals_name_2 = (PyObject *)moduledict_iqoptionapi$expiration;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_datetime_str_plain_timedelta_tuple;
        tmp_level_name_2 = const_int_0;
        frame_90fe3fd19127d5262084d06ab1bed030->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_datetime );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_timedelta );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_timedelta, tmp_assign_source_7 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_90fe3fd19127d5262084d06ab1bed030 );
#endif
    popFrameStack();

    assertFrameObject( frame_90fe3fd19127d5262084d06ab1bed030 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_90fe3fd19127d5262084d06ab1bed030 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_90fe3fd19127d5262084d06ab1bed030, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_90fe3fd19127d5262084d06ab1bed030->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_90fe3fd19127d5262084d06ab1bed030, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_iqoptionapi$expiration$$$function_1_date_to_timestamp(  );



        UPDATE_STRING_DICT1( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_date_to_timestamp, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_iqoptionapi$expiration$$$function_2_get_expiration_time(  );



        UPDATE_STRING_DICT1( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_get_expiration_time, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_iqoptionapi$expiration$$$function_3_get_remaning_time(  );



        UPDATE_STRING_DICT1( moduledict_iqoptionapi$expiration, (Nuitka_StringObject *)const_str_plain_get_remaning_time, tmp_assign_source_10 );
    }

    return MOD_RETURN_VALUE( module_iqoptionapi$expiration );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
