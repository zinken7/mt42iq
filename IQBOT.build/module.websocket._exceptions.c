/* Generated code for Python module 'websocket._exceptions'
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

/* The "_module_websocket$_exceptions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websocket$_exceptions;
PyDictObject *moduledict_websocket$_exceptions;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_fdb9fa22d66466ee204d11cd5bc3c534;
extern PyObject *const_tuple_type_Exception_tuple;
static PyObject *const_str_digest_83899a3420c86375d3cb4e2fb3542ad6;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_fd265b3e5387b684277f763212229136;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_ec9d82b67b6507b3fde99e1649de3d5c;
extern PyObject *const_str_plain_status_message;
extern PyObject *const_str_plain_WebSocketAddressException;
extern PyObject *const_str_plain_resp_headers;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_WebSocketBadStatusException;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_WebSocketProxyException;
extern PyObject *const_str_plain_WebSocketPayloadException;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_WebSocketException;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_09d4cbd8030ddbbbda5bbf692812669f;
static PyObject *const_str_digest_707a55a164a726c4d61f5bcf7eaa2d2a;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_WebSocketTimeoutException;
static PyObject *const_str_digest_4809149f6a9665c003d8f98b8c4b7103;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_digest_6fc4ed4d6fa397c0103d45e9c12271f9;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_WebSocketConnectionClosedException;
static PyObject *const_str_digest_43301c6afaaa69a8c5353bcc67e684a7;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_WebSocketProtocolException;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_78c4163eb25dc3d5189e9041e0d44ecd;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_status_code;
static PyObject *const_str_digest_2d73d3e4e590722f82317909c7e0d224;
static PyObject *const_str_digest_85893a1d8298dfab9d1ea27a20ce9c3b;
static PyObject *const_str_digest_0f2dd5905890f1fd0709147b654cd1b9;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_tuple_c0b1d6367375a902d081969acae6ebfd_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_fdb9fa22d66466ee204d11cd5bc3c534 = UNSTREAM_STRING_ASCII( &constant_bin[ 2862655 ], 92, 0 );
    const_str_digest_83899a3420c86375d3cb4e2fb3542ad6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2862747 ], 78, 0 );
    const_str_digest_fd265b3e5387b684277f763212229136 = UNSTREAM_STRING_ASCII( &constant_bin[ 2862825 ], 91, 0 );
    const_str_digest_ec9d82b67b6507b3fde99e1649de3d5c = UNSTREAM_STRING_ASCII( &constant_bin[ 2862916 ], 87, 0 );
    const_str_digest_09d4cbd8030ddbbbda5bbf692812669f = UNSTREAM_STRING_ASCII( &constant_bin[ 2863003 ], 36, 0 );
    const_str_digest_707a55a164a726c4d61f5bcf7eaa2d2a = UNSTREAM_STRING_ASCII( &constant_bin[ 2863039 ], 75, 0 );
    const_str_digest_4809149f6a9665c003d8f98b8c4b7103 = UNSTREAM_STRING_ASCII( &constant_bin[ 2863114 ], 30, 0 );
    const_str_digest_43301c6afaaa69a8c5353bcc67e684a7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2863144 ], 52, 0 );
    const_str_digest_78c4163eb25dc3d5189e9041e0d44ecd = UNSTREAM_STRING_ASCII( &constant_bin[ 2863196 ], 77, 0 );
    const_str_digest_2d73d3e4e590722f82317909c7e0d224 = UNSTREAM_STRING_ASCII( &constant_bin[ 2863273 ], 113, 0 );
    const_str_digest_85893a1d8298dfab9d1ea27a20ce9c3b = UNSTREAM_STRING_ASCII( &constant_bin[ 2863386 ], 36, 0 );
    const_str_digest_0f2dd5905890f1fd0709147b654cd1b9 = UNSTREAM_STRING_ASCII( &constant_bin[ 2863122 ], 21, 0 );
    const_tuple_c0b1d6367375a902d081969acae6ebfd_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_c0b1d6367375a902d081969acae6ebfd_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c0b1d6367375a902d081969acae6ebfd_tuple, 1, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_c0b1d6367375a902d081969acae6ebfd_tuple, 2, const_str_plain_status_code ); Py_INCREF( const_str_plain_status_code );
    PyTuple_SET_ITEM( const_tuple_c0b1d6367375a902d081969acae6ebfd_tuple, 3, const_str_plain_status_message ); Py_INCREF( const_str_plain_status_message );
    PyTuple_SET_ITEM( const_tuple_c0b1d6367375a902d081969acae6ebfd_tuple, 4, const_str_plain_resp_headers ); Py_INCREF( const_str_plain_resp_headers );
    PyTuple_SET_ITEM( const_tuple_c0b1d6367375a902d081969acae6ebfd_tuple, 5, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_c0b1d6367375a902d081969acae6ebfd_tuple, 6, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_websocket$_exceptions( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_08037fd68b836f698afc7286059cc04c;
static PyCodeObject *codeobj_0943ae7daae40d3285fa380d6c74cf78;
static PyCodeObject *codeobj_df10a2ac038dd424b6fb542ae636d67b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_43301c6afaaa69a8c5353bcc67e684a7;
    codeobj_08037fd68b836f698afc7286059cc04c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4809149f6a9665c003d8f98b8c4b7103, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_0943ae7daae40d3285fa380d6c74cf78 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_WebSocketBadStatusException, 72, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_df10a2ac038dd424b6fb542ae636d67b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 77, const_tuple_c0b1d6367375a902d081969acae6ebfd_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_websocket$_exceptions$$$function_1___init__( PyObject *defaults );


// The module function definitions.
static PyObject *impl_websocket$_exceptions$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_message = python_pars[ 1 ];
    PyObject *par_status_code = python_pars[ 2 ];
    PyObject *par_status_message = python_pars[ 3 ];
    PyObject *par_resp_headers = python_pars[ 4 ];
    PyObject *var_msg = NULL;
    struct Nuitka_FrameObject *frame_df10a2ac038dd424b6fb542ae636d67b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_df10a2ac038dd424b6fb542ae636d67b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_df10a2ac038dd424b6fb542ae636d67b, codeobj_df10a2ac038dd424b6fb542ae636d67b, module_websocket$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_df10a2ac038dd424b6fb542ae636d67b = cache_frame_df10a2ac038dd424b6fb542ae636d67b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_df10a2ac038dd424b6fb542ae636d67b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_df10a2ac038dd424b6fb542ae636d67b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_message );
        tmp_left_name_1 = par_message;
        CHECK_OBJECT( par_status_code );
        tmp_tuple_element_1 = par_status_code;
        tmp_right_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_status_message );
        tmp_tuple_element_1 = par_status_message;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_msg == NULL );
        var_msg = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketBadStatusException );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WebSocketBadStatusException );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WebSocketBadStatusException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 79;
            type_description_1 = "ooooooN";
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


            exception_lineno = 79;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_msg );
        tmp_args_element_name_1 = var_msg;
        frame_df10a2ac038dd424b6fb542ae636d67b->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_status_code );
        tmp_assattr_name_1 = par_status_code;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_status_code, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_resp_headers );
        tmp_assattr_name_2 = par_resp_headers;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_resp_headers, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooooN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df10a2ac038dd424b6fb542ae636d67b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df10a2ac038dd424b6fb542ae636d67b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_df10a2ac038dd424b6fb542ae636d67b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_df10a2ac038dd424b6fb542ae636d67b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_df10a2ac038dd424b6fb542ae636d67b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_df10a2ac038dd424b6fb542ae636d67b,
        type_description_1,
        par_self,
        par_message,
        par_status_code,
        par_status_message,
        par_resp_headers,
        var_msg,
        NULL
    );


    // Release cached frame.
    if ( frame_df10a2ac038dd424b6fb542ae636d67b == cache_frame_df10a2ac038dd424b6fb542ae636d67b )
    {
        Py_DECREF( frame_df10a2ac038dd424b6fb542ae636d67b );
    }
    cache_frame_df10a2ac038dd424b6fb542ae636d67b = NULL;

    assertFrameObject( frame_df10a2ac038dd424b6fb542ae636d67b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_exceptions$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_status_code );
    Py_DECREF( par_status_code );
    par_status_code = NULL;

    CHECK_OBJECT( (PyObject *)par_status_message );
    Py_DECREF( par_status_message );
    par_status_message = NULL;

    CHECK_OBJECT( (PyObject *)par_resp_headers );
    Py_DECREF( par_resp_headers );
    par_resp_headers = NULL;

    CHECK_OBJECT( (PyObject *)var_msg );
    Py_DECREF( var_msg );
    var_msg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_status_code );
    Py_DECREF( par_status_code );
    par_status_code = NULL;

    CHECK_OBJECT( (PyObject *)par_status_message );
    Py_DECREF( par_status_message );
    par_status_message = NULL;

    CHECK_OBJECT( (PyObject *)par_resp_headers );
    Py_DECREF( par_resp_headers );
    par_resp_headers = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_exceptions$$$function_1___init__ );
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



static PyObject *MAKE_FUNCTION_websocket$_exceptions$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_exceptions$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_85893a1d8298dfab9d1ea27a20ce9c3b,
#endif
        codeobj_df10a2ac038dd424b6fb542ae636d67b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_exceptions,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_websocket$_exceptions =
{
    PyModuleDef_HEAD_INIT,
    "websocket._exceptions",
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
MOD_ENTRY_DECL(websocket$_exceptions)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(websocket$_exceptions)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_websocket$_exceptions );
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
    puts("websocket._exceptions: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("websocket._exceptions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("websocket._exceptions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initwebsocket$_exceptions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_websocket$_exceptions = Py_InitModule4(
        "websocket._exceptions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_websocket$_exceptions = PyModule_Create( &mdef_websocket$_exceptions );
#endif

    moduledict_websocket$_exceptions = MODULE_DICT( module_websocket$_exceptions );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_websocket$_exceptions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_websocket$_exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_websocket$_exceptions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_0f2dd5905890f1fd0709147b654cd1b9, module_websocket$_exceptions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    struct Nuitka_FrameObject *frame_08037fd68b836f698afc7286059cc04c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_websocket$_exceptions_29 = NULL;
    PyObject *tmp_dictset_value;
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
    PyObject *locals_websocket$_exceptions_36 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_websocket$_exceptions_43 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_websocket$_exceptions_50 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_websocket$_exceptions_58 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_websocket$_exceptions_65 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_websocket$_exceptions_72 = NULL;
    struct Nuitka_FrameObject *frame_0943ae7daae40d3285fa380d6c74cf78_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0943ae7daae40d3285fa380d6c74cf78_2 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_websocket$_exceptions_83 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_6fc4ed4d6fa397c0103d45e9c12271f9;
        UPDATE_STRING_DICT0( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_43301c6afaaa69a8c5353bcc67e684a7;
        UPDATE_STRING_DICT0( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_08037fd68b836f698afc7286059cc04c = MAKE_MODULE_FRAME( codeobj_08037fd68b836f698afc7286059cc04c, module_websocket$_exceptions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_08037fd68b836f698afc7286059cc04c );
    assert( Py_REFCNT( frame_08037fd68b836f698afc7286059cc04c ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_43301c6afaaa69a8c5353bcc67e684a7;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_Exception_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_4 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

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


            exception_lineno = 29;

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


            exception_lineno = 29;

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


            exception_lineno = 29;

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


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

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


            exception_lineno = 29;

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


            exception_lineno = 29;

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


            exception_lineno = 29;

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


                exception_lineno = 29;

                goto try_except_handler_1;
            }
            tmp_tuple_element_1 = const_str_plain_WebSocketException;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 29;
            tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;

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


                exception_lineno = 29;

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


                    exception_lineno = 29;

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

                    exception_lineno = 29;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 29;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 29;
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
            locals_websocket$_exceptions_29 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_0f2dd5905890f1fd0709147b654cd1b9;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_29, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_09d4cbd8030ddbbbda5bbf692812669f;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_29, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_WebSocketException;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_29, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = const_tuple_type_Exception_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;

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
            tmp_dictset_value = const_tuple_type_Exception_tuple;
            tmp_res = PyObject_SetItem( locals_websocket$_exceptions_29, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;

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
            tmp_tuple_element_3 = const_str_plain_WebSocketException;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_websocket$_exceptions_29;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 29;
            tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;

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
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_websocket$_exceptions_29 );
        locals_websocket$_exceptions_29 = NULL;
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

        Py_DECREF( locals_websocket$_exceptions_29 );
        locals_websocket$_exceptions_29 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
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
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 29;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketException, tmp_assign_source_9 );
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketException );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WebSocketException );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WebSocketException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;

            goto try_except_handler_4;
        }

        tmp_tuple_element_4 = tmp_mvar_value_3;
        tmp_assign_source_11 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_4 );
        assert( tmp_class_creation_2__bases_orig == NULL );
        tmp_class_creation_2__bases_orig = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT( tmp_class_creation_2__bases_orig );
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_12 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_4;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_4;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_4;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_2 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_4;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_14 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_4;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_4;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_5 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___prepare__ );
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_4;
            }
            tmp_tuple_element_5 = const_str_plain_WebSocketProtocolException;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_5 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 36;
            tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_15;
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_7 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_4;
            }
            tmp_condition_result_11 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_7;
            }
            else
            {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_6 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 36;

                    goto try_except_handler_4;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_6 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_8 == NULL) );
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 36;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_6 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 36;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 36;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_16;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_websocket$_exceptions_36 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_0f2dd5905890f1fd0709147b654cd1b9;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_36, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_83899a3420c86375d3cb4e2fb3542ad6;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_36, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_WebSocketProtocolException;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_36, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_6;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_compexpr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_6;
            }
            tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_dictset_value = tmp_class_creation_2__bases_orig;
            tmp_res = PyObject_SetItem( locals_websocket$_exceptions_36, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_6;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = const_str_plain_WebSocketProtocolException;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_7 );
            tmp_tuple_element_7 = locals_websocket$_exceptions_36;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 36;
            tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_6;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_17 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_17 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_websocket$_exceptions_36 );
        locals_websocket$_exceptions_36 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_websocket$_exceptions_36 );
        locals_websocket$_exceptions_36 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 36;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketProtocolException, tmp_assign_source_17 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases_orig );
    tmp_class_creation_2__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases_orig );
    Py_DECREF( tmp_class_creation_2__bases_orig );
    tmp_class_creation_2__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketException );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WebSocketException );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WebSocketException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 43;

            goto try_except_handler_7;
        }

        tmp_tuple_element_8 = tmp_mvar_value_4;
        tmp_assign_source_19 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_assign_source_19, 0, tmp_tuple_element_8 );
        assert( tmp_class_creation_3__bases_orig == NULL );
        tmp_class_creation_3__bases_orig = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT( tmp_class_creation_3__bases_orig );
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF( tmp_dircall_arg1_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_20 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_class_creation_3__bases );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_6;
        }
        else
        {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_subscribed_name_3 = tmp_class_creation_3__bases;
        tmp_subscript_name_3 = const_int_0;
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_type_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
        Py_DECREF( tmp_type_arg_5 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_3 );
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_22 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        tmp_key_name_9 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_9 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___prepare__ );
        tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_10 = tmp_class_creation_3__metaclass;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;

                goto try_except_handler_7;
            }
            tmp_tuple_element_9 = const_str_plain_WebSocketPayloadException;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 43;
            tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;

                goto try_except_handler_7;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_23;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_11 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_11, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;

                goto try_except_handler_7;
            }
            tmp_condition_result_17 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_11;
            }
            else
            {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_12;
                PyObject *tmp_type_arg_6;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_10 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 43;

                    goto try_except_handler_7;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_10 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_6 = tmp_class_creation_3__prepared;
                tmp_source_name_12 = BUILTIN_TYPE1( tmp_type_arg_6 );
                assert( !(tmp_source_name_12 == NULL) );
                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_tuple_element_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 43;

                    goto try_except_handler_7;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_10 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 43;

                    goto try_except_handler_7;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 43;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_7;
            }
            branch_no_11:;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_24;
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_websocket$_exceptions_43 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_0f2dd5905890f1fd0709147b654cd1b9;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_43, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_digest_78c4163eb25dc3d5189e9041e0d44ecd;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_43, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_plain_WebSocketPayloadException;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_43, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto try_except_handler_9;
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_compexpr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT( tmp_class_creation_3__bases_orig );
            tmp_compexpr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;

                goto try_except_handler_9;
            }
            tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            CHECK_OBJECT( tmp_class_creation_3__bases_orig );
            tmp_dictset_value = tmp_class_creation_3__bases_orig;
            tmp_res = PyObject_SetItem( locals_websocket$_exceptions_43, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;

                goto try_except_handler_9;
            }
            branch_no_12:;
        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_11 = const_str_plain_WebSocketPayloadException;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_11 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_11 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_11 );
            tmp_tuple_element_11 = locals_websocket$_exceptions_43;
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_11 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 43;
            tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;

                goto try_except_handler_9;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_25 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_25 );
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF( locals_websocket$_exceptions_43 );
        locals_websocket$_exceptions_43 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_websocket$_exceptions_43 );
        locals_websocket$_exceptions_43 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 43;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketPayloadException, tmp_assign_source_25 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases_orig );
    tmp_class_creation_3__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases_orig );
    Py_DECREF( tmp_class_creation_3__bases_orig );
    tmp_class_creation_3__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketException );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WebSocketException );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WebSocketException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;

            goto try_except_handler_10;
        }

        tmp_tuple_element_12 = tmp_mvar_value_5;
        tmp_assign_source_27 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_12 );
        assert( tmp_class_creation_4__bases_orig == NULL );
        tmp_class_creation_4__bases_orig = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT( tmp_class_creation_4__bases_orig );
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF( tmp_dircall_arg1_4 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_28 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = PyDict_New();
        assert( tmp_class_creation_4__class_decl_dict == NULL );
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_key_name_11;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_10;
        }
        tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_7;
        }
        else
        {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = const_str_plain_metaclass;
        tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_10;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_class_creation_4__bases );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_10;
        }
        tmp_condition_result_20 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_8;
        }
        else
        {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_subscribed_name_4 = tmp_class_creation_4__bases;
        tmp_subscript_name_4 = const_int_0;
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        if ( tmp_type_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_10;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_7 );
        Py_DECREF( tmp_type_arg_7 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_10;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_4 );
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_30 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
        Py_DECREF( tmp_metaclass_name_4 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_name_12;
        tmp_key_name_12 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_10;
        }
        tmp_condition_result_21 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_13;
        }
        else
        {
            goto branch_no_13;
        }
        branch_yes_13:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_10;
        }
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_source_name_13 = tmp_class_creation_4__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_13, const_str_plain___prepare__ );
        tmp_condition_result_22 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_14;
        }
        else
        {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_14;
            PyObject *tmp_args_name_7;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_source_name_14 = tmp_class_creation_4__metaclass;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto try_except_handler_10;
            }
            tmp_tuple_element_13 = const_str_plain_WebSocketConnectionClosedException;
            tmp_args_name_7 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_13 );
            PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_13 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_13 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_13 );
            PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_13 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 50;
            tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_name_7 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto try_except_handler_10;
            }
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_31;
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_source_name_15 = tmp_class_creation_4__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_15, const_str_plain___getitem__ );
            tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto try_except_handler_10;
            }
            tmp_condition_result_23 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_15;
            }
            else
            {
                goto branch_no_15;
            }
            branch_yes_15:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_raise_value_4;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_getattr_target_4;
                PyObject *tmp_getattr_attr_4;
                PyObject *tmp_getattr_default_4;
                PyObject *tmp_source_name_16;
                PyObject *tmp_type_arg_8;
                tmp_raise_type_4 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_4__metaclass );
                tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
                tmp_getattr_attr_4 = const_str_plain___name__;
                tmp_getattr_default_4 = const_str_angle_metaclass;
                tmp_tuple_element_14 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
                if ( tmp_tuple_element_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 50;

                    goto try_except_handler_10;
                }
                tmp_right_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_14 );
                CHECK_OBJECT( tmp_class_creation_4__prepared );
                tmp_type_arg_8 = tmp_class_creation_4__prepared;
                tmp_source_name_16 = BUILTIN_TYPE1( tmp_type_arg_8 );
                assert( !(tmp_source_name_16 == NULL) );
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_16 );
                if ( tmp_tuple_element_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_4 );

                    exception_lineno = 50;

                    goto try_except_handler_10;
                }
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_14 );
                tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_raise_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 50;

                    goto try_except_handler_10;
                }
                exception_type = tmp_raise_type_4;
                Py_INCREF( tmp_raise_type_4 );
                exception_value = tmp_raise_value_4;
                exception_lineno = 50;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_10;
            }
            branch_no_15:;
        }
        goto branch_end_14;
        branch_no_14:;
        {
            PyObject *tmp_assign_source_32;
            tmp_assign_source_32 = PyDict_New();
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_32;
        }
        branch_end_14:;
    }
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_websocket$_exceptions_50 = tmp_set_locals_4;
            Py_INCREF( tmp_set_locals_4 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_0f2dd5905890f1fd0709147b654cd1b9;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_50, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_digest_2d73d3e4e590722f82317909c7e0d224;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_50, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_plain_WebSocketConnectionClosedException;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_50, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_12;
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_compexpr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT( tmp_class_creation_4__bases_orig );
            tmp_compexpr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto try_except_handler_12;
            }
            tmp_condition_result_24 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_16;
            }
            else
            {
                goto branch_no_16;
            }
            branch_yes_16:;
            CHECK_OBJECT( tmp_class_creation_4__bases_orig );
            tmp_dictset_value = tmp_class_creation_4__bases_orig;
            tmp_res = PyObject_SetItem( locals_websocket$_exceptions_50, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto try_except_handler_12;
            }
            branch_no_16:;
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_called_name_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_15 = const_str_plain_WebSocketConnectionClosedException;
            tmp_args_name_8 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_15 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_15 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_15 );
            tmp_tuple_element_15 = locals_websocket$_exceptions_50;
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_15 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 50;
            tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_args_name_8 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto try_except_handler_12;
            }
            assert( outline_3_var___class__ == NULL );
            outline_3_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT( outline_3_var___class__ );
        tmp_assign_source_33 = outline_3_var___class__;
        Py_INCREF( tmp_assign_source_33 );
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF( locals_websocket$_exceptions_50 );
        locals_websocket$_exceptions_50 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_websocket$_exceptions_50 );
        locals_websocket$_exceptions_50 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
        Py_DECREF( outline_3_var___class__ );
        outline_3_var___class__ = NULL;

        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_4:;
        exception_lineno = 50;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketConnectionClosedException, tmp_assign_source_33 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases_orig );
    tmp_class_creation_4__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases_orig );
    Py_DECREF( tmp_class_creation_4__bases_orig );
    tmp_class_creation_4__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketException );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WebSocketException );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WebSocketException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 58;

            goto try_except_handler_13;
        }

        tmp_tuple_element_16 = tmp_mvar_value_6;
        tmp_assign_source_35 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_16 );
        PyTuple_SET_ITEM( tmp_assign_source_35, 0, tmp_tuple_element_16 );
        assert( tmp_class_creation_5__bases_orig == NULL );
        tmp_class_creation_5__bases_orig = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT( tmp_class_creation_5__bases_orig );
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF( tmp_dircall_arg1_5 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_36 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_13;
        }
        assert( tmp_class_creation_5__bases == NULL );
        tmp_class_creation_5__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = PyDict_New();
        assert( tmp_class_creation_5__class_decl_dict == NULL );
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_metaclass_name_5;
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        nuitka_bool tmp_condition_result_26;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_bases_name_5;
        tmp_key_name_13 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_13;
        }
        tmp_condition_result_25 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_9;
        }
        else
        {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_name_14 = const_str_plain_metaclass;
        tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
        if ( tmp_metaclass_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_13;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_truth_name_5 = CHECK_IF_TRUE( tmp_class_creation_5__bases );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_13;
        }
        tmp_condition_result_26 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_10;
        }
        else
        {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_subscribed_name_5 = tmp_class_creation_5__bases;
        tmp_subscript_name_5 = const_int_0;
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        if ( tmp_type_arg_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_13;
        }
        tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_9 );
        Py_DECREF( tmp_type_arg_9 );
        if ( tmp_metaclass_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_13;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_5 );
        condexpr_end_10:;
        condexpr_end_9:;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_bases_name_5 = tmp_class_creation_5__bases;
        tmp_assign_source_38 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
        Py_DECREF( tmp_metaclass_name_5 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_13;
        }
        assert( tmp_class_creation_5__metaclass == NULL );
        tmp_class_creation_5__metaclass = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        tmp_key_name_15 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_13;
        }
        tmp_condition_result_27 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_17;
        }
        else
        {
            goto branch_no_17;
        }
        branch_yes_17:;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_13;
        }
        branch_no_17:;
    }
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT( tmp_class_creation_5__metaclass );
        tmp_source_name_17 = tmp_class_creation_5__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_17, const_str_plain___prepare__ );
        tmp_condition_result_28 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_28 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_18;
        }
        else
        {
            goto branch_no_18;
        }
        branch_yes_18:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_18;
            PyObject *tmp_args_name_9;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kw_name_9;
            CHECK_OBJECT( tmp_class_creation_5__metaclass );
            tmp_source_name_18 = tmp_class_creation_5__metaclass;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___prepare__ );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_13;
            }
            tmp_tuple_element_17 = const_str_plain_WebSocketTimeoutException;
            tmp_args_name_9 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_17 );
            PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_17 );
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_tuple_element_17 = tmp_class_creation_5__bases;
            Py_INCREF( tmp_tuple_element_17 );
            PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_17 );
            CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
            tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 58;
            tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_name_9 );
            if ( tmp_assign_source_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_13;
            }
            assert( tmp_class_creation_5__prepared == NULL );
            tmp_class_creation_5__prepared = tmp_assign_source_39;
        }
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_operand_name_5;
            PyObject *tmp_source_name_19;
            CHECK_OBJECT( tmp_class_creation_5__prepared );
            tmp_source_name_19 = tmp_class_creation_5__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_19, const_str_plain___getitem__ );
            tmp_operand_name_5 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_13;
            }
            tmp_condition_result_29 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_29 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_19;
            }
            else
            {
                goto branch_no_19;
            }
            branch_yes_19:;
            {
                PyObject *tmp_raise_type_5;
                PyObject *tmp_raise_value_5;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                PyObject *tmp_tuple_element_18;
                PyObject *tmp_getattr_target_5;
                PyObject *tmp_getattr_attr_5;
                PyObject *tmp_getattr_default_5;
                PyObject *tmp_source_name_20;
                PyObject *tmp_type_arg_10;
                tmp_raise_type_5 = PyExc_TypeError;
                tmp_left_name_5 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_5__metaclass );
                tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
                tmp_getattr_attr_5 = const_str_plain___name__;
                tmp_getattr_default_5 = const_str_angle_metaclass;
                tmp_tuple_element_18 = BUILTIN_GETATTR( tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5 );
                if ( tmp_tuple_element_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 58;

                    goto try_except_handler_13;
                }
                tmp_right_name_5 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_18 );
                CHECK_OBJECT( tmp_class_creation_5__prepared );
                tmp_type_arg_10 = tmp_class_creation_5__prepared;
                tmp_source_name_20 = BUILTIN_TYPE1( tmp_type_arg_10 );
                assert( !(tmp_source_name_20 == NULL) );
                tmp_tuple_element_18 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_20 );
                if ( tmp_tuple_element_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_5 );

                    exception_lineno = 58;

                    goto try_except_handler_13;
                }
                PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_18 );
                tmp_raise_value_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_raise_value_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 58;

                    goto try_except_handler_13;
                }
                exception_type = tmp_raise_type_5;
                Py_INCREF( tmp_raise_type_5 );
                exception_value = tmp_raise_value_5;
                exception_lineno = 58;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_13;
            }
            branch_no_19:;
        }
        goto branch_end_18;
        branch_no_18:;
        {
            PyObject *tmp_assign_source_40;
            tmp_assign_source_40 = PyDict_New();
            assert( tmp_class_creation_5__prepared == NULL );
            tmp_class_creation_5__prepared = tmp_assign_source_40;
        }
        branch_end_18:;
    }
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT( tmp_class_creation_5__prepared );
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_websocket$_exceptions_58 = tmp_set_locals_5;
            Py_INCREF( tmp_set_locals_5 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_0f2dd5905890f1fd0709147b654cd1b9;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_58, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_digest_fdb9fa22d66466ee204d11cd5bc3c534;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_58, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_plain_WebSocketTimeoutException;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_58, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_15;
        }
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_compexpr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT( tmp_class_creation_5__bases_orig );
            tmp_compexpr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_15;
            }
            tmp_condition_result_30 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_30 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_20;
            }
            else
            {
                goto branch_no_20;
            }
            branch_yes_20:;
            CHECK_OBJECT( tmp_class_creation_5__bases_orig );
            tmp_dictset_value = tmp_class_creation_5__bases_orig;
            tmp_res = PyObject_SetItem( locals_websocket$_exceptions_58, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_15;
            }
            branch_no_20:;
        }
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_name_10;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kw_name_10;
            CHECK_OBJECT( tmp_class_creation_5__metaclass );
            tmp_called_name_10 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_19 = const_str_plain_WebSocketTimeoutException;
            tmp_args_name_10 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_19 );
            PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_19 );
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_tuple_element_19 = tmp_class_creation_5__bases;
            Py_INCREF( tmp_tuple_element_19 );
            PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_19 );
            tmp_tuple_element_19 = locals_websocket$_exceptions_58;
            Py_INCREF( tmp_tuple_element_19 );
            PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_19 );
            CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
            tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 58;
            tmp_assign_source_42 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
            Py_DECREF( tmp_args_name_10 );
            if ( tmp_assign_source_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_15;
            }
            assert( outline_4_var___class__ == NULL );
            outline_4_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT( outline_4_var___class__ );
        tmp_assign_source_41 = outline_4_var___class__;
        Py_INCREF( tmp_assign_source_41 );
        goto try_return_handler_15;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF( locals_websocket$_exceptions_58 );
        locals_websocket$_exceptions_58 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_websocket$_exceptions_58 );
        locals_websocket$_exceptions_58 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
        Py_DECREF( outline_4_var___class__ );
        outline_4_var___class__ = NULL;

        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_5:;
        exception_lineno = 58;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketTimeoutException, tmp_assign_source_41 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases_orig );
    tmp_class_creation_5__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases_orig );
    Py_DECREF( tmp_class_creation_5__bases_orig );
    tmp_class_creation_5__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__prepared );
    Py_DECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketException );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WebSocketException );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WebSocketException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 65;

            goto try_except_handler_16;
        }

        tmp_tuple_element_20 = tmp_mvar_value_7;
        tmp_assign_source_43 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_20 );
        PyTuple_SET_ITEM( tmp_assign_source_43, 0, tmp_tuple_element_20 );
        assert( tmp_class_creation_6__bases_orig == NULL );
        tmp_class_creation_6__bases_orig = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT( tmp_class_creation_6__bases_orig );
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF( tmp_dircall_arg1_6 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_44 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_16;
        }
        assert( tmp_class_creation_6__bases == NULL );
        tmp_class_creation_6__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = PyDict_New();
        assert( tmp_class_creation_6__class_decl_dict == NULL );
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_name_6;
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_key_name_16;
        PyObject *tmp_dict_name_16;
        PyObject *tmp_dict_name_17;
        PyObject *tmp_key_name_17;
        nuitka_bool tmp_condition_result_32;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_bases_name_6;
        tmp_key_name_16 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_16, tmp_key_name_16 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_16;
        }
        tmp_condition_result_31 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_31 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_11;
        }
        else
        {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dict_name_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_name_17 = const_str_plain_metaclass;
        tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
        if ( tmp_metaclass_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_16;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_truth_name_6 = CHECK_IF_TRUE( tmp_class_creation_6__bases );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_16;
        }
        tmp_condition_result_32 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_32 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_12;
        }
        else
        {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_subscribed_name_6 = tmp_class_creation_6__bases;
        tmp_subscript_name_6 = const_int_0;
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
        if ( tmp_type_arg_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_16;
        }
        tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_11 );
        Py_DECREF( tmp_type_arg_11 );
        if ( tmp_metaclass_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_16;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_6 );
        condexpr_end_12:;
        condexpr_end_11:;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_bases_name_6 = tmp_class_creation_6__bases;
        tmp_assign_source_46 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
        Py_DECREF( tmp_metaclass_name_6 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_16;
        }
        assert( tmp_class_creation_6__metaclass == NULL );
        tmp_class_creation_6__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_key_name_18;
        PyObject *tmp_dict_name_18;
        tmp_key_name_18 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_18, tmp_key_name_18 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_16;
        }
        tmp_condition_result_33 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_33 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_21;
        }
        else
        {
            goto branch_no_21;
        }
        branch_yes_21:;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_16;
        }
        branch_no_21:;
    }
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_source_name_21;
        CHECK_OBJECT( tmp_class_creation_6__metaclass );
        tmp_source_name_21 = tmp_class_creation_6__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_21, const_str_plain___prepare__ );
        tmp_condition_result_34 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_34 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_22;
        }
        else
        {
            goto branch_no_22;
        }
        branch_yes_22:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_22;
            PyObject *tmp_args_name_11;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kw_name_11;
            CHECK_OBJECT( tmp_class_creation_6__metaclass );
            tmp_source_name_22 = tmp_class_creation_6__metaclass;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain___prepare__ );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_16;
            }
            tmp_tuple_element_21 = const_str_plain_WebSocketProxyException;
            tmp_args_name_11 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_21 );
            PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_21 );
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_tuple_element_21 = tmp_class_creation_6__bases;
            Py_INCREF( tmp_tuple_element_21 );
            PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_21 );
            CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
            tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 65;
            tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_11, tmp_kw_name_11 );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_name_11 );
            if ( tmp_assign_source_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_16;
            }
            assert( tmp_class_creation_6__prepared == NULL );
            tmp_class_creation_6__prepared = tmp_assign_source_47;
        }
        {
            nuitka_bool tmp_condition_result_35;
            PyObject *tmp_operand_name_6;
            PyObject *tmp_source_name_23;
            CHECK_OBJECT( tmp_class_creation_6__prepared );
            tmp_source_name_23 = tmp_class_creation_6__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_23, const_str_plain___getitem__ );
            tmp_operand_name_6 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_16;
            }
            tmp_condition_result_35 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_35 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_23;
            }
            else
            {
                goto branch_no_23;
            }
            branch_yes_23:;
            {
                PyObject *tmp_raise_type_6;
                PyObject *tmp_raise_value_6;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_tuple_element_22;
                PyObject *tmp_getattr_target_6;
                PyObject *tmp_getattr_attr_6;
                PyObject *tmp_getattr_default_6;
                PyObject *tmp_source_name_24;
                PyObject *tmp_type_arg_12;
                tmp_raise_type_6 = PyExc_TypeError;
                tmp_left_name_6 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_6__metaclass );
                tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
                tmp_getattr_attr_6 = const_str_plain___name__;
                tmp_getattr_default_6 = const_str_angle_metaclass;
                tmp_tuple_element_22 = BUILTIN_GETATTR( tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6 );
                if ( tmp_tuple_element_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;

                    goto try_except_handler_16;
                }
                tmp_right_name_6 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_22 );
                CHECK_OBJECT( tmp_class_creation_6__prepared );
                tmp_type_arg_12 = tmp_class_creation_6__prepared;
                tmp_source_name_24 = BUILTIN_TYPE1( tmp_type_arg_12 );
                assert( !(tmp_source_name_24 == NULL) );
                tmp_tuple_element_22 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_24 );
                if ( tmp_tuple_element_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_6 );

                    exception_lineno = 65;

                    goto try_except_handler_16;
                }
                PyTuple_SET_ITEM( tmp_right_name_6, 1, tmp_tuple_element_22 );
                tmp_raise_value_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_raise_value_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;

                    goto try_except_handler_16;
                }
                exception_type = tmp_raise_type_6;
                Py_INCREF( tmp_raise_type_6 );
                exception_value = tmp_raise_value_6;
                exception_lineno = 65;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_16;
            }
            branch_no_23:;
        }
        goto branch_end_22;
        branch_no_22:;
        {
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = PyDict_New();
            assert( tmp_class_creation_6__prepared == NULL );
            tmp_class_creation_6__prepared = tmp_assign_source_48;
        }
        branch_end_22:;
    }
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT( tmp_class_creation_6__prepared );
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_websocket$_exceptions_65 = tmp_set_locals_6;
            Py_INCREF( tmp_set_locals_6 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_0f2dd5905890f1fd0709147b654cd1b9;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_65, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_18;
        }
        tmp_dictset_value = const_str_digest_707a55a164a726c4d61f5bcf7eaa2d2a;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_65, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_18;
        }
        tmp_dictset_value = const_str_plain_WebSocketProxyException;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_65, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_18;
        }
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_compexpr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT( tmp_class_creation_6__bases_orig );
            tmp_compexpr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_18;
            }
            tmp_condition_result_36 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_36 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_24;
            }
            else
            {
                goto branch_no_24;
            }
            branch_yes_24:;
            CHECK_OBJECT( tmp_class_creation_6__bases_orig );
            tmp_dictset_value = tmp_class_creation_6__bases_orig;
            tmp_res = PyObject_SetItem( locals_websocket$_exceptions_65, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_18;
            }
            branch_no_24:;
        }
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_name_12;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kw_name_12;
            CHECK_OBJECT( tmp_class_creation_6__metaclass );
            tmp_called_name_12 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_23 = const_str_plain_WebSocketProxyException;
            tmp_args_name_12 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_23 );
            PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_23 );
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_tuple_element_23 = tmp_class_creation_6__bases;
            Py_INCREF( tmp_tuple_element_23 );
            PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_23 );
            tmp_tuple_element_23 = locals_websocket$_exceptions_65;
            Py_INCREF( tmp_tuple_element_23 );
            PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_23 );
            CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
            tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 65;
            tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_12, tmp_kw_name_12 );
            Py_DECREF( tmp_args_name_12 );
            if ( tmp_assign_source_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_18;
            }
            assert( outline_5_var___class__ == NULL );
            outline_5_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT( outline_5_var___class__ );
        tmp_assign_source_49 = outline_5_var___class__;
        Py_INCREF( tmp_assign_source_49 );
        goto try_return_handler_18;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF( locals_websocket$_exceptions_65 );
        locals_websocket$_exceptions_65 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_websocket$_exceptions_65 );
        locals_websocket$_exceptions_65 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
        Py_DECREF( outline_5_var___class__ );
        outline_5_var___class__ = NULL;

        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_6:;
        exception_lineno = 65;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketProxyException, tmp_assign_source_49 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases_orig );
    tmp_class_creation_6__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases_orig );
    Py_DECREF( tmp_class_creation_6__bases_orig );
    tmp_class_creation_6__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_decl_dict );
    Py_DECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__prepared );
    Py_DECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketException );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WebSocketException );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WebSocketException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 72;

            goto try_except_handler_19;
        }

        tmp_tuple_element_24 = tmp_mvar_value_8;
        tmp_assign_source_51 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_24 );
        PyTuple_SET_ITEM( tmp_assign_source_51, 0, tmp_tuple_element_24 );
        assert( tmp_class_creation_7__bases_orig == NULL );
        tmp_class_creation_7__bases_orig = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT( tmp_class_creation_7__bases_orig );
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF( tmp_dircall_arg1_7 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_52 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_19;
        }
        assert( tmp_class_creation_7__bases == NULL );
        tmp_class_creation_7__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = PyDict_New();
        assert( tmp_class_creation_7__class_decl_dict == NULL );
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_name_7;
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_name_19;
        PyObject *tmp_dict_name_20;
        PyObject *tmp_key_name_20;
        nuitka_bool tmp_condition_result_38;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_bases_name_7;
        tmp_key_name_19 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dict_name_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_19, tmp_key_name_19 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_19;
        }
        tmp_condition_result_37 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_37 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_13;
        }
        else
        {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dict_name_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_name_20 = const_str_plain_metaclass;
        tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
        if ( tmp_metaclass_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_19;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        CHECK_OBJECT( tmp_class_creation_7__bases );
        tmp_truth_name_7 = CHECK_IF_TRUE( tmp_class_creation_7__bases );
        if ( tmp_truth_name_7 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_19;
        }
        tmp_condition_result_38 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_38 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_14;
        }
        else
        {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT( tmp_class_creation_7__bases );
        tmp_subscribed_name_7 = tmp_class_creation_7__bases;
        tmp_subscript_name_7 = const_int_0;
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
        if ( tmp_type_arg_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_19;
        }
        tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_13 );
        Py_DECREF( tmp_type_arg_13 );
        if ( tmp_metaclass_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_19;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_name_7 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_7 );
        condexpr_end_14:;
        condexpr_end_13:;
        CHECK_OBJECT( tmp_class_creation_7__bases );
        tmp_bases_name_7 = tmp_class_creation_7__bases;
        tmp_assign_source_54 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
        Py_DECREF( tmp_metaclass_name_7 );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_19;
        }
        assert( tmp_class_creation_7__metaclass == NULL );
        tmp_class_creation_7__metaclass = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_name_21;
        tmp_key_name_21 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dict_name_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_21, tmp_key_name_21 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_19;
        }
        tmp_condition_result_39 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_39 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_25;
        }
        else
        {
            goto branch_no_25;
        }
        branch_yes_25:;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_19;
        }
        branch_no_25:;
    }
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_source_name_25;
        CHECK_OBJECT( tmp_class_creation_7__metaclass );
        tmp_source_name_25 = tmp_class_creation_7__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_25, const_str_plain___prepare__ );
        tmp_condition_result_40 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_40 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_26;
        }
        else
        {
            goto branch_no_26;
        }
        branch_yes_26:;
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_26;
            PyObject *tmp_args_name_13;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kw_name_13;
            CHECK_OBJECT( tmp_class_creation_7__metaclass );
            tmp_source_name_26 = tmp_class_creation_7__metaclass;
            tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain___prepare__ );
            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_19;
            }
            tmp_tuple_element_25 = const_str_plain_WebSocketBadStatusException;
            tmp_args_name_13 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_25 );
            PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_25 );
            CHECK_OBJECT( tmp_class_creation_7__bases );
            tmp_tuple_element_25 = tmp_class_creation_7__bases;
            Py_INCREF( tmp_tuple_element_25 );
            PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_25 );
            CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
            tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 72;
            tmp_assign_source_55 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_13, tmp_kw_name_13 );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_name_13 );
            if ( tmp_assign_source_55 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_19;
            }
            assert( tmp_class_creation_7__prepared == NULL );
            tmp_class_creation_7__prepared = tmp_assign_source_55;
        }
        {
            nuitka_bool tmp_condition_result_41;
            PyObject *tmp_operand_name_7;
            PyObject *tmp_source_name_27;
            CHECK_OBJECT( tmp_class_creation_7__prepared );
            tmp_source_name_27 = tmp_class_creation_7__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_27, const_str_plain___getitem__ );
            tmp_operand_name_7 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_19;
            }
            tmp_condition_result_41 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_41 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_27;
            }
            else
            {
                goto branch_no_27;
            }
            branch_yes_27:;
            {
                PyObject *tmp_raise_type_7;
                PyObject *tmp_raise_value_7;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_getattr_target_7;
                PyObject *tmp_getattr_attr_7;
                PyObject *tmp_getattr_default_7;
                PyObject *tmp_source_name_28;
                PyObject *tmp_type_arg_14;
                tmp_raise_type_7 = PyExc_TypeError;
                tmp_left_name_7 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_7__metaclass );
                tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
                tmp_getattr_attr_7 = const_str_plain___name__;
                tmp_getattr_default_7 = const_str_angle_metaclass;
                tmp_tuple_element_26 = BUILTIN_GETATTR( tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7 );
                if ( tmp_tuple_element_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;

                    goto try_except_handler_19;
                }
                tmp_right_name_7 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_26 );
                CHECK_OBJECT( tmp_class_creation_7__prepared );
                tmp_type_arg_14 = tmp_class_creation_7__prepared;
                tmp_source_name_28 = BUILTIN_TYPE1( tmp_type_arg_14 );
                assert( !(tmp_source_name_28 == NULL) );
                tmp_tuple_element_26 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_28 );
                if ( tmp_tuple_element_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_7 );

                    exception_lineno = 72;

                    goto try_except_handler_19;
                }
                PyTuple_SET_ITEM( tmp_right_name_7, 1, tmp_tuple_element_26 );
                tmp_raise_value_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_right_name_7 );
                if ( tmp_raise_value_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;

                    goto try_except_handler_19;
                }
                exception_type = tmp_raise_type_7;
                Py_INCREF( tmp_raise_type_7 );
                exception_value = tmp_raise_value_7;
                exception_lineno = 72;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_19;
            }
            branch_no_27:;
        }
        goto branch_end_26;
        branch_no_26:;
        {
            PyObject *tmp_assign_source_56;
            tmp_assign_source_56 = PyDict_New();
            assert( tmp_class_creation_7__prepared == NULL );
            tmp_class_creation_7__prepared = tmp_assign_source_56;
        }
        branch_end_26:;
    }
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT( tmp_class_creation_7__prepared );
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_websocket$_exceptions_72 = tmp_set_locals_7;
            Py_INCREF( tmp_set_locals_7 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_0f2dd5905890f1fd0709147b654cd1b9;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_72, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_21;
        }
        tmp_dictset_value = const_str_digest_fd265b3e5387b684277f763212229136;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_72, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_21;
        }
        tmp_dictset_value = const_str_plain_WebSocketBadStatusException;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_72, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_21;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_0943ae7daae40d3285fa380d6c74cf78_2, codeobj_0943ae7daae40d3285fa380d6c74cf78, module_websocket$_exceptions, sizeof(void *) );
        frame_0943ae7daae40d3285fa380d6c74cf78_2 = cache_frame_0943ae7daae40d3285fa380d6c74cf78_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_0943ae7daae40d3285fa380d6c74cf78_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_0943ae7daae40d3285fa380d6c74cf78_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_websocket$_exceptions$$$function_1___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_websocket$_exceptions_72, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0943ae7daae40d3285fa380d6c74cf78_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0943ae7daae40d3285fa380d6c74cf78_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_0943ae7daae40d3285fa380d6c74cf78_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_0943ae7daae40d3285fa380d6c74cf78_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_0943ae7daae40d3285fa380d6c74cf78_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0943ae7daae40d3285fa380d6c74cf78_2,
            type_description_2,
            outline_6_var___class__
        );


        // Release cached frame.
        if ( frame_0943ae7daae40d3285fa380d6c74cf78_2 == cache_frame_0943ae7daae40d3285fa380d6c74cf78_2 )
        {
            Py_DECREF( frame_0943ae7daae40d3285fa380d6c74cf78_2 );
        }
        cache_frame_0943ae7daae40d3285fa380d6c74cf78_2 = NULL;

        assertFrameObject( frame_0943ae7daae40d3285fa380d6c74cf78_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_21;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT( tmp_class_creation_7__bases );
            tmp_compexpr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT( tmp_class_creation_7__bases_orig );
            tmp_compexpr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_21;
            }
            tmp_condition_result_42 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_42 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_28;
            }
            else
            {
                goto branch_no_28;
            }
            branch_yes_28:;
            CHECK_OBJECT( tmp_class_creation_7__bases_orig );
            tmp_dictset_value = tmp_class_creation_7__bases_orig;
            tmp_res = PyObject_SetItem( locals_websocket$_exceptions_72, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_21;
            }
            branch_no_28:;
        }
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_name_14;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kw_name_14;
            CHECK_OBJECT( tmp_class_creation_7__metaclass );
            tmp_called_name_14 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_27 = const_str_plain_WebSocketBadStatusException;
            tmp_args_name_14 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_27 );
            PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_27 );
            CHECK_OBJECT( tmp_class_creation_7__bases );
            tmp_tuple_element_27 = tmp_class_creation_7__bases;
            Py_INCREF( tmp_tuple_element_27 );
            PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_27 );
            tmp_tuple_element_27 = locals_websocket$_exceptions_72;
            Py_INCREF( tmp_tuple_element_27 );
            PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_27 );
            CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
            tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 72;
            tmp_assign_source_58 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_14, tmp_kw_name_14 );
            Py_DECREF( tmp_args_name_14 );
            if ( tmp_assign_source_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_21;
            }
            assert( outline_6_var___class__ == NULL );
            outline_6_var___class__ = tmp_assign_source_58;
        }
        CHECK_OBJECT( outline_6_var___class__ );
        tmp_assign_source_57 = outline_6_var___class__;
        Py_INCREF( tmp_assign_source_57 );
        goto try_return_handler_21;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF( locals_websocket$_exceptions_72 );
        locals_websocket$_exceptions_72 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_websocket$_exceptions_72 );
        locals_websocket$_exceptions_72 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT( (PyObject *)outline_6_var___class__ );
        Py_DECREF( outline_6_var___class__ );
        outline_6_var___class__ = NULL;

        goto outline_result_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_7;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_7:;
        exception_lineno = 72;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketBadStatusException, tmp_assign_source_57 );
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__bases_orig );
    tmp_class_creation_7__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases_orig );
    Py_DECREF( tmp_class_creation_7__bases_orig );
    tmp_class_creation_7__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_decl_dict );
    Py_DECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__prepared );
    Py_DECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketException );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WebSocketException );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WebSocketException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;

            goto try_except_handler_22;
        }

        tmp_tuple_element_28 = tmp_mvar_value_9;
        tmp_assign_source_59 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_28 );
        PyTuple_SET_ITEM( tmp_assign_source_59, 0, tmp_tuple_element_28 );
        assert( tmp_class_creation_8__bases_orig == NULL );
        tmp_class_creation_8__bases_orig = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT( tmp_class_creation_8__bases_orig );
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF( tmp_dircall_arg1_8 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_60 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;

            goto try_except_handler_22;
        }
        assert( tmp_class_creation_8__bases == NULL );
        tmp_class_creation_8__bases = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = PyDict_New();
        assert( tmp_class_creation_8__class_decl_dict == NULL );
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_metaclass_name_8;
        nuitka_bool tmp_condition_result_43;
        PyObject *tmp_key_name_22;
        PyObject *tmp_dict_name_22;
        PyObject *tmp_dict_name_23;
        PyObject *tmp_key_name_23;
        nuitka_bool tmp_condition_result_44;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_bases_name_8;
        tmp_key_name_22 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
        tmp_dict_name_22 = tmp_class_creation_8__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_22, tmp_key_name_22 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;

            goto try_except_handler_22;
        }
        tmp_condition_result_43 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_43 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_15;
        }
        else
        {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
        tmp_dict_name_23 = tmp_class_creation_8__class_decl_dict;
        tmp_key_name_23 = const_str_plain_metaclass;
        tmp_metaclass_name_8 = DICT_GET_ITEM( tmp_dict_name_23, tmp_key_name_23 );
        if ( tmp_metaclass_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;

            goto try_except_handler_22;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        CHECK_OBJECT( tmp_class_creation_8__bases );
        tmp_truth_name_8 = CHECK_IF_TRUE( tmp_class_creation_8__bases );
        if ( tmp_truth_name_8 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;

            goto try_except_handler_22;
        }
        tmp_condition_result_44 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_44 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_16;
        }
        else
        {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT( tmp_class_creation_8__bases );
        tmp_subscribed_name_8 = tmp_class_creation_8__bases;
        tmp_subscript_name_8 = const_int_0;
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 0 );
        if ( tmp_type_arg_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;

            goto try_except_handler_22;
        }
        tmp_metaclass_name_8 = BUILTIN_TYPE1( tmp_type_arg_15 );
        Py_DECREF( tmp_type_arg_15 );
        if ( tmp_metaclass_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;

            goto try_except_handler_22;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_name_8 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_8 );
        condexpr_end_16:;
        condexpr_end_15:;
        CHECK_OBJECT( tmp_class_creation_8__bases );
        tmp_bases_name_8 = tmp_class_creation_8__bases;
        tmp_assign_source_62 = SELECT_METACLASS( tmp_metaclass_name_8, tmp_bases_name_8 );
        Py_DECREF( tmp_metaclass_name_8 );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;

            goto try_except_handler_22;
        }
        assert( tmp_class_creation_8__metaclass == NULL );
        tmp_class_creation_8__metaclass = tmp_assign_source_62;
    }
    {
        nuitka_bool tmp_condition_result_45;
        PyObject *tmp_key_name_24;
        PyObject *tmp_dict_name_24;
        tmp_key_name_24 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
        tmp_dict_name_24 = tmp_class_creation_8__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_24, tmp_key_name_24 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;

            goto try_except_handler_22;
        }
        tmp_condition_result_45 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_45 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_29;
        }
        else
        {
            goto branch_no_29;
        }
        branch_yes_29:;
        CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;

            goto try_except_handler_22;
        }
        branch_no_29:;
    }
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_source_name_29;
        CHECK_OBJECT( tmp_class_creation_8__metaclass );
        tmp_source_name_29 = tmp_class_creation_8__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_29, const_str_plain___prepare__ );
        tmp_condition_result_46 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_46 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_30;
        }
        else
        {
            goto branch_no_30;
        }
        branch_yes_30:;
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_called_name_15;
            PyObject *tmp_source_name_30;
            PyObject *tmp_args_name_15;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_kw_name_15;
            CHECK_OBJECT( tmp_class_creation_8__metaclass );
            tmp_source_name_30 = tmp_class_creation_8__metaclass;
            tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain___prepare__ );
            if ( tmp_called_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;

                goto try_except_handler_22;
            }
            tmp_tuple_element_29 = const_str_plain_WebSocketAddressException;
            tmp_args_name_15 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_29 );
            PyTuple_SET_ITEM( tmp_args_name_15, 0, tmp_tuple_element_29 );
            CHECK_OBJECT( tmp_class_creation_8__bases );
            tmp_tuple_element_29 = tmp_class_creation_8__bases;
            Py_INCREF( tmp_tuple_element_29 );
            PyTuple_SET_ITEM( tmp_args_name_15, 1, tmp_tuple_element_29 );
            CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
            tmp_kw_name_15 = tmp_class_creation_8__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 83;
            tmp_assign_source_63 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_15, tmp_kw_name_15 );
            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_name_15 );
            if ( tmp_assign_source_63 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;

                goto try_except_handler_22;
            }
            assert( tmp_class_creation_8__prepared == NULL );
            tmp_class_creation_8__prepared = tmp_assign_source_63;
        }
        {
            nuitka_bool tmp_condition_result_47;
            PyObject *tmp_operand_name_8;
            PyObject *tmp_source_name_31;
            CHECK_OBJECT( tmp_class_creation_8__prepared );
            tmp_source_name_31 = tmp_class_creation_8__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_31, const_str_plain___getitem__ );
            tmp_operand_name_8 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;

                goto try_except_handler_22;
            }
            tmp_condition_result_47 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_47 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_31;
            }
            else
            {
                goto branch_no_31;
            }
            branch_yes_31:;
            {
                PyObject *tmp_raise_type_8;
                PyObject *tmp_raise_value_8;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_8;
                PyObject *tmp_tuple_element_30;
                PyObject *tmp_getattr_target_8;
                PyObject *tmp_getattr_attr_8;
                PyObject *tmp_getattr_default_8;
                PyObject *tmp_source_name_32;
                PyObject *tmp_type_arg_16;
                tmp_raise_type_8 = PyExc_TypeError;
                tmp_left_name_8 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_8__metaclass );
                tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
                tmp_getattr_attr_8 = const_str_plain___name__;
                tmp_getattr_default_8 = const_str_angle_metaclass;
                tmp_tuple_element_30 = BUILTIN_GETATTR( tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8 );
                if ( tmp_tuple_element_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 83;

                    goto try_except_handler_22;
                }
                tmp_right_name_8 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_30 );
                CHECK_OBJECT( tmp_class_creation_8__prepared );
                tmp_type_arg_16 = tmp_class_creation_8__prepared;
                tmp_source_name_32 = BUILTIN_TYPE1( tmp_type_arg_16 );
                assert( !(tmp_source_name_32 == NULL) );
                tmp_tuple_element_30 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_32 );
                if ( tmp_tuple_element_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_8 );

                    exception_lineno = 83;

                    goto try_except_handler_22;
                }
                PyTuple_SET_ITEM( tmp_right_name_8, 1, tmp_tuple_element_30 );
                tmp_raise_value_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
                Py_DECREF( tmp_right_name_8 );
                if ( tmp_raise_value_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 83;

                    goto try_except_handler_22;
                }
                exception_type = tmp_raise_type_8;
                Py_INCREF( tmp_raise_type_8 );
                exception_value = tmp_raise_value_8;
                exception_lineno = 83;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_22;
            }
            branch_no_31:;
        }
        goto branch_end_30;
        branch_no_30:;
        {
            PyObject *tmp_assign_source_64;
            tmp_assign_source_64 = PyDict_New();
            assert( tmp_class_creation_8__prepared == NULL );
            tmp_class_creation_8__prepared = tmp_assign_source_64;
        }
        branch_end_30:;
    }
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT( tmp_class_creation_8__prepared );
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_websocket$_exceptions_83 = tmp_set_locals_8;
            Py_INCREF( tmp_set_locals_8 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_0f2dd5905890f1fd0709147b654cd1b9;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_83, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;

            goto try_except_handler_24;
        }
        tmp_dictset_value = const_str_digest_ec9d82b67b6507b3fde99e1649de3d5c;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_83, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;

            goto try_except_handler_24;
        }
        tmp_dictset_value = const_str_plain_WebSocketAddressException;
        tmp_res = PyObject_SetItem( locals_websocket$_exceptions_83, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;

            goto try_except_handler_24;
        }
        {
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            CHECK_OBJECT( tmp_class_creation_8__bases );
            tmp_compexpr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT( tmp_class_creation_8__bases_orig );
            tmp_compexpr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;

                goto try_except_handler_24;
            }
            tmp_condition_result_48 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_48 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_32;
            }
            else
            {
                goto branch_no_32;
            }
            branch_yes_32:;
            CHECK_OBJECT( tmp_class_creation_8__bases_orig );
            tmp_dictset_value = tmp_class_creation_8__bases_orig;
            tmp_res = PyObject_SetItem( locals_websocket$_exceptions_83, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;

                goto try_except_handler_24;
            }
            branch_no_32:;
        }
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_name_16;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kw_name_16;
            CHECK_OBJECT( tmp_class_creation_8__metaclass );
            tmp_called_name_16 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_31 = const_str_plain_WebSocketAddressException;
            tmp_args_name_16 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_31 );
            PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_31 );
            CHECK_OBJECT( tmp_class_creation_8__bases );
            tmp_tuple_element_31 = tmp_class_creation_8__bases;
            Py_INCREF( tmp_tuple_element_31 );
            PyTuple_SET_ITEM( tmp_args_name_16, 1, tmp_tuple_element_31 );
            tmp_tuple_element_31 = locals_websocket$_exceptions_83;
            Py_INCREF( tmp_tuple_element_31 );
            PyTuple_SET_ITEM( tmp_args_name_16, 2, tmp_tuple_element_31 );
            CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
            tmp_kw_name_16 = tmp_class_creation_8__class_decl_dict;
            frame_08037fd68b836f698afc7286059cc04c->m_frame.f_lineno = 83;
            tmp_assign_source_66 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_16, tmp_kw_name_16 );
            Py_DECREF( tmp_args_name_16 );
            if ( tmp_assign_source_66 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;

                goto try_except_handler_24;
            }
            assert( outline_7_var___class__ == NULL );
            outline_7_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT( outline_7_var___class__ );
        tmp_assign_source_65 = outline_7_var___class__;
        Py_INCREF( tmp_assign_source_65 );
        goto try_return_handler_24;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF( locals_websocket$_exceptions_83 );
        locals_websocket$_exceptions_83 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_websocket$_exceptions_83 );
        locals_websocket$_exceptions_83 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT( (PyObject *)outline_7_var___class__ );
        Py_DECREF( outline_7_var___class__ );
        outline_7_var___class__ = NULL;

        goto outline_result_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_8;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( websocket$_exceptions );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_8:;
        exception_lineno = 83;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1( moduledict_websocket$_exceptions, (Nuitka_StringObject *)const_str_plain_WebSocketAddressException, tmp_assign_source_65 );
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__bases_orig );
    tmp_class_creation_8__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_08037fd68b836f698afc7286059cc04c );
#endif
    popFrameStack();

    assertFrameObject( frame_08037fd68b836f698afc7286059cc04c );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_08037fd68b836f698afc7286059cc04c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_08037fd68b836f698afc7286059cc04c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_08037fd68b836f698afc7286059cc04c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_08037fd68b836f698afc7286059cc04c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__bases_orig );
    Py_DECREF( tmp_class_creation_8__bases_orig );
    tmp_class_creation_8__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__bases );
    Py_DECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_decl_dict );
    Py_DECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__prepared );
    Py_DECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;


    return MOD_RETURN_VALUE( module_websocket$_exceptions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
