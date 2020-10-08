/* Generated code for Python module 'websocket._utils'
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

/* The "_module_websocket$_utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websocket$_utils;
PyDictObject *moduledict_websocket$_utils;

/* The declarations of module constants used, if any. */
extern PyObject *const_int_pos_12;
static PyObject *const_str_plain__validate_utf8;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_traceback;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_4734dd87190cff37cf984267bc486207;
extern PyObject *const_str_plain_args;
static PyObject *const_tuple_str_plain_Utf8Validator_tuple;
extern PyObject *const_str_plain___exit__;
static PyObject *const_str_plain__UTF8_REJECT;
static PyObject *const_tuple_20bb1842c9c747df72beefeac201a040_tuple;
extern PyObject *const_str_plain_extract_err_message;
extern PyObject *const_str_plain_NoLock;
extern PyObject *const_str_plain_exception;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_validate;
extern PyObject *const_str_plain_validate_utf8;
static PyObject *const_tuple_str_plain_utfbytes_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_int_pos_63;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_Utf8Validator;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_six;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain_utfbytes;
static PyObject *const_tuple_str_plain_state_str_plain_codep_str_plain_ch_str_plain_tp_tuple;
static PyObject *const_str_plain__UTF8D;
static PyObject *const_str_digest_f26bb8d5561a63d3abe4e2d9998bfddb;
static PyObject *const_list_9d2fd676310a222c888f6a2af221e0af_list;
extern PyObject *const_str_plain_exc_type;
static PyObject *const_list_67901fdeb7ea58f0ea44406489995c76_list;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain__UTF8_ACCEPT;
extern PyObject *const_str_digest_22130fcaf4e9aaed33c6d1933650bd1b;
static PyObject *const_str_digest_6360c97e49a7767995c8ab745b52ba35;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_str_plain_exception_tuple;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_PY2;
static PyObject *const_str_digest_f36b536b7fab1fea1f9c714f63171665;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_tp;
static PyObject *const_str_digest_54e3b9d528b0108bd1ba58ba5dbe2d4e;
extern PyObject *const_str_plain_extract_error_code;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_256;
extern PyObject *const_str_plain_exc_value;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_int_pos_255;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_ch;
static PyObject *const_str_digest_669b9c893441219986e688feaebded15;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_696b94ff379749f7de07c7c046c5b53b;
extern PyObject *const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple;
extern PyObject *const_str_plain__decode;
static PyObject *const_str_plain_codep;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain__validate_utf8 = UNSTREAM_STRING_ASCII( &constant_bin[ 2866868 ], 14, 1 );
    const_str_digest_4734dd87190cff37cf984267bc486207 = UNSTREAM_STRING_ASCII( &constant_bin[ 2866882 ], 16, 0 );
    const_tuple_str_plain_Utf8Validator_tuple = PyTuple_New( 1 );
    const_str_plain_Utf8Validator = UNSTREAM_STRING_ASCII( &constant_bin[ 2866898 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Utf8Validator_tuple, 0, const_str_plain_Utf8Validator ); Py_INCREF( const_str_plain_Utf8Validator );
    const_str_plain__UTF8_REJECT = UNSTREAM_STRING_ASCII( &constant_bin[ 2866911 ], 12, 1 );
    const_tuple_20bb1842c9c747df72beefeac201a040_tuple = PyTuple_New( 4 );
    const_str_plain_utfbytes = UNSTREAM_STRING_ASCII( &constant_bin[ 2866923 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_20bb1842c9c747df72beefeac201a040_tuple, 0, const_str_plain_utfbytes ); Py_INCREF( const_str_plain_utfbytes );
    PyTuple_SET_ITEM( const_tuple_20bb1842c9c747df72beefeac201a040_tuple, 1, const_str_plain_state ); Py_INCREF( const_str_plain_state );
    const_str_plain_codep = UNSTREAM_STRING_ASCII( &constant_bin[ 467160 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_20bb1842c9c747df72beefeac201a040_tuple, 2, const_str_plain_codep ); Py_INCREF( const_str_plain_codep );
    PyTuple_SET_ITEM( const_tuple_20bb1842c9c747df72beefeac201a040_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_str_plain_utfbytes_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_utfbytes_tuple, 0, const_str_plain_utfbytes ); Py_INCREF( const_str_plain_utfbytes );
    const_tuple_str_plain_state_str_plain_codep_str_plain_ch_str_plain_tp_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_state_str_plain_codep_str_plain_ch_str_plain_tp_tuple, 0, const_str_plain_state ); Py_INCREF( const_str_plain_state );
    PyTuple_SET_ITEM( const_tuple_str_plain_state_str_plain_codep_str_plain_ch_str_plain_tp_tuple, 1, const_str_plain_codep ); Py_INCREF( const_str_plain_codep );
    PyTuple_SET_ITEM( const_tuple_str_plain_state_str_plain_codep_str_plain_ch_str_plain_tp_tuple, 2, const_str_plain_ch ); Py_INCREF( const_str_plain_ch );
    PyTuple_SET_ITEM( const_tuple_str_plain_state_str_plain_codep_str_plain_ch_str_plain_tp_tuple, 3, const_str_plain_tp ); Py_INCREF( const_str_plain_tp );
    const_str_plain__UTF8D = UNSTREAM_STRING_ASCII( &constant_bin[ 2866931 ], 6, 1 );
    const_str_digest_f26bb8d5561a63d3abe4e2d9998bfddb = UNSTREAM_STRING_ASCII( &constant_bin[ 2866937 ], 154, 0 );
    const_list_9d2fd676310a222c888f6a2af221e0af_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_9d2fd676310a222c888f6a2af221e0af_list, 0, const_str_plain_NoLock ); Py_INCREF( const_str_plain_NoLock );
    PyList_SET_ITEM( const_list_9d2fd676310a222c888f6a2af221e0af_list, 1, const_str_plain_validate_utf8 ); Py_INCREF( const_str_plain_validate_utf8 );
    PyList_SET_ITEM( const_list_9d2fd676310a222c888f6a2af221e0af_list, 2, const_str_plain_extract_err_message ); Py_INCREF( const_str_plain_extract_err_message );
    PyList_SET_ITEM( const_list_9d2fd676310a222c888f6a2af221e0af_list, 3, const_str_plain_extract_error_code ); Py_INCREF( const_str_plain_extract_error_code );
    const_list_67901fdeb7ea58f0ea44406489995c76_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2867091 ], 1825 );
    const_str_plain__UTF8_ACCEPT = UNSTREAM_STRING_ASCII( &constant_bin[ 2868916 ], 12, 1 );
    const_str_digest_6360c97e49a7767995c8ab745b52ba35 = UNSTREAM_STRING_ASCII( &constant_bin[ 2868928 ], 15, 0 );
    const_tuple_str_plain_exception_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_exception_tuple, 0, const_str_plain_exception ); Py_INCREF( const_str_plain_exception );
    const_str_digest_f36b536b7fab1fea1f9c714f63171665 = UNSTREAM_STRING_ASCII( &constant_bin[ 2868943 ], 47, 0 );
    const_str_digest_54e3b9d528b0108bd1ba58ba5dbe2d4e = UNSTREAM_STRING_ASCII( &constant_bin[ 2868990 ], 16, 0 );
    const_str_digest_669b9c893441219986e688feaebded15 = UNSTREAM_STRING_ASCII( &constant_bin[ 2869006 ], 25, 0 );
    const_str_digest_696b94ff379749f7de07c7c046c5b53b = UNSTREAM_STRING_ASCII( &constant_bin[ 2869031 ], 21, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_websocket$_utils( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_389c312537558c7ab043f78b62a97bf7;
static PyCodeObject *codeobj_da4c41081b2304cd4603bc60fba34e3f;
static PyCodeObject *codeobj_698dd97cbf32958157fc7d94067cd015;
static PyCodeObject *codeobj_1076a21f087141754d53152765484b10;
static PyCodeObject *codeobj_b825507e6b53ca796c0d7fd6638601ad;
static PyCodeObject *codeobj_b7b13983a0b7368100b93e738ae95bc6;
static PyCodeObject *codeobj_1b4f3f391e0b8d1f2c49a2b8d58eb6f6;
static PyCodeObject *codeobj_5c0db7d0c92a9737077b57ca950f7470;
static PyCodeObject *codeobj_b99d8af79d3b6beeb8369a9874c9262a;
static PyCodeObject *codeobj_6b3f35eb7f31241b7414353cd49cbcd1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_f36b536b7fab1fea1f9c714f63171665;
    codeobj_389c312537558c7ab043f78b62a97bf7 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_669b9c893441219986e688feaebded15, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_da4c41081b2304cd4603bc60fba34e3f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_NoLock, 27, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_698dd97cbf32958157fc7d94067cd015 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___enter__, 29, const_tuple_str_plain_self_tuple, 1, 0, CO_NOFREE );
    codeobj_1076a21f087141754d53152765484b10 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___exit__, 32, const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple, 4, 0, CO_NOFREE );
    codeobj_b825507e6b53ca796c0d7fd6638601ad = MAKE_CODEOBJ( module_filename_obj, const_str_plain__decode, 70, const_tuple_str_plain_state_str_plain_codep_str_plain_ch_str_plain_tp_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b7b13983a0b7368100b93e738ae95bc6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__validate_utf8, 40, const_tuple_str_plain_utfbytes_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1b4f3f391e0b8d1f2c49a2b8d58eb6f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__validate_utf8, 79, const_tuple_20bb1842c9c747df72beefeac201a040_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5c0db7d0c92a9737077b57ca950f7470 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_extract_err_message, 101, const_tuple_str_plain_exception_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b99d8af79d3b6beeb8369a9874c9262a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_extract_error_code, 108, const_tuple_str_plain_exception_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6b3f35eb7f31241b7414353cd49cbcd1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_validate_utf8, 92, const_tuple_str_plain_utfbytes_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_1___enter__(  );


static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_2___exit__(  );


static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_3__validate_utf8(  );


static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_4__decode(  );


static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_5__validate_utf8(  );


static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_6_validate_utf8(  );


static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_7_extract_err_message(  );


static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_8_extract_error_code(  );


// The module function definitions.
static PyObject *impl_websocket$_utils$$$function_1___enter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_1___enter__ );
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
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_1___enter__ );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_websocket$_utils$$$function_2___exit__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_exc_type = python_pars[ 1 ];
    PyObject *par_exc_value = python_pars[ 2 ];
    PyObject *par_traceback = python_pars[ 3 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_2___exit__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_exc_type );
    Py_DECREF( par_exc_type );
    par_exc_type = NULL;

    CHECK_OBJECT( (PyObject *)par_exc_value );
    Py_DECREF( par_exc_value );
    par_exc_value = NULL;

    CHECK_OBJECT( (PyObject *)par_traceback );
    Py_DECREF( par_traceback );
    par_traceback = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_exc_type );
    Py_DECREF( par_exc_type );
    par_exc_type = NULL;

    CHECK_OBJECT( (PyObject *)par_exc_value );
    Py_DECREF( par_exc_value );
    par_exc_value = NULL;

    CHECK_OBJECT( (PyObject *)par_traceback );
    Py_DECREF( par_traceback );
    par_traceback = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_2___exit__ );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_websocket$_utils$$$function_3__validate_utf8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_utfbytes = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b7b13983a0b7368100b93e738ae95bc6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b7b13983a0b7368100b93e738ae95bc6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b7b13983a0b7368100b93e738ae95bc6, codeobj_b7b13983a0b7368100b93e738ae95bc6, module_websocket$_utils, sizeof(void *) );
    frame_b7b13983a0b7368100b93e738ae95bc6 = cache_frame_b7b13983a0b7368100b93e738ae95bc6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b7b13983a0b7368100b93e738ae95bc6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b7b13983a0b7368100b93e738ae95bc6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain_Utf8Validator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Utf8Validator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Utf8Validator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_b7b13983a0b7368100b93e738ae95bc6->m_frame.f_lineno = 41;
        tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_utfbytes );
        tmp_args_element_name_1 = par_utfbytes;
        frame_b7b13983a0b7368100b93e738ae95bc6->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_validate, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7b13983a0b7368100b93e738ae95bc6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7b13983a0b7368100b93e738ae95bc6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7b13983a0b7368100b93e738ae95bc6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b7b13983a0b7368100b93e738ae95bc6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b7b13983a0b7368100b93e738ae95bc6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b7b13983a0b7368100b93e738ae95bc6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b7b13983a0b7368100b93e738ae95bc6,
        type_description_1,
        par_utfbytes
    );


    // Release cached frame.
    if ( frame_b7b13983a0b7368100b93e738ae95bc6 == cache_frame_b7b13983a0b7368100b93e738ae95bc6 )
    {
        Py_DECREF( frame_b7b13983a0b7368100b93e738ae95bc6 );
    }
    cache_frame_b7b13983a0b7368100b93e738ae95bc6 = NULL;

    assertFrameObject( frame_b7b13983a0b7368100b93e738ae95bc6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_3__validate_utf8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_utfbytes );
    Py_DECREF( par_utfbytes );
    par_utfbytes = NULL;

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

    CHECK_OBJECT( (PyObject *)par_utfbytes );
    Py_DECREF( par_utfbytes );
    par_utfbytes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_3__validate_utf8 );
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


static PyObject *impl_websocket$_utils$$$function_4__decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_state = python_pars[ 0 ];
    PyObject *par_codep = python_pars[ 1 ];
    PyObject *par_ch = python_pars[ 2 ];
    PyObject *var_tp = NULL;
    struct Nuitka_FrameObject *frame_b825507e6b53ca796c0d7fd6638601ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b825507e6b53ca796c0d7fd6638601ad = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b825507e6b53ca796c0d7fd6638601ad, codeobj_b825507e6b53ca796c0d7fd6638601ad, module_websocket$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b825507e6b53ca796c0d7fd6638601ad = cache_frame_b825507e6b53ca796c0d7fd6638601ad;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b825507e6b53ca796c0d7fd6638601ad );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b825507e6b53ca796c0d7fd6638601ad ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain__UTF8D );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UTF8D );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_UTF8D" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_ch );
        tmp_subscript_name_1 = par_ch;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_tp == NULL );
        var_tp = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_state );
        tmp_compexpr_left_1 = par_state;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain__UTF8_ACCEPT );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UTF8_ACCEPT );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_UTF8_ACCEPT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( par_ch );
        tmp_left_name_2 = par_ch;
        tmp_right_name_1 = const_int_pos_63;
        tmp_left_name_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_codep );
        tmp_left_name_3 = par_codep;
        tmp_right_name_3 = const_int_pos_6;
        tmp_right_name_2 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_left_name_5 = const_int_pos_255;
        CHECK_OBJECT( var_tp );
        tmp_right_name_4 = var_tp;
        tmp_left_name_4 = BINARY_OPERATION( PyNumber_Rshift, tmp_left_name_5, tmp_right_name_4 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ch );
        tmp_right_name_5 = par_ch;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_4, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        {
            PyObject *old = par_codep;
            assert( old != NULL );
            par_codep = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain__UTF8D );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UTF8D );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_UTF8D" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_2 = tmp_mvar_value_3;
        tmp_left_name_7 = const_int_pos_256;
        CHECK_OBJECT( par_state );
        tmp_right_name_6 = par_state;
        tmp_left_name_6 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_7, tmp_right_name_6 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_tp );
        tmp_right_name_7 = var_tp;
        tmp_subscript_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_subscript_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_state;
            assert( old != NULL );
            par_state = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b825507e6b53ca796c0d7fd6638601ad );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b825507e6b53ca796c0d7fd6638601ad );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b825507e6b53ca796c0d7fd6638601ad, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b825507e6b53ca796c0d7fd6638601ad->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b825507e6b53ca796c0d7fd6638601ad, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b825507e6b53ca796c0d7fd6638601ad,
        type_description_1,
        par_state,
        par_codep,
        par_ch,
        var_tp
    );


    // Release cached frame.
    if ( frame_b825507e6b53ca796c0d7fd6638601ad == cache_frame_b825507e6b53ca796c0d7fd6638601ad )
    {
        Py_DECREF( frame_b825507e6b53ca796c0d7fd6638601ad );
    }
    cache_frame_b825507e6b53ca796c0d7fd6638601ad = NULL;

    assertFrameObject( frame_b825507e6b53ca796c0d7fd6638601ad );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_state );
        tmp_tuple_element_1 = par_state;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_codep );
        tmp_tuple_element_1 = par_codep;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_4__decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    CHECK_OBJECT( (PyObject *)par_codep );
    Py_DECREF( par_codep );
    par_codep = NULL;

    CHECK_OBJECT( (PyObject *)par_ch );
    Py_DECREF( par_ch );
    par_ch = NULL;

    CHECK_OBJECT( (PyObject *)var_tp );
    Py_DECREF( var_tp );
    var_tp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    CHECK_OBJECT( (PyObject *)par_codep );
    Py_DECREF( par_codep );
    par_codep = NULL;

    CHECK_OBJECT( (PyObject *)par_ch );
    Py_DECREF( par_ch );
    par_ch = NULL;

    Py_XDECREF( var_tp );
    var_tp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_4__decode );
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


static PyObject *impl_websocket$_utils$$$function_5__validate_utf8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_utfbytes = python_pars[ 0 ];
    PyObject *var_state = NULL;
    PyObject *var_codep = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6;
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
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6, codeobj_1b4f3f391e0b8d1f2c49a2b8d58eb6f6, module_websocket$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6 = cache_frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain__UTF8_ACCEPT );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UTF8_ACCEPT );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_UTF8_ACCEPT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_1 = tmp_mvar_value_1;
        assert( var_state == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_state = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_0;
        assert( var_codep == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_codep = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_utfbytes );
        tmp_iter_arg_1 = par_utfbytes;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                exception_lineno = 82;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_5;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain_six );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PY2 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 83;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_ord_arg_1;
            CHECK_OBJECT( var_i );
            tmp_ord_arg_1 = var_i;
            tmp_assign_source_6 = BUILTIN_ORD( tmp_ord_arg_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_i;
                assert( old != NULL );
                var_i = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain__decode );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__decode );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_decode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 85;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_state );
        tmp_args_element_name_1 = var_state;
        CHECK_OBJECT( var_codep );
        tmp_args_element_name_2 = var_codep;
        CHECK_OBJECT( var_i );
        tmp_args_element_name_3 = var_i;
        frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_8 == NULL )
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


            type_description_1 = "oooo";
            exception_lineno = 85;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "oooo";
            exception_lineno = 85;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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

                    type_description_1 = "oooo";
                    exception_lineno = 85;
                    goto try_except_handler_4;
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

            type_description_1 = "oooo";
            exception_lineno = 85;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_state;
            assert( old != NULL );
            var_state = tmp_assign_source_10;
            Py_INCREF( var_state );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_codep;
            assert( old != NULL );
            var_codep = tmp_assign_source_11;
            Py_INCREF( var_codep );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( var_state );
        tmp_compexpr_left_1 = var_state;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain__UTF8_REJECT );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UTF8_REJECT );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_UTF8_REJECT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_4;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_2;
        branch_no_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6,
        type_description_1,
        par_utfbytes,
        var_state,
        var_codep,
        var_i
    );


    // Release cached frame.
    if ( frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6 == cache_frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6 )
    {
        Py_DECREF( frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6 );
    }
    cache_frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6 = NULL;

    assertFrameObject( frame_1b4f3f391e0b8d1f2c49a2b8d58eb6f6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_5__validate_utf8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_utfbytes );
    Py_DECREF( par_utfbytes );
    par_utfbytes = NULL;

    Py_XDECREF( var_state );
    var_state = NULL;

    Py_XDECREF( var_codep );
    var_codep = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_utfbytes );
    Py_DECREF( par_utfbytes );
    par_utfbytes = NULL;

    Py_XDECREF( var_state );
    var_state = NULL;

    Py_XDECREF( var_codep );
    var_codep = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_5__validate_utf8 );
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


static PyObject *impl_websocket$_utils$$$function_6_validate_utf8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_utfbytes = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_6b3f35eb7f31241b7414353cd49cbcd1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6b3f35eb7f31241b7414353cd49cbcd1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6b3f35eb7f31241b7414353cd49cbcd1, codeobj_6b3f35eb7f31241b7414353cd49cbcd1, module_websocket$_utils, sizeof(void *) );
    frame_6b3f35eb7f31241b7414353cd49cbcd1 = cache_frame_6b3f35eb7f31241b7414353cd49cbcd1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6b3f35eb7f31241b7414353cd49cbcd1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6b3f35eb7f31241b7414353cd49cbcd1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain__validate_utf8 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__validate_utf8 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_validate_utf8" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_utfbytes );
        tmp_args_element_name_1 = par_utfbytes;
        frame_6b3f35eb7f31241b7414353cd49cbcd1->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b3f35eb7f31241b7414353cd49cbcd1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b3f35eb7f31241b7414353cd49cbcd1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b3f35eb7f31241b7414353cd49cbcd1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6b3f35eb7f31241b7414353cd49cbcd1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6b3f35eb7f31241b7414353cd49cbcd1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6b3f35eb7f31241b7414353cd49cbcd1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6b3f35eb7f31241b7414353cd49cbcd1,
        type_description_1,
        par_utfbytes
    );


    // Release cached frame.
    if ( frame_6b3f35eb7f31241b7414353cd49cbcd1 == cache_frame_6b3f35eb7f31241b7414353cd49cbcd1 )
    {
        Py_DECREF( frame_6b3f35eb7f31241b7414353cd49cbcd1 );
    }
    cache_frame_6b3f35eb7f31241b7414353cd49cbcd1 = NULL;

    assertFrameObject( frame_6b3f35eb7f31241b7414353cd49cbcd1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_6_validate_utf8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_utfbytes );
    Py_DECREF( par_utfbytes );
    par_utfbytes = NULL;

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

    CHECK_OBJECT( (PyObject *)par_utfbytes );
    Py_DECREF( par_utfbytes );
    par_utfbytes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_6_validate_utf8 );
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


static PyObject *impl_websocket$_utils$$$function_7_extract_err_message( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_exception = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_5c0db7d0c92a9737077b57ca950f7470;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5c0db7d0c92a9737077b57ca950f7470 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5c0db7d0c92a9737077b57ca950f7470, codeobj_5c0db7d0c92a9737077b57ca950f7470, module_websocket$_utils, sizeof(void *) );
    frame_5c0db7d0c92a9737077b57ca950f7470 = cache_frame_5c0db7d0c92a9737077b57ca950f7470;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5c0db7d0c92a9737077b57ca950f7470 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5c0db7d0c92a9737077b57ca950f7470 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_exception );
        tmp_source_name_1 = par_exception;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_args );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_exception );
            tmp_source_name_2 = par_exception;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_args );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_0;
            tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c0db7d0c92a9737077b57ca950f7470 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c0db7d0c92a9737077b57ca950f7470 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c0db7d0c92a9737077b57ca950f7470 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5c0db7d0c92a9737077b57ca950f7470, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5c0db7d0c92a9737077b57ca950f7470->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5c0db7d0c92a9737077b57ca950f7470, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5c0db7d0c92a9737077b57ca950f7470,
        type_description_1,
        par_exception
    );


    // Release cached frame.
    if ( frame_5c0db7d0c92a9737077b57ca950f7470 == cache_frame_5c0db7d0c92a9737077b57ca950f7470 )
    {
        Py_DECREF( frame_5c0db7d0c92a9737077b57ca950f7470 );
    }
    cache_frame_5c0db7d0c92a9737077b57ca950f7470 = NULL;

    assertFrameObject( frame_5c0db7d0c92a9737077b57ca950f7470 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_7_extract_err_message );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_exception );
    Py_DECREF( par_exception );
    par_exception = NULL;

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

    CHECK_OBJECT( (PyObject *)par_exception );
    Py_DECREF( par_exception );
    par_exception = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_7_extract_err_message );
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


static PyObject *impl_websocket$_utils$$$function_8_extract_error_code( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_exception = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b99d8af79d3b6beeb8369a9874c9262a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b99d8af79d3b6beeb8369a9874c9262a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b99d8af79d3b6beeb8369a9874c9262a, codeobj_b99d8af79d3b6beeb8369a9874c9262a, module_websocket$_utils, sizeof(void *) );
    frame_b99d8af79d3b6beeb8369a9874c9262a = cache_frame_b99d8af79d3b6beeb8369a9874c9262a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b99d8af79d3b6beeb8369a9874c9262a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b99d8af79d3b6beeb8369a9874c9262a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_exception );
        tmp_source_name_1 = par_exception;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_args );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
        CHECK_OBJECT( par_exception );
        tmp_source_name_2 = par_exception;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_args );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_exception );
            tmp_source_name_3 = par_exception;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_args );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_0;
            tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_isinstance_inst_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            Py_DECREF( tmp_isinstance_inst_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "o";
                goto frame_exception_exit_1;
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
            CHECK_OBJECT( par_exception );
            tmp_source_name_4 = par_exception;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_args );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_2 = const_int_0;
            tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            Py_DECREF( tmp_subscribed_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_return_value = Py_None;
            Py_INCREF( tmp_return_value );
            condexpr_end_1:;
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b99d8af79d3b6beeb8369a9874c9262a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b99d8af79d3b6beeb8369a9874c9262a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b99d8af79d3b6beeb8369a9874c9262a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b99d8af79d3b6beeb8369a9874c9262a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b99d8af79d3b6beeb8369a9874c9262a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b99d8af79d3b6beeb8369a9874c9262a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b99d8af79d3b6beeb8369a9874c9262a,
        type_description_1,
        par_exception
    );


    // Release cached frame.
    if ( frame_b99d8af79d3b6beeb8369a9874c9262a == cache_frame_b99d8af79d3b6beeb8369a9874c9262a )
    {
        Py_DECREF( frame_b99d8af79d3b6beeb8369a9874c9262a );
    }
    cache_frame_b99d8af79d3b6beeb8369a9874c9262a = NULL;

    assertFrameObject( frame_b99d8af79d3b6beeb8369a9874c9262a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_8_extract_error_code );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_exception );
    Py_DECREF( par_exception );
    par_exception = NULL;

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

    CHECK_OBJECT( (PyObject *)par_exception );
    Py_DECREF( par_exception );
    par_exception = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_utils$$$function_8_extract_error_code );
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



static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_1___enter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_utils$$$function_1___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 300
        const_str_digest_54e3b9d528b0108bd1ba58ba5dbe2d4e,
#endif
        codeobj_698dd97cbf32958157fc7d94067cd015,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_2___exit__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_utils$$$function_2___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 300
        const_str_digest_6360c97e49a7767995c8ab745b52ba35,
#endif
        codeobj_1076a21f087141754d53152765484b10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_3__validate_utf8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_utils$$$function_3__validate_utf8,
        const_str_plain__validate_utf8,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b7b13983a0b7368100b93e738ae95bc6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_4__decode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_utils$$$function_4__decode,
        const_str_plain__decode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b825507e6b53ca796c0d7fd6638601ad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_5__validate_utf8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_utils$$$function_5__validate_utf8,
        const_str_plain__validate_utf8,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1b4f3f391e0b8d1f2c49a2b8d58eb6f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_6_validate_utf8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_utils$$$function_6_validate_utf8,
        const_str_plain_validate_utf8,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6b3f35eb7f31241b7414353cd49cbcd1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_utils,
        const_str_digest_f26bb8d5561a63d3abe4e2d9998bfddb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_7_extract_err_message(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_utils$$$function_7_extract_err_message,
        const_str_plain_extract_err_message,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5c0db7d0c92a9737077b57ca950f7470,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_utils$$$function_8_extract_error_code(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_utils$$$function_8_extract_error_code,
        const_str_plain_extract_error_code,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b99d8af79d3b6beeb8369a9874c9262a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_websocket$_utils =
{
    PyModuleDef_HEAD_INIT,
    "websocket._utils",
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
MOD_ENTRY_DECL(websocket$_utils)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(websocket$_utils)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_websocket$_utils );
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
    puts("websocket._utils: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("websocket._utils: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("websocket._utils: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initwebsocket$_utils" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_websocket$_utils = Py_InitModule4(
        "websocket._utils",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_websocket$_utils = PyModule_Create( &mdef_websocket$_utils );
#endif

    moduledict_websocket$_utils = MODULE_DICT( module_websocket$_utils );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_websocket$_utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_websocket$_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_websocket$_utils );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_4734dd87190cff37cf984267bc486207, module_websocket$_utils );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_389c312537558c7ab043f78b62a97bf7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_websocket$_utils_27 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_da4c41081b2304cd4603bc60fba34e3f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_da4c41081b2304cd4603bc60fba34e3f_2 = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_22130fcaf4e9aaed33c6d1933650bd1b;
        UPDATE_STRING_DICT0( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_f36b536b7fab1fea1f9c714f63171665;
        UPDATE_STRING_DICT0( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_389c312537558c7ab043f78b62a97bf7 = MAKE_MODULE_FRAME( codeobj_389c312537558c7ab043f78b62a97bf7, module_websocket$_utils );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_389c312537558c7ab043f78b62a97bf7 );
    assert( Py_REFCNT( frame_389c312537558c7ab043f78b62a97bf7 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_f36b536b7fab1fea1f9c714f63171665;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_six;
        tmp_globals_name_1 = (PyObject *)moduledict_websocket$_utils;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_389c312537558c7ab043f78b62a97bf7->m_frame.f_lineno = 22;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = LIST_COPY( const_list_9d2fd676310a222c888f6a2af221e0af_list );
        UPDATE_STRING_DICT1( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_6 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
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


            exception_lineno = 27;

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


            exception_lineno = 27;

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


            exception_lineno = 27;

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


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

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
        tmp_assign_source_8 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_8;
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


            exception_lineno = 27;

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


            exception_lineno = 27;

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
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;

                goto try_except_handler_1;
            }
            tmp_tuple_element_1 = const_str_plain_NoLock;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_389c312537558c7ab043f78b62a97bf7->m_frame.f_lineno = 27;
            tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_9;
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


                exception_lineno = 27;

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
                PyObject *tmp_tuple_element_2;
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
                tmp_tuple_element_2 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 27;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 27;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 27;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 27;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_10;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_websocket$_utils_27 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4734dd87190cff37cf984267bc486207;
        tmp_res = PyObject_SetItem( locals_websocket$_utils_27, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_NoLock;
        tmp_res = PyObject_SetItem( locals_websocket$_utils_27, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_da4c41081b2304cd4603bc60fba34e3f_2, codeobj_da4c41081b2304cd4603bc60fba34e3f, module_websocket$_utils, sizeof(void *) );
        frame_da4c41081b2304cd4603bc60fba34e3f_2 = cache_frame_da4c41081b2304cd4603bc60fba34e3f_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_da4c41081b2304cd4603bc60fba34e3f_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_da4c41081b2304cd4603bc60fba34e3f_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_websocket$_utils$$$function_1___enter__(  );



        tmp_res = PyObject_SetItem( locals_websocket$_utils_27, const_str_plain___enter__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_utils$$$function_2___exit__(  );



        tmp_res = PyObject_SetItem( locals_websocket$_utils_27, const_str_plain___exit__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_da4c41081b2304cd4603bc60fba34e3f_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_da4c41081b2304cd4603bc60fba34e3f_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_da4c41081b2304cd4603bc60fba34e3f_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_da4c41081b2304cd4603bc60fba34e3f_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_da4c41081b2304cd4603bc60fba34e3f_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_da4c41081b2304cd4603bc60fba34e3f_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_da4c41081b2304cd4603bc60fba34e3f_2 == cache_frame_da4c41081b2304cd4603bc60fba34e3f_2 )
        {
            Py_DECREF( frame_da4c41081b2304cd4603bc60fba34e3f_2 );
        }
        cache_frame_da4c41081b2304cd4603bc60fba34e3f_2 = NULL;

        assertFrameObject( frame_da4c41081b2304cd4603bc60fba34e3f_2 );

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
            tmp_compexpr_right_1 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;

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
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_websocket$_utils_27, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_NoLock;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_websocket$_utils_27;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_389c312537558c7ab043f78b62a97bf7->m_frame.f_lineno = 27;
            tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_12;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_11 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_11 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_utils );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_websocket$_utils_27 );
        locals_websocket$_utils_27 = NULL;
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

        Py_DECREF( locals_websocket$_utils_27 );
        locals_websocket$_utils_27 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_utils );
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
        NUITKA_CANNOT_GET_HERE( websocket$_utils );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 27;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain_NoLock, tmp_assign_source_11 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_696b94ff379749f7de07c7c046c5b53b;
        tmp_globals_name_2 = (PyObject *)moduledict_websocket$_utils;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_Utf8Validator_tuple;
        tmp_level_name_2 = const_int_0;
        frame_389c312537558c7ab043f78b62a97bf7->m_frame.f_lineno = 38;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Utf8Validator );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain_Utf8Validator, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_websocket$_utils$$$function_3__validate_utf8(  );



        UPDATE_STRING_DICT1( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain__validate_utf8, tmp_assign_source_14 );
    }
    goto try_end_2;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_389c312537558c7ab043f78b62a97bf7, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_389c312537558c7ab043f78b62a97bf7, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

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
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = const_int_0;
            UPDATE_STRING_DICT0( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain__UTF8_ACCEPT, tmp_assign_source_15 );
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = const_int_pos_12;
            UPDATE_STRING_DICT0( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain__UTF8_REJECT, tmp_assign_source_16 );
        }
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = LIST_COPY( const_list_67901fdeb7ea58f0ea44406489995c76_list );
            UPDATE_STRING_DICT1( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain__UTF8D, tmp_assign_source_17 );
        }
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = MAKE_FUNCTION_websocket$_utils$$$function_4__decode(  );



            UPDATE_STRING_DICT1( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain__decode, tmp_assign_source_18 );
        }
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = MAKE_FUNCTION_websocket$_utils$$$function_5__validate_utf8(  );



            UPDATE_STRING_DICT1( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain__validate_utf8, tmp_assign_source_19 );
        }
        goto branch_end_5;
        branch_no_5:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 35;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_389c312537558c7ab043f78b62a97bf7->m_frame) frame_389c312537558c7ab043f78b62a97bf7->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_5;
        branch_end_5:;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
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
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_utils );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_389c312537558c7ab043f78b62a97bf7 );
#endif
    popFrameStack();

    assertFrameObject( frame_389c312537558c7ab043f78b62a97bf7 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_389c312537558c7ab043f78b62a97bf7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_389c312537558c7ab043f78b62a97bf7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_389c312537558c7ab043f78b62a97bf7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_389c312537558c7ab043f78b62a97bf7, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_websocket$_utils$$$function_6_validate_utf8(  );



        UPDATE_STRING_DICT1( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain_validate_utf8, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_websocket$_utils$$$function_7_extract_err_message(  );



        UPDATE_STRING_DICT1( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain_extract_err_message, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_websocket$_utils$$$function_8_extract_error_code(  );



        UPDATE_STRING_DICT1( moduledict_websocket$_utils, (Nuitka_StringObject *)const_str_plain_extract_error_code, tmp_assign_source_22 );
    }

    return MOD_RETURN_VALUE( module_websocket$_utils );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
