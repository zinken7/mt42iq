/* Generated code for Python module 'iqoptionapi.http.resource'
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

/* The "_module_iqoptionapi$http$resource" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_iqoptionapi$http$resource;
PyDictObject *moduledict_iqoptionapi$http$resource;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_3d1e3403c95bcae118dede32c282674f;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_digest_09e296cfa727eeb2e180967f23870b46;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_data;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_api;
extern PyObject *const_str_plain_Resource;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_send_http_request;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_tuple_71c6ed27379bd94a54f3a58792ada17b_tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_91427b157f6ae2234823c6db523bfaea;
static PyObject *const_str_digest_86a4d8032dab8b455e864b7fa39f6e2f;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_6e510d033f719cf7f72a0867a6277bcf;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_95350a595b6f87e66ee6136a3c1d22f9;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_cca98c5fcf187136231c161446014c96;
static PyObject *const_str_digest_b468ba9a0a6a86979cba17c25fb67b8f;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_api_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_0f484125e8b00258d2880b1e9055b16c;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_3d1e3403c95bcae118dede32c282674f = UNSTREAM_STRING_ASCII( &constant_bin[ 650041 ], 56, 0 );
    const_tuple_71c6ed27379bd94a54f3a58792ada17b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_71c6ed27379bd94a54f3a58792ada17b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_71c6ed27379bd94a54f3a58792ada17b_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_71c6ed27379bd94a54f3a58792ada17b_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_71c6ed27379bd94a54f3a58792ada17b_tuple, 3, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_71c6ed27379bd94a54f3a58792ada17b_tuple, 4, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    const_str_digest_91427b157f6ae2234823c6db523bfaea = UNSTREAM_STRING_ASCII( &constant_bin[ 650097 ], 26, 0 );
    const_str_digest_86a4d8032dab8b455e864b7fa39f6e2f = UNSTREAM_STRING_ASCII( &constant_bin[ 650123 ], 350, 0 );
    const_str_digest_6e510d033f719cf7f72a0867a6277bcf = UNSTREAM_STRING_ASCII( &constant_bin[ 650473 ], 45, 0 );
    const_str_digest_cca98c5fcf187136231c161446014c96 = UNSTREAM_STRING_ASCII( &constant_bin[ 650518 ], 17, 0 );
    const_str_digest_b468ba9a0a6a86979cba17c25fb67b8f = UNSTREAM_STRING_ASCII( &constant_bin[ 650535 ], 34, 0 );
    const_str_digest_0f484125e8b00258d2880b1e9055b16c = UNSTREAM_STRING_ASCII( &constant_bin[ 650569 ], 43, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_iqoptionapi$http$resource( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ec37232dae99fa1e723e3c7bddcc4b73;
static PyCodeObject *codeobj_4a46900437677dce71b8d4f141162181;
static PyCodeObject *codeobj_fff645a1f97e48bd41bede0c57c7e699;
static PyCodeObject *codeobj_3916be10d8fa74704ead4f94f4a69ae3;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_3d1e3403c95bcae118dede32c282674f;
    codeobj_ec37232dae99fa1e723e3c7bddcc4b73 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b468ba9a0a6a86979cba17c25fb67b8f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_4a46900437677dce71b8d4f141162181 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Resource, 4, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_fff645a1f97e48bd41bede0c57c7e699 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 8, const_tuple_str_plain_self_str_plain_api_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3916be10d8fa74704ead4f94f4a69ae3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send_http_request, 15, const_tuple_71c6ed27379bd94a54f3a58792ada17b_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_iqoptionapi$http$resource$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_iqoptionapi$http$resource$$$function_2_send_http_request( PyObject *defaults );


// The module function definitions.
static PyObject *impl_iqoptionapi$http$resource$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_api = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_fff645a1f97e48bd41bede0c57c7e699;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fff645a1f97e48bd41bede0c57c7e699 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fff645a1f97e48bd41bede0c57c7e699, codeobj_fff645a1f97e48bd41bede0c57c7e699, module_iqoptionapi$http$resource, sizeof(void *)+sizeof(void *) );
    frame_fff645a1f97e48bd41bede0c57c7e699 = cache_frame_fff645a1f97e48bd41bede0c57c7e699;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fff645a1f97e48bd41bede0c57c7e699 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fff645a1f97e48bd41bede0c57c7e699 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_api );
        tmp_assattr_name_1 = par_api;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_api, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fff645a1f97e48bd41bede0c57c7e699 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fff645a1f97e48bd41bede0c57c7e699 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fff645a1f97e48bd41bede0c57c7e699, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fff645a1f97e48bd41bede0c57c7e699->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fff645a1f97e48bd41bede0c57c7e699, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fff645a1f97e48bd41bede0c57c7e699,
        type_description_1,
        par_self,
        par_api
    );


    // Release cached frame.
    if ( frame_fff645a1f97e48bd41bede0c57c7e699 == cache_frame_fff645a1f97e48bd41bede0c57c7e699 )
    {
        Py_DECREF( frame_fff645a1f97e48bd41bede0c57c7e699 );
    }
    cache_frame_fff645a1f97e48bd41bede0c57c7e699 = NULL;

    assertFrameObject( frame_fff645a1f97e48bd41bede0c57c7e699 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( iqoptionapi$http$resource$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_api );
    Py_DECREF( par_api );
    par_api = NULL;

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

    CHECK_OBJECT( (PyObject *)par_api );
    Py_DECREF( par_api );
    par_api = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( iqoptionapi$http$resource$$$function_1___init__ );
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


static PyObject *impl_iqoptionapi$http$resource$$$function_2_send_http_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *par_params = python_pars[ 3 ];
    PyObject *par_headers = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_3916be10d8fa74704ead4f94f4a69ae3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3916be10d8fa74704ead4f94f4a69ae3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3916be10d8fa74704ead4f94f4a69ae3, codeobj_3916be10d8fa74704ead4f94f4a69ae3, module_iqoptionapi$http$resource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3916be10d8fa74704ead4f94f4a69ae3 = cache_frame_3916be10d8fa74704ead4f94f4a69ae3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3916be10d8fa74704ead4f94f4a69ae3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3916be10d8fa74704ead4f94f4a69ae3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_api );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_send_http_request );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_tuple_element_1 = par_self;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_method );
        tmp_tuple_element_1 = par_method;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_data;
        CHECK_OBJECT( par_data );
        tmp_dict_value_1 = par_data;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_params;
        CHECK_OBJECT( par_params );
        tmp_dict_value_2 = par_params;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_headers;
        CHECK_OBJECT( par_headers );
        tmp_dict_value_3 = par_headers;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_3916be10d8fa74704ead4f94f4a69ae3->m_frame.f_lineno = 25;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3916be10d8fa74704ead4f94f4a69ae3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3916be10d8fa74704ead4f94f4a69ae3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3916be10d8fa74704ead4f94f4a69ae3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3916be10d8fa74704ead4f94f4a69ae3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3916be10d8fa74704ead4f94f4a69ae3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3916be10d8fa74704ead4f94f4a69ae3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3916be10d8fa74704ead4f94f4a69ae3,
        type_description_1,
        par_self,
        par_method,
        par_data,
        par_params,
        par_headers
    );


    // Release cached frame.
    if ( frame_3916be10d8fa74704ead4f94f4a69ae3 == cache_frame_3916be10d8fa74704ead4f94f4a69ae3 )
    {
        Py_DECREF( frame_3916be10d8fa74704ead4f94f4a69ae3 );
    }
    cache_frame_3916be10d8fa74704ead4f94f4a69ae3 = NULL;

    assertFrameObject( frame_3916be10d8fa74704ead4f94f4a69ae3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( iqoptionapi$http$resource$$$function_2_send_http_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

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

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( iqoptionapi$http$resource$$$function_2_send_http_request );
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



static PyObject *MAKE_FUNCTION_iqoptionapi$http$resource$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_iqoptionapi$http$resource$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_cca98c5fcf187136231c161446014c96,
#endif
        codeobj_fff645a1f97e48bd41bede0c57c7e699,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_iqoptionapi$http$resource,
        const_str_digest_95350a595b6f87e66ee6136a3c1d22f9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_iqoptionapi$http$resource$$$function_2_send_http_request( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_iqoptionapi$http$resource$$$function_2_send_http_request,
        const_str_plain_send_http_request,
#if PYTHON_VERSION >= 300
        const_str_digest_91427b157f6ae2234823c6db523bfaea,
#endif
        codeobj_3916be10d8fa74704ead4f94f4a69ae3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_iqoptionapi$http$resource,
        const_str_digest_86a4d8032dab8b455e864b7fa39f6e2f,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_iqoptionapi$http$resource =
{
    PyModuleDef_HEAD_INIT,
    "iqoptionapi.http.resource",
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
MOD_ENTRY_DECL(iqoptionapi$http$resource)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(iqoptionapi$http$resource)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_iqoptionapi$http$resource );
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
    puts("iqoptionapi.http.resource: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("iqoptionapi.http.resource: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("iqoptionapi.http.resource: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initiqoptionapi$http$resource" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_iqoptionapi$http$resource = Py_InitModule4(
        "iqoptionapi.http.resource",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_iqoptionapi$http$resource = PyModule_Create( &mdef_iqoptionapi$http$resource );
#endif

    moduledict_iqoptionapi$http$resource = MODULE_DICT( module_iqoptionapi$http$resource );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_iqoptionapi$http$resource,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_iqoptionapi$http$resource,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_iqoptionapi$http$resource,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_iqoptionapi$http$resource,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_iqoptionapi$http$resource );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_09e296cfa727eeb2e180967f23870b46, module_iqoptionapi$http$resource );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_ec37232dae99fa1e723e3c7bddcc4b73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_iqoptionapi$http$resource_4 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4a46900437677dce71b8d4f141162181_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4a46900437677dce71b8d4f141162181_2 = NULL;
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
        tmp_assign_source_1 = const_str_digest_6e510d033f719cf7f72a0867a6277bcf;
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_3d1e3403c95bcae118dede32c282674f;
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_ec37232dae99fa1e723e3c7bddcc4b73 = MAKE_MODULE_FRAME( codeobj_ec37232dae99fa1e723e3c7bddcc4b73, module_iqoptionapi$http$resource );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ec37232dae99fa1e723e3c7bddcc4b73 );
    assert( Py_REFCNT( frame_ec37232dae99fa1e723e3c7bddcc4b73 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_3d1e3403c95bcae118dede32c282674f;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_4 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
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
        tmp_assign_source_6 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_6;
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
            PyObject *tmp_assign_source_7;
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


                exception_lineno = 4;

                goto try_except_handler_1;
            }
            tmp_tuple_element_1 = const_str_plain_Resource;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_ec37232dae99fa1e723e3c7bddcc4b73->m_frame.f_lineno = 4;
            tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 4;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_7;
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


                    exception_lineno = 4;

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

                    exception_lineno = 4;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
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
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_8;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_iqoptionapi$http$resource_4 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_09e296cfa727eeb2e180967f23870b46;
        tmp_res = PyObject_SetItem( locals_iqoptionapi$http$resource_4, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_0f484125e8b00258d2880b1e9055b16c;
        tmp_res = PyObject_SetItem( locals_iqoptionapi$http$resource_4, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_Resource;
        tmp_res = PyObject_SetItem( locals_iqoptionapi$http$resource_4, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_4a46900437677dce71b8d4f141162181_2, codeobj_4a46900437677dce71b8d4f141162181, module_iqoptionapi$http$resource, sizeof(void *) );
        frame_4a46900437677dce71b8d4f141162181_2 = cache_frame_4a46900437677dce71b8d4f141162181_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_4a46900437677dce71b8d4f141162181_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_4a46900437677dce71b8d4f141162181_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_iqoptionapi$http$resource$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_iqoptionapi$http$resource_4, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_none_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_iqoptionapi$http$resource$$$function_2_send_http_request( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_iqoptionapi$http$resource_4, const_str_plain_send_http_request, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4a46900437677dce71b8d4f141162181_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4a46900437677dce71b8d4f141162181_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_4a46900437677dce71b8d4f141162181_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_4a46900437677dce71b8d4f141162181_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_4a46900437677dce71b8d4f141162181_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_4a46900437677dce71b8d4f141162181_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_4a46900437677dce71b8d4f141162181_2 == cache_frame_4a46900437677dce71b8d4f141162181_2 )
        {
            Py_DECREF( frame_4a46900437677dce71b8d4f141162181_2 );
        }
        cache_frame_4a46900437677dce71b8d4f141162181_2 = NULL;

        assertFrameObject( frame_4a46900437677dce71b8d4f141162181_2 );

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
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_iqoptionapi$http$resource_4, const_str_plain___orig_bases__, tmp_dictset_value );
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_Resource;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_iqoptionapi$http$resource_4;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_ec37232dae99fa1e723e3c7bddcc4b73->m_frame.f_lineno = 4;
            tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 4;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_10;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_9 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_9 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( iqoptionapi$http$resource );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_iqoptionapi$http$resource_4 );
        locals_iqoptionapi$http$resource_4 = NULL;
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

        Py_DECREF( locals_iqoptionapi$http$resource_4 );
        locals_iqoptionapi$http$resource_4 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( iqoptionapi$http$resource );
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
        NUITKA_CANNOT_GET_HERE( iqoptionapi$http$resource );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 4;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_iqoptionapi$http$resource, (Nuitka_StringObject *)const_str_plain_Resource, tmp_assign_source_9 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec37232dae99fa1e723e3c7bddcc4b73 );
#endif
    popFrameStack();

    assertFrameObject( frame_ec37232dae99fa1e723e3c7bddcc4b73 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec37232dae99fa1e723e3c7bddcc4b73 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ec37232dae99fa1e723e3c7bddcc4b73, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ec37232dae99fa1e723e3c7bddcc4b73->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ec37232dae99fa1e723e3c7bddcc4b73, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
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


    return MOD_RETURN_VALUE( module_iqoptionapi$http$resource );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
