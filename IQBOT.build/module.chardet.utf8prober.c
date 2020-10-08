/* Generated code for Python module 'chardet.utf8prober'
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

/* The "_module_chardet$utf8prober" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$utf8prober;
PyDictObject *moduledict_chardet$utf8prober;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_unlike;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_FOUND_IT;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_tuple_str_plain_self_str_plain_unlike_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_UTF8_SM_MODEL_tuple;
static PyObject *const_str_digest_6e1e2cc1b8b38d08c5095fcd421912f4;
extern PyObject *const_str_plain_enums;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_get_confidence;
extern PyObject *const_float_0_5;
extern PyObject *const_str_plain_NOT_ME;
extern PyObject *const_str_plain_DETECTING;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_9c00d165cca5b69306cbeae79f3755b6;
static PyObject *const_str_digest_105d651e844cec5e5304d27b35113f65;
extern PyObject *const_str_plain_mbcssm;
extern PyObject *const_str_plain_UTF8_SM_MODEL;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_68f5a554b08c0c93897ca0bc5a8bd7c9;
extern PyObject *const_str_plain_coding_state;
extern PyObject *const_float_1_0;
extern PyObject *const_float_0_99;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_get_current_charlen;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_charsetprober;
static PyObject *const_str_digest_d8e6e7d9079f49d27b12fc56c3d8725f;
static PyObject *const_str_digest_4e5ca5aa34bad62284900ef5518f6097;
static PyObject *const_str_digest_0887d7d666f97aeac847d3519399a7bc;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_charset_name;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
static PyObject *const_tuple_5adc4918b46835a5c06db571f6cee705_tuple;
extern PyObject *const_str_plain_next_state;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ProbingState;
extern PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_coding_sm;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_ecc078a54dfceeee75b945ece9752a48;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_codingstatemachine;
extern PyObject *const_str_plain_SHORTCUT_THRESHOLD;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_UTF8Prober;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_byte_str;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_0bd702763fc677e8847569a759afd08e;
extern PyObject *const_str_plain_language;
extern PyObject *const_str_plain_ITS_ME;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_ERROR;
extern PyObject *const_str_plain_CharSetProber;
extern PyObject *const_tuple_str_plain_ProbingState_str_plain_MachineState_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_MachineState;
extern PyObject *const_str_plain_CodingStateMachine;
static PyObject *const_str_plain__num_mb_chars;
extern PyObject *const_str_plain_START;
extern PyObject *const_str_plain__state;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_tuple_str_plain_CharSetProber_tuple;
extern PyObject *const_tuple_str_plain_CodingStateMachine_tuple;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_ONE_CHAR_PROB;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_feed;
extern PyObject *const_str_empty;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_unlike = UNSTREAM_STRING_ASCII( &constant_bin[ 56012 ], 6, 1 );
    const_tuple_str_plain_self_str_plain_unlike_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_unlike_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_unlike_tuple, 1, const_str_plain_unlike ); Py_INCREF( const_str_plain_unlike );
    const_tuple_str_plain_UTF8_SM_MODEL_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_UTF8_SM_MODEL_tuple, 0, const_str_plain_UTF8_SM_MODEL ); Py_INCREF( const_str_plain_UTF8_SM_MODEL );
    const_str_digest_6e1e2cc1b8b38d08c5095fcd421912f4 = UNSTREAM_STRING_ASCII( &constant_bin[ 415453 ], 23, 0 );
    const_str_digest_9c00d165cca5b69306cbeae79f3755b6 = UNSTREAM_STRING_ASCII( &constant_bin[ 415476 ], 16, 0 );
    const_str_digest_105d651e844cec5e5304d27b35113f65 = UNSTREAM_STRING_ASCII( &constant_bin[ 415492 ], 19, 0 );
    const_str_digest_68f5a554b08c0c93897ca0bc5a8bd7c9 = UNSTREAM_STRING_ASCII( &constant_bin[ 415511 ], 27, 0 );
    const_str_digest_d8e6e7d9079f49d27b12fc56c3d8725f = UNSTREAM_STRING_ASCII( &constant_bin[ 415519 ], 18, 0 );
    const_str_digest_4e5ca5aa34bad62284900ef5518f6097 = UNSTREAM_STRING_ASCII( &constant_bin[ 415538 ], 25, 0 );
    const_str_digest_0887d7d666f97aeac847d3519399a7bc = UNSTREAM_STRING_ASCII( &constant_bin[ 415563 ], 19, 0 );
    const_tuple_5adc4918b46835a5c06db571f6cee705_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_5adc4918b46835a5c06db571f6cee705_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5adc4918b46835a5c06db571f6cee705_tuple, 1, const_str_plain_byte_str ); Py_INCREF( const_str_plain_byte_str );
    PyTuple_SET_ITEM( const_tuple_5adc4918b46835a5c06db571f6cee705_tuple, 2, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_5adc4918b46835a5c06db571f6cee705_tuple, 3, const_str_plain_coding_state ); Py_INCREF( const_str_plain_coding_state );
    const_str_digest_ecc078a54dfceeee75b945ece9752a48 = UNSTREAM_STRING_ASCII( &constant_bin[ 415582 ], 15, 0 );
    const_str_digest_0bd702763fc677e8847569a759afd08e = UNSTREAM_STRING_ASCII( &constant_bin[ 415597 ], 49, 0 );
    const_str_plain__num_mb_chars = UNSTREAM_STRING_ASCII( &constant_bin[ 415646 ], 13, 1 );
    const_str_plain_ONE_CHAR_PROB = UNSTREAM_STRING_ASCII( &constant_bin[ 415659 ], 13, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$utf8prober( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_5837a10793c5b1d29168cc89e7579148;
static PyCodeObject *codeobj_5ce4375122035b24331e1b284a4b068c;
static PyCodeObject *codeobj_1a58889ba210bbc473012e15c545ad3c;
static PyCodeObject *codeobj_1c03d65be91b6958127e4ff54681538f;
static PyCodeObject *codeobj_a578b677eac751222c81afcf5834cd5a;
static PyCodeObject *codeobj_fbba4e82d137beb5f0bbca7091066ad4;
static PyCodeObject *codeobj_56fa7d6d39e0de775f174a31876e0d53;
static PyCodeObject *codeobj_0f17ed1b25814d2695cae0869491125e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_0bd702763fc677e8847569a759afd08e;
    codeobj_5837a10793c5b1d29168cc89e7579148 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_68f5a554b08c0c93897ca0bc5a8bd7c9, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_5ce4375122035b24331e1b284a4b068c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_UTF8Prober, 35, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_1a58889ba210bbc473012e15c545ad3c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 38, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_1c03d65be91b6958127e4ff54681538f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_charset_name, 49, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a578b677eac751222c81afcf5834cd5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_feed, 57, const_tuple_5adc4918b46835a5c06db571f6cee705_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fbba4e82d137beb5f0bbca7091066ad4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_confidence, 76, const_tuple_str_plain_self_str_plain_unlike_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_56fa7d6d39e0de775f174a31876e0d53 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_language, 53, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0f17ed1b25814d2695cae0869491125e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset, 44, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_2_reset(  );


static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_3_charset_name(  );


static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_4_language(  );


static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_5_feed(  );


static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_6_get_confidence(  );


// The module function definitions.
static PyObject *impl_chardet$utf8prober$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_1a58889ba210bbc473012e15c545ad3c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1a58889ba210bbc473012e15c545ad3c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1a58889ba210bbc473012e15c545ad3c, codeobj_1a58889ba210bbc473012e15c545ad3c, module_chardet$utf8prober, sizeof(void *)+sizeof(void *) );
    frame_1a58889ba210bbc473012e15c545ad3c = cache_frame_1a58889ba210bbc473012e15c545ad3c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1a58889ba210bbc473012e15c545ad3c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1a58889ba210bbc473012e15c545ad3c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_UTF8Prober );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UTF8Prober );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UTF8Prober" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 39;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_1a58889ba210bbc473012e15c545ad3c->m_frame.f_lineno = 39;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___init__ );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_CodingStateMachine );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CodingStateMachine );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CodingStateMachine" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_UTF8_SM_MODEL );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UTF8_SM_MODEL );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UTF8_SM_MODEL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_3;
        frame_1a58889ba210bbc473012e15c545ad3c->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_coding_sm, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__num_mb_chars, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_1a58889ba210bbc473012e15c545ad3c->m_frame.f_lineno = 42;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reset );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a58889ba210bbc473012e15c545ad3c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a58889ba210bbc473012e15c545ad3c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1a58889ba210bbc473012e15c545ad3c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1a58889ba210bbc473012e15c545ad3c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1a58889ba210bbc473012e15c545ad3c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1a58889ba210bbc473012e15c545ad3c,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_1a58889ba210bbc473012e15c545ad3c == cache_frame_1a58889ba210bbc473012e15c545ad3c )
    {
        Py_DECREF( frame_1a58889ba210bbc473012e15c545ad3c );
    }
    cache_frame_1a58889ba210bbc473012e15c545ad3c = NULL;

    assertFrameObject( frame_1a58889ba210bbc473012e15c545ad3c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$utf8prober$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$utf8prober$$$function_1___init__ );
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


static PyObject *impl_chardet$utf8prober$$$function_2_reset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_0f17ed1b25814d2695cae0869491125e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0f17ed1b25814d2695cae0869491125e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0f17ed1b25814d2695cae0869491125e, codeobj_0f17ed1b25814d2695cae0869491125e, module_chardet$utf8prober, sizeof(void *)+sizeof(void *) );
    frame_0f17ed1b25814d2695cae0869491125e = cache_frame_0f17ed1b25814d2695cae0869491125e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0f17ed1b25814d2695cae0869491125e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0f17ed1b25814d2695cae0869491125e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_UTF8Prober );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UTF8Prober );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UTF8Prober" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_0f17ed1b25814d2695cae0869491125e->m_frame.f_lineno = 45;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reset );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coding_sm );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_0f17ed1b25814d2695cae0869491125e->m_frame.f_lineno = 46;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reset );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__num_mb_chars, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f17ed1b25814d2695cae0869491125e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f17ed1b25814d2695cae0869491125e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0f17ed1b25814d2695cae0869491125e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0f17ed1b25814d2695cae0869491125e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0f17ed1b25814d2695cae0869491125e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0f17ed1b25814d2695cae0869491125e,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_0f17ed1b25814d2695cae0869491125e == cache_frame_0f17ed1b25814d2695cae0869491125e )
    {
        Py_DECREF( frame_0f17ed1b25814d2695cae0869491125e );
    }
    cache_frame_0f17ed1b25814d2695cae0869491125e = NULL;

    assertFrameObject( frame_0f17ed1b25814d2695cae0869491125e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$utf8prober$$$function_2_reset );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$utf8prober$$$function_2_reset );
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


static PyObject *impl_chardet$utf8prober$$$function_3_charset_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = const_str_digest_c075052d723d6707083e869a0e3659bb;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$utf8prober$$$function_3_charset_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$utf8prober$$$function_3_charset_name );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_chardet$utf8prober$$$function_4_language( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$utf8prober$$$function_4_language );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$utf8prober$$$function_4_language );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_chardet$utf8prober$$$function_5_feed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_byte_str = python_pars[ 1 ];
    PyObject *var_c = NULL;
    PyObject *var_coding_state = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_a578b677eac751222c81afcf5834cd5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a578b677eac751222c81afcf5834cd5a = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a578b677eac751222c81afcf5834cd5a, codeobj_a578b677eac751222c81afcf5834cd5a, module_chardet$utf8prober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a578b677eac751222c81afcf5834cd5a = cache_frame_a578b677eac751222c81afcf5834cd5a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a578b677eac751222c81afcf5834cd5a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a578b677eac751222c81afcf5834cd5a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_byte_str );
        tmp_iter_arg_1 = par_byte_str;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                exception_lineno = 58;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_3;
            Py_INCREF( var_c );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coding_sm );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_c );
        tmp_args_element_name_1 = var_c;
        frame_a578b677eac751222c81afcf5834cd5a->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_next_state, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_coding_state;
            var_coding_state = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( var_coding_state );
        tmp_compexpr_left_1 = var_coding_state;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_MachineState );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MachineState" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ERROR );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooo";
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
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_assattr_target_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_ProbingState );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProbingState" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 61;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }

            tmp_source_name_3 = tmp_mvar_value_2;
            tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_NOT_ME );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__state, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
        }
        goto loop_end_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( var_coding_state );
            tmp_compexpr_left_2 = var_coding_state;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_MachineState );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MachineState" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 63;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }

            tmp_source_name_4 = tmp_mvar_value_3;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ITS_ME );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 63;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 63;
                type_description_1 = "oooo";
                goto try_except_handler_2;
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
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_assattr_target_2;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_ProbingState );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProbingState" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 64;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_5 = tmp_mvar_value_4;
                tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_FOUND_IT );
                if ( tmp_assattr_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( par_self );
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__state, tmp_assattr_name_2 );
                Py_DECREF( tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
            }
            goto loop_end_1;
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_5;
                CHECK_OBJECT( var_coding_state );
                tmp_compexpr_left_3 = var_coding_state;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_MachineState );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MachineState" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 66;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_6 = tmp_mvar_value_5;
                tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_START );
                if ( tmp_compexpr_right_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 66;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 66;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_source_name_7;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_7 = par_self;
                    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_coding_sm );
                    if ( tmp_called_instance_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 67;
                        type_description_1 = "oooo";
                        goto try_except_handler_2;
                    }
                    frame_a578b677eac751222c81afcf5834cd5a->m_frame.f_lineno = 67;
                    tmp_compexpr_left_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_current_charlen );
                    Py_DECREF( tmp_called_instance_2 );
                    if ( tmp_compexpr_left_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 67;
                        type_description_1 = "oooo";
                        goto try_except_handler_2;
                    }
                    tmp_compexpr_right_4 = const_int_pos_2;
                    tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    Py_DECREF( tmp_compexpr_left_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 67;
                        type_description_1 = "oooo";
                        goto try_except_handler_2;
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
                        PyObject *tmp_assign_source_5;
                        PyObject *tmp_source_name_8;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_8 = par_self;
                        tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__num_mb_chars );
                        if ( tmp_assign_source_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 68;
                            type_description_1 = "oooo";
                            goto try_except_handler_2;
                        }
                        {
                            PyObject *old = tmp_inplace_assign_attr_1__start;
                            tmp_inplace_assign_attr_1__start = tmp_assign_source_5;
                            Py_XDECREF( old );
                        }

                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_6;
                        PyObject *tmp_left_name_1;
                        PyObject *tmp_right_name_1;
                        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
                        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
                        tmp_right_name_1 = const_int_pos_1;
                        tmp_assign_source_6 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
                        if ( tmp_assign_source_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 68;
                            type_description_1 = "oooo";
                            goto try_except_handler_3;
                        }
                        {
                            PyObject *old = tmp_inplace_assign_attr_1__end;
                            tmp_inplace_assign_attr_1__end = tmp_assign_source_6;
                            Py_XDECREF( old );
                        }

                    }
                    // Tried code:
                    {
                        PyObject *tmp_assattr_name_3;
                        PyObject *tmp_assattr_target_3;
                        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
                        tmp_assattr_name_3 = tmp_inplace_assign_attr_1__end;
                        CHECK_OBJECT( par_self );
                        tmp_assattr_target_3 = par_self;
                        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__num_mb_chars, tmp_assattr_name_3 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 68;
                            type_description_1 = "oooo";
                            goto try_except_handler_4;
                        }
                    }
                    goto try_end_1;
                    // Exception handler code:
                    try_except_handler_4:;
                    exception_keeper_type_1 = exception_type;
                    exception_keeper_value_1 = exception_value;
                    exception_keeper_tb_1 = exception_tb;
                    exception_keeper_lineno_1 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
                    Py_DECREF( tmp_inplace_assign_attr_1__end );
                    tmp_inplace_assign_attr_1__end = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_1;
                    exception_value = exception_keeper_value_1;
                    exception_tb = exception_keeper_tb_1;
                    exception_lineno = exception_keeper_lineno_1;

                    goto try_except_handler_3;
                    // End of try:
                    try_end_1:;
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

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
                    Py_DECREF( tmp_inplace_assign_attr_1__start );
                    tmp_inplace_assign_attr_1__start = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_2;
                    exception_value = exception_keeper_value_2;
                    exception_tb = exception_keeper_tb_2;
                    exception_lineno = exception_keeper_lineno_2;

                    goto try_except_handler_2;
                    // End of try:
                    try_end_2:;
                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
                    Py_DECREF( tmp_inplace_assign_attr_1__end );
                    tmp_inplace_assign_attr_1__end = NULL;

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
                    Py_DECREF( tmp_inplace_assign_attr_1__start );
                    tmp_inplace_assign_attr_1__start = NULL;

                    branch_no_4:;
                }
                branch_no_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_state );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_ProbingState );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProbingState" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_6;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_DETECTING );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_5 );

            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
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
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( par_self );
            tmp_called_instance_3 = par_self;
            frame_a578b677eac751222c81afcf5834cd5a->m_frame.f_lineno = 71;
            tmp_compexpr_left_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_get_confidence );
            if ( tmp_compexpr_left_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_SHORTCUT_THRESHOLD );
            if ( tmp_compexpr_right_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_6 );

                exception_lineno = 71;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_left_6 );
            Py_DECREF( tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_assattr_name_4;
                PyObject *tmp_source_name_12;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_assattr_target_4;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_ProbingState );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProbingState" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 72;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_12 = tmp_mvar_value_7;
                tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_FOUND_IT );
                if ( tmp_assattr_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_assattr_target_4 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__state, tmp_assattr_name_4 );
                Py_DECREF( tmp_assattr_name_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_6:;
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_source_name_13;
        CHECK_OBJECT( par_self );
        tmp_source_name_13 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_state );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a578b677eac751222c81afcf5834cd5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a578b677eac751222c81afcf5834cd5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a578b677eac751222c81afcf5834cd5a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a578b677eac751222c81afcf5834cd5a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a578b677eac751222c81afcf5834cd5a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a578b677eac751222c81afcf5834cd5a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a578b677eac751222c81afcf5834cd5a,
        type_description_1,
        par_self,
        par_byte_str,
        var_c,
        var_coding_state
    );


    // Release cached frame.
    if ( frame_a578b677eac751222c81afcf5834cd5a == cache_frame_a578b677eac751222c81afcf5834cd5a )
    {
        Py_DECREF( frame_a578b677eac751222c81afcf5834cd5a );
    }
    cache_frame_a578b677eac751222c81afcf5834cd5a = NULL;

    assertFrameObject( frame_a578b677eac751222c81afcf5834cd5a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$utf8prober$$$function_5_feed );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_byte_str );
    Py_DECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_coding_state );
    var_coding_state = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_byte_str );
    Py_DECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_coding_state );
    var_coding_state = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$utf8prober$$$function_5_feed );
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


static PyObject *impl_chardet$utf8prober$$$function_6_get_confidence( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_unlike = NULL;
    struct Nuitka_FrameObject *frame_fbba4e82d137beb5f0bbca7091066ad4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fbba4e82d137beb5f0bbca7091066ad4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fbba4e82d137beb5f0bbca7091066ad4, codeobj_fbba4e82d137beb5f0bbca7091066ad4, module_chardet$utf8prober, sizeof(void *)+sizeof(void *) );
    frame_fbba4e82d137beb5f0bbca7091066ad4 = cache_frame_fbba4e82d137beb5f0bbca7091066ad4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fbba4e82d137beb5f0bbca7091066ad4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fbba4e82d137beb5f0bbca7091066ad4 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__num_mb_chars );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_6;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_3;
            tmp_left_name_1 = const_float_0_99;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ONE_CHAR_PROB );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__num_mb_chars );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 79;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( var_unlike == NULL );
            var_unlike = tmp_assign_source_1;
        }
        {
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_left_name_3 = const_float_1_0;
            CHECK_OBJECT( var_unlike );
            tmp_right_name_3 = var_unlike;
            tmp_return_value = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_return_value = const_float_0_99;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fbba4e82d137beb5f0bbca7091066ad4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fbba4e82d137beb5f0bbca7091066ad4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fbba4e82d137beb5f0bbca7091066ad4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fbba4e82d137beb5f0bbca7091066ad4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fbba4e82d137beb5f0bbca7091066ad4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fbba4e82d137beb5f0bbca7091066ad4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fbba4e82d137beb5f0bbca7091066ad4,
        type_description_1,
        par_self,
        var_unlike
    );


    // Release cached frame.
    if ( frame_fbba4e82d137beb5f0bbca7091066ad4 == cache_frame_fbba4e82d137beb5f0bbca7091066ad4 )
    {
        Py_DECREF( frame_fbba4e82d137beb5f0bbca7091066ad4 );
    }
    cache_frame_fbba4e82d137beb5f0bbca7091066ad4 = NULL;

    assertFrameObject( frame_fbba4e82d137beb5f0bbca7091066ad4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$utf8prober$$$function_6_get_confidence );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_unlike );
    var_unlike = NULL;

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

    Py_XDECREF( var_unlike );
    var_unlike = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$utf8prober$$$function_6_get_confidence );
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



static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf8prober$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_105d651e844cec5e5304d27b35113f65,
#endif
        codeobj_1a58889ba210bbc473012e15c545ad3c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$utf8prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_2_reset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf8prober$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 300
        const_str_digest_9c00d165cca5b69306cbeae79f3755b6,
#endif
        codeobj_0f17ed1b25814d2695cae0869491125e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$utf8prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_3_charset_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf8prober$$$function_3_charset_name,
        const_str_plain_charset_name,
#if PYTHON_VERSION >= 300
        const_str_digest_6e1e2cc1b8b38d08c5095fcd421912f4,
#endif
        codeobj_1c03d65be91b6958127e4ff54681538f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$utf8prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_4_language(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf8prober$$$function_4_language,
        const_str_plain_language,
#if PYTHON_VERSION >= 300
        const_str_digest_0887d7d666f97aeac847d3519399a7bc,
#endif
        codeobj_56fa7d6d39e0de775f174a31876e0d53,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$utf8prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_5_feed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf8prober$$$function_5_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 300
        const_str_digest_ecc078a54dfceeee75b945ece9752a48,
#endif
        codeobj_a578b677eac751222c81afcf5834cd5a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$utf8prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_6_get_confidence(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf8prober$$$function_6_get_confidence,
        const_str_plain_get_confidence,
#if PYTHON_VERSION >= 300
        const_str_digest_4e5ca5aa34bad62284900ef5518f6097,
#endif
        codeobj_fbba4e82d137beb5f0bbca7091066ad4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$utf8prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$utf8prober =
{
    PyModuleDef_HEAD_INIT,
    "chardet.utf8prober",
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
MOD_ENTRY_DECL(chardet$utf8prober)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(chardet$utf8prober)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$utf8prober );
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
    puts("chardet.utf8prober: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.utf8prober: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.utf8prober: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$utf8prober" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$utf8prober = Py_InitModule4(
        "chardet.utf8prober",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_chardet$utf8prober = PyModule_Create( &mdef_chardet$utf8prober );
#endif

    moduledict_chardet$utf8prober = MODULE_DICT( module_chardet$utf8prober );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_chardet$utf8prober,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_chardet$utf8prober,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$utf8prober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$utf8prober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_chardet$utf8prober );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_d8e6e7d9079f49d27b12fc56c3d8725f, module_chardet$utf8prober );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_5837a10793c5b1d29168cc89e7579148;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_chardet$utf8prober_35 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_5ce4375122035b24331e1b284a4b068c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5ce4375122035b24331e1b284a4b068c_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_0bd702763fc677e8847569a759afd08e;
        UPDATE_STRING_DICT0( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_5837a10793c5b1d29168cc89e7579148 = MAKE_MODULE_FRAME( codeobj_5837a10793c5b1d29168cc89e7579148, module_chardet$utf8prober );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_5837a10793c5b1d29168cc89e7579148 );
    assert( Py_REFCNT( frame_5837a10793c5b1d29168cc89e7579148 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_0bd702763fc677e8847569a759afd08e;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_charsetprober;
        tmp_globals_name_1 = (PyObject *)moduledict_chardet$utf8prober;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_CharSetProber_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_5837a10793c5b1d29168cc89e7579148->m_frame.f_lineno = 28;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_chardet$utf8prober,
                const_str_plain_CharSetProber,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_CharSetProber );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_CharSetProber, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_enums;
        tmp_globals_name_2 = (PyObject *)moduledict_chardet$utf8prober;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_ProbingState_str_plain_MachineState_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_5837a10793c5b1d29168cc89e7579148->m_frame.f_lineno = 29;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_chardet$utf8prober,
                const_str_plain_ProbingState,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ProbingState );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_ProbingState, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_chardet$utf8prober,
                const_str_plain_MachineState,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_MachineState );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_MachineState, tmp_assign_source_7 );
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
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_codingstatemachine;
        tmp_globals_name_3 = (PyObject *)moduledict_chardet$utf8prober;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_CodingStateMachine_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_5837a10793c5b1d29168cc89e7579148->m_frame.f_lineno = 30;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_chardet$utf8prober,
                const_str_plain_CodingStateMachine,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_CodingStateMachine );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_CodingStateMachine, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_mbcssm;
        tmp_globals_name_4 = (PyObject *)moduledict_chardet$utf8prober;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_UTF8_SM_MODEL_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_5837a10793c5b1d29168cc89e7579148->m_frame.f_lineno = 31;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_chardet$utf8prober,
                const_str_plain_UTF8_SM_MODEL,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_UTF8_SM_MODEL );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_UTF8_SM_MODEL, tmp_assign_source_9 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_CharSetProber );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CharSetProber );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CharSetProber" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_10 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_10, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases_orig == NULL );
        tmp_class_creation_1__bases_orig = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT( tmp_class_creation_1__bases_orig );
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_11 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
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


            exception_lineno = 35;

            goto try_except_handler_2;
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


            exception_lineno = 35;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_2;
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


            exception_lineno = 35;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_13 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_13;
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


            exception_lineno = 35;

            goto try_except_handler_2;
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


            exception_lineno = 35;

            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_14;
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


                exception_lineno = 35;

                goto try_except_handler_2;
            }
            tmp_tuple_element_2 = const_str_plain_UTF8Prober;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_5837a10793c5b1d29168cc89e7579148->m_frame.f_lineno = 35;
            tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_14;
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


                exception_lineno = 35;

                goto try_except_handler_2;
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


                    exception_lineno = 35;

                    goto try_except_handler_2;
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

                    exception_lineno = 35;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 35;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 35;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_15;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_chardet$utf8prober_35 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_d8e6e7d9079f49d27b12fc56c3d8725f;
        tmp_res = PyObject_SetItem( locals_chardet$utf8prober_35, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_UTF8Prober;
        tmp_res = PyObject_SetItem( locals_chardet$utf8prober_35, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_5ce4375122035b24331e1b284a4b068c_2, codeobj_5ce4375122035b24331e1b284a4b068c, module_chardet$utf8prober, sizeof(void *) );
        frame_5ce4375122035b24331e1b284a4b068c_2 = cache_frame_5ce4375122035b24331e1b284a4b068c_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_5ce4375122035b24331e1b284a4b068c_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_5ce4375122035b24331e1b284a4b068c_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_float_0_5;
        tmp_res = PyObject_SetItem( locals_chardet$utf8prober_35, const_str_plain_ONE_CHAR_PROB, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_chardet$utf8prober$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_chardet$utf8prober_35, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_chardet$utf8prober$$$function_2_reset(  );



        tmp_res = PyObject_SetItem( locals_chardet$utf8prober_35, const_str_plain_reset, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            tmp_res = MAPPING_HAS_ITEM( locals_chardet$utf8prober_35, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_3;
            }
            else
            {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_2 = PyObject_GetItem( locals_chardet$utf8prober_35, const_str_plain_property );

            if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = MAKE_FUNCTION_chardet$utf8prober$$$function_3_charset_name(  );



            frame_5ce4375122035b24331e1b284a4b068c_2->m_frame.f_lineno = 49;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_name_3 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_2 = MAKE_FUNCTION_chardet$utf8prober$$$function_3_charset_name(  );



            frame_5ce4375122035b24331e1b284a4b068c_2->m_frame.f_lineno = 49;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem( locals_chardet$utf8prober_35, const_str_plain_charset_name, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_4;
            tmp_res = MAPPING_HAS_ITEM( locals_chardet$utf8prober_35, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_4;
            }
            else
            {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_name_4 = PyObject_GetItem( locals_chardet$utf8prober_35, const_str_plain_property );

            if ( tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_3 = MAKE_FUNCTION_chardet$utf8prober$$$function_4_language(  );



            frame_5ce4375122035b24331e1b284a4b068c_2->m_frame.f_lineno = 53;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_name_5 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_4 = MAKE_FUNCTION_chardet$utf8prober$$$function_4_language(  );



            frame_5ce4375122035b24331e1b284a4b068c_2->m_frame.f_lineno = 53;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem( locals_chardet$utf8prober_35, const_str_plain_language, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_chardet$utf8prober$$$function_5_feed(  );



        tmp_res = PyObject_SetItem( locals_chardet$utf8prober_35, const_str_plain_feed, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_chardet$utf8prober$$$function_6_get_confidence(  );



        tmp_res = PyObject_SetItem( locals_chardet$utf8prober_35, const_str_plain_get_confidence, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_5ce4375122035b24331e1b284a4b068c_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_5ce4375122035b24331e1b284a4b068c_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_5ce4375122035b24331e1b284a4b068c_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_5ce4375122035b24331e1b284a4b068c_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_5ce4375122035b24331e1b284a4b068c_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_5ce4375122035b24331e1b284a4b068c_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_5ce4375122035b24331e1b284a4b068c_2 == cache_frame_5ce4375122035b24331e1b284a4b068c_2 )
        {
            Py_DECREF( frame_5ce4375122035b24331e1b284a4b068c_2 );
        }
        cache_frame_5ce4375122035b24331e1b284a4b068c_2 = NULL;

        assertFrameObject( frame_5ce4375122035b24331e1b284a4b068c_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_8;
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


                exception_lineno = 35;

                goto try_except_handler_4;
            }
            tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
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
            tmp_res = PyObject_SetItem( locals_chardet$utf8prober_35, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_6 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_UTF8Prober;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_chardet$utf8prober_35;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_5837a10793c5b1d29168cc89e7579148->m_frame.f_lineno = 35;
            tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_17;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_16 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_16 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( chardet$utf8prober );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_chardet$utf8prober_35 );
        locals_chardet$utf8prober_35 = NULL;
        goto try_return_handler_3;
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

        Py_DECREF( locals_chardet$utf8prober_35 );
        locals_chardet$utf8prober_35 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( chardet$utf8prober );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( chardet$utf8prober );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 35;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_UTF8Prober, tmp_assign_source_16 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5837a10793c5b1d29168cc89e7579148 );
#endif
    popFrameStack();

    assertFrameObject( frame_5837a10793c5b1d29168cc89e7579148 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5837a10793c5b1d29168cc89e7579148 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5837a10793c5b1d29168cc89e7579148, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5837a10793c5b1d29168cc89e7579148->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5837a10793c5b1d29168cc89e7579148, exception_lineno );
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


    return MOD_RETURN_VALUE( module_chardet$utf8prober );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
