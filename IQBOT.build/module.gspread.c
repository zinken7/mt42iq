/* Generated code for Python module 'gspread'
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

/* The "_module_gspread" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_gspread;
PyDictObject *moduledict_gspread;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_SpreadsheetNotFound;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_credentials;
static PyObject *const_str_digest_acb5cae55c3ff1435e3e82429a0b3b25;
static PyObject *const_tuple_4b706957957a577a8c6d34d77aabfbf3_tuple;
static PyObject *const_str_digest_e65743cbe7a69ff6b9e98deb9cb9783f;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_digest_f854a5ab4b7f83e7e565b4859bdc0e4a;
extern PyObject *const_str_plain_auth;
extern PyObject *const_str_plain_login;
extern PyObject *const_str_plain_Worksheet;
extern PyObject *const_str_plain_client;
static PyObject *const_tuple_945e5a3f10247188f5c5a6c62888f2d9_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_NoValidUrlKeyFound;
static PyObject *const_str_digest_54683e367f8d1b70a923995d10e680f6;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_Cell;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_gspread;
static PyObject *const_str_digest_930bf81a4e4f1130de3da0aa6895d12c;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_authorize;
extern PyObject *const_str_plain_GSpreadException;
extern PyObject *const_str_plain_models;
extern PyObject *const_str_plain_CellNotFound;
extern PyObject *const_str_plain_IncorrectCellLabel;
extern PyObject *const_str_plain_Spreadsheet;
static PyObject *const_str_digest_d7629489ad09bc66ed69052e0ecd3e3b;
extern PyObject *const_str_plain_WorksheetNotFound;
extern PyObject *const_str_plain_Client;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_str_digest_0e2a071b458e8975516a32364ce5be98;
static PyObject *const_tuple_str_plain_Client_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_client_class;
static PyObject *const_list_str_digest_f854a5ab4b7f83e7e565b4859bdc0e4a_list;
static PyObject *const_tuple_str_plain_Spreadsheet_str_plain_Worksheet_str_plain_Cell_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_acb5cae55c3ff1435e3e82429a0b3b25 = UNSTREAM_STRING_ASCII( &constant_bin[ 415941 ], 47, 0 );
    const_tuple_4b706957957a577a8c6d34d77aabfbf3_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_4b706957957a577a8c6d34d77aabfbf3_tuple, 0, const_str_plain_GSpreadException ); Py_INCREF( const_str_plain_GSpreadException );
    PyTuple_SET_ITEM( const_tuple_4b706957957a577a8c6d34d77aabfbf3_tuple, 1, const_str_plain_SpreadsheetNotFound ); Py_INCREF( const_str_plain_SpreadsheetNotFound );
    PyTuple_SET_ITEM( const_tuple_4b706957957a577a8c6d34d77aabfbf3_tuple, 2, const_str_plain_NoValidUrlKeyFound ); Py_INCREF( const_str_plain_NoValidUrlKeyFound );
    PyTuple_SET_ITEM( const_tuple_4b706957957a577a8c6d34d77aabfbf3_tuple, 3, const_str_plain_IncorrectCellLabel ); Py_INCREF( const_str_plain_IncorrectCellLabel );
    PyTuple_SET_ITEM( const_tuple_4b706957957a577a8c6d34d77aabfbf3_tuple, 4, const_str_plain_WorksheetNotFound ); Py_INCREF( const_str_plain_WorksheetNotFound );
    PyTuple_SET_ITEM( const_tuple_4b706957957a577a8c6d34d77aabfbf3_tuple, 5, const_str_plain_CellNotFound ); Py_INCREF( const_str_plain_CellNotFound );
    const_str_digest_e65743cbe7a69ff6b9e98deb9cb9783f = UNSTREAM_STRING_ASCII( &constant_bin[ 415988 ], 5, 0 );
    const_str_digest_f854a5ab4b7f83e7e565b4859bdc0e4a = UNSTREAM_STRING_ASCII( &constant_bin[ 415941 ], 35, 0 );
    const_tuple_945e5a3f10247188f5c5a6c62888f2d9_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_945e5a3f10247188f5c5a6c62888f2d9_tuple, 0, const_str_plain_credentials ); Py_INCREF( const_str_plain_credentials );
    const_str_plain_client_class = UNSTREAM_STRING_ASCII( &constant_bin[ 415993 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_945e5a3f10247188f5c5a6c62888f2d9_tuple, 1, const_str_plain_client_class ); Py_INCREF( const_str_plain_client_class );
    PyTuple_SET_ITEM( const_tuple_945e5a3f10247188f5c5a6c62888f2d9_tuple, 2, const_str_plain_client ); Py_INCREF( const_str_plain_client );
    const_str_digest_54683e367f8d1b70a923995d10e680f6 = UNSTREAM_STRING_ASCII( &constant_bin[ 416005 ], 16, 0 );
    const_str_digest_930bf81a4e4f1130de3da0aa6895d12c = UNSTREAM_STRING_ASCII( &constant_bin[ 416021 ], 55, 0 );
    const_str_digest_d7629489ad09bc66ed69052e0ecd3e3b = UNSTREAM_STRING_ASCII( &constant_bin[ 416076 ], 220, 0 );
    const_str_digest_0e2a071b458e8975516a32364ce5be98 = UNSTREAM_STRING_ASCII( &constant_bin[ 416296 ], 15, 0 );
    const_tuple_str_plain_Client_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Client_tuple, 0, const_str_plain_Client ); Py_INCREF( const_str_plain_Client );
    const_list_str_digest_f854a5ab4b7f83e7e565b4859bdc0e4a_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_f854a5ab4b7f83e7e565b4859bdc0e4a_list, 0, const_str_digest_f854a5ab4b7f83e7e565b4859bdc0e4a ); Py_INCREF( const_str_digest_f854a5ab4b7f83e7e565b4859bdc0e4a );
    const_tuple_str_plain_Spreadsheet_str_plain_Worksheet_str_plain_Cell_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Spreadsheet_str_plain_Worksheet_str_plain_Cell_tuple, 0, const_str_plain_Spreadsheet ); Py_INCREF( const_str_plain_Spreadsheet );
    PyTuple_SET_ITEM( const_tuple_str_plain_Spreadsheet_str_plain_Worksheet_str_plain_Cell_tuple, 1, const_str_plain_Worksheet ); Py_INCREF( const_str_plain_Worksheet );
    PyTuple_SET_ITEM( const_tuple_str_plain_Spreadsheet_str_plain_Worksheet_str_plain_Cell_tuple, 2, const_str_plain_Cell ); Py_INCREF( const_str_plain_Cell );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_gspread( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d87defa972c7ea8acdba3b8b5531b5f3;
static PyCodeObject *codeobj_58b81d43da7a204ff04e7fd646b85c34;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_acb5cae55c3ff1435e3e82429a0b3b25;
    codeobj_d87defa972c7ea8acdba3b8b5531b5f3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_54683e367f8d1b70a923995d10e680f6, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_58b81d43da7a204ff04e7fd646b85c34 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_authorize, 29, const_tuple_945e5a3f10247188f5c5a6c62888f2d9_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_gspread$$$function_1_authorize( PyObject *defaults );


// The module function definitions.
static PyObject *impl_gspread$$$function_1_authorize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_credentials = python_pars[ 0 ];
    PyObject *par_client_class = python_pars[ 1 ];
    PyObject *var_client = NULL;
    struct Nuitka_FrameObject *frame_58b81d43da7a204ff04e7fd646b85c34;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_58b81d43da7a204ff04e7fd646b85c34 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_58b81d43da7a204ff04e7fd646b85c34, codeobj_58b81d43da7a204ff04e7fd646b85c34, module_gspread, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_58b81d43da7a204ff04e7fd646b85c34 = cache_frame_58b81d43da7a204ff04e7fd646b85c34;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_58b81d43da7a204ff04e7fd646b85c34 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_58b81d43da7a204ff04e7fd646b85c34 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( par_client_class );
        tmp_called_name_1 = par_client_class;
        tmp_dict_key_1 = const_str_plain_auth;
        CHECK_OBJECT( par_credentials );
        tmp_dict_value_1 = par_credentials;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_58b81d43da7a204ff04e7fd646b85c34->m_frame.f_lineno = 37;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_client == NULL );
        var_client = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_client );
        tmp_called_instance_1 = var_client;
        frame_58b81d43da7a204ff04e7fd646b85c34->m_frame.f_lineno = 38;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_login );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58b81d43da7a204ff04e7fd646b85c34 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58b81d43da7a204ff04e7fd646b85c34 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58b81d43da7a204ff04e7fd646b85c34, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58b81d43da7a204ff04e7fd646b85c34->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58b81d43da7a204ff04e7fd646b85c34, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_58b81d43da7a204ff04e7fd646b85c34,
        type_description_1,
        par_credentials,
        par_client_class,
        var_client
    );


    // Release cached frame.
    if ( frame_58b81d43da7a204ff04e7fd646b85c34 == cache_frame_58b81d43da7a204ff04e7fd646b85c34 )
    {
        Py_DECREF( frame_58b81d43da7a204ff04e7fd646b85c34 );
    }
    cache_frame_58b81d43da7a204ff04e7fd646b85c34 = NULL;

    assertFrameObject( frame_58b81d43da7a204ff04e7fd646b85c34 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_client );
    tmp_return_value = var_client;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$$$function_1_authorize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_credentials );
    Py_DECREF( par_credentials );
    par_credentials = NULL;

    CHECK_OBJECT( (PyObject *)par_client_class );
    Py_DECREF( par_client_class );
    par_client_class = NULL;

    CHECK_OBJECT( (PyObject *)var_client );
    Py_DECREF( var_client );
    var_client = NULL;

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

    CHECK_OBJECT( (PyObject *)par_credentials );
    Py_DECREF( par_credentials );
    par_credentials = NULL;

    CHECK_OBJECT( (PyObject *)par_client_class );
    Py_DECREF( par_client_class );
    par_client_class = NULL;

    Py_XDECREF( var_client );
    var_client = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$$$function_1_authorize );
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



static PyObject *MAKE_FUNCTION_gspread$$$function_1_authorize( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$$$function_1_authorize,
        const_str_plain_authorize,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_58b81d43da7a204ff04e7fd646b85c34,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread,
        const_str_digest_d7629489ad09bc66ed69052e0ecd3e3b,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_gspread =
{
    PyModuleDef_HEAD_INIT,
    "gspread",
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
MOD_ENTRY_DECL(gspread)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(gspread)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_gspread );
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
    puts("gspread: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("gspread: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("gspread: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initgspread" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_gspread = Py_InitModule4(
        "gspread",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_gspread = PyModule_Create( &mdef_gspread );
#endif

    moduledict_gspread = MODULE_DICT( module_gspread );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_gspread,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_gspread,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_gspread,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_gspread,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_gspread );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_gspread, module_gspread );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_d87defa972c7ea8acdba3b8b5531b5f3;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_930bf81a4e4f1130de3da0aa6895d12c;
        UPDATE_STRING_DICT0( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_acb5cae55c3ff1435e3e82429a0b3b25;
        UPDATE_STRING_DICT0( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY( const_list_str_digest_f854a5ab4b7f83e7e565b4859bdc0e4a_list );
        UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_d87defa972c7ea8acdba3b8b5531b5f3 = MAKE_MODULE_FRAME( codeobj_d87defa972c7ea8acdba3b8b5531b5f3, module_gspread );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d87defa972c7ea8acdba3b8b5531b5f3 );
    assert( Py_REFCNT( frame_d87defa972c7ea8acdba3b8b5531b5f3 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_acb5cae55c3ff1435e3e82429a0b3b25;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_str_digest_e65743cbe7a69ff6b9e98deb9cb9783f;
        UPDATE_STRING_DICT0( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_str_digest_0e2a071b458e8975516a32364ce5be98;
        UPDATE_STRING_DICT0( moduledict_gspread, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_client;
        tmp_globals_name_1 = (PyObject *)moduledict_gspread;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_Client_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_d87defa972c7ea8acdba3b8b5531b5f3->m_frame.f_lineno = 16;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_gspread,
                const_str_plain_Client,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Client );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_Client, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_models;
        tmp_globals_name_2 = (PyObject *)moduledict_gspread;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_Spreadsheet_str_plain_Worksheet_str_plain_Cell_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_d87defa972c7ea8acdba3b8b5531b5f3->m_frame.f_lineno = 17;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_gspread,
                const_str_plain_Spreadsheet,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Spreadsheet );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_Spreadsheet, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_gspread,
                const_str_plain_Worksheet,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Worksheet );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_Worksheet, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_gspread,
                const_str_plain_Cell,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Cell );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_Cell, tmp_assign_source_11 );
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_exceptions;
        tmp_globals_name_3 = (PyObject *)moduledict_gspread;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_4b706957957a577a8c6d34d77aabfbf3_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_d87defa972c7ea8acdba3b8b5531b5f3->m_frame.f_lineno = 19;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_gspread,
                const_str_plain_GSpreadException,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_GSpreadException );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_GSpreadException, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_gspread,
                const_str_plain_SpreadsheetNotFound,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_SpreadsheetNotFound );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_SpreadsheetNotFound, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_gspread,
                const_str_plain_NoValidUrlKeyFound,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_NoValidUrlKeyFound );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_NoValidUrlKeyFound, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_gspread,
                const_str_plain_IncorrectCellLabel,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_IncorrectCellLabel );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_IncorrectCellLabel, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_gspread,
                const_str_plain_WorksheetNotFound,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_WorksheetNotFound );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_WorksheetNotFound, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_gspread,
                const_str_plain_CellNotFound,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_CellNotFound );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_CellNotFound, tmp_assign_source_18 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_Client );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Client );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Client" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_defaults_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_assign_source_19 = MAKE_FUNCTION_gspread$$$function_1_authorize( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_gspread, (Nuitka_StringObject *)const_str_plain_authorize, tmp_assign_source_19 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d87defa972c7ea8acdba3b8b5531b5f3 );
#endif
    popFrameStack();

    assertFrameObject( frame_d87defa972c7ea8acdba3b8b5531b5f3 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d87defa972c7ea8acdba3b8b5531b5f3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d87defa972c7ea8acdba3b8b5531b5f3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d87defa972c7ea8acdba3b8b5531b5f3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d87defa972c7ea8acdba3b8b5531b5f3, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_gspread );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
