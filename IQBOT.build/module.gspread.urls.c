/* Generated code for Python module 'gspread.urls'
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

/* The "_module_gspread$urls" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_gspread$urls;
PyDictObject *moduledict_gspread$urls;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_96a274f532e654b4f844552dc90eac11;
static PyObject *const_str_plain_SPREADSHEETS_API_V4_BASE_URL;
extern PyObject *const_str_plain_DRIVE_FILES_UPLOAD_API_V2_URL;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_463f42e9c9b9e801ed55781e6660c99d;
extern PyObject *const_str_plain_SPREADSHEET_VALUES_APPEND_URL;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_bd422b5224098055ff664f2a8aa90c64;
static PyObject *const_str_digest_a002988868962dfe639c481833db439a;
extern PyObject *const_str_plain_DRIVE_FILES_API_V2_URL;
extern PyObject *const_str_plain_SPREADSHEET_BATCH_UPDATE_URL;
extern PyObject *const_str_plain_SPREADSHEET_VALUES_CLEAR_URL;
static PyObject *const_str_digest_194511086960bf081fbae0495e24bad0;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_545b0502a08ca0860aeb99270bc29519;
static PyObject *const_str_digest_bf4a13eb29b19ff26fc2c7a1e8b9635c;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_65f8a8faf3c9cc9d9630ec066aebcf95;
static PyObject *const_str_digest_a7d86d946056cb82a064f23960067670;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_6677b15af5016f4e3eb2378c66c7b65b;
extern PyObject *const_str_plain_SPREADSHEET_VALUES_URL;
extern PyObject *const_str_plain_SPREADSHEET_URL;
static PyObject *const_str_digest_5ca1bce0bc266e01eb97ffecc8992c2f;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_5223be42f5eb922165bfb0b8bb88f9ec;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_96a274f532e654b4f844552dc90eac11 = UNSTREAM_STRING_ASCII( &constant_bin[ 443687 ], 46, 0 );
    const_str_plain_SPREADSHEETS_API_V4_BASE_URL = UNSTREAM_STRING_ASCII( &constant_bin[ 443733 ], 28, 1 );
    const_str_digest_463f42e9c9b9e801ed55781e6660c99d = UNSTREAM_STRING_ASCII( &constant_bin[ 443761 ], 6, 0 );
    const_str_digest_bd422b5224098055ff664f2a8aa90c64 = UNSTREAM_STRING_ASCII( &constant_bin[ 443767 ], 13, 0 );
    const_str_digest_a002988868962dfe639c481833db439a = UNSTREAM_STRING_ASCII( &constant_bin[ 443780 ], 7, 0 );
    const_str_digest_194511086960bf081fbae0495e24bad0 = UNSTREAM_STRING_ASCII( &constant_bin[ 443787 ], 43, 0 );
    const_str_digest_545b0502a08ca0860aeb99270bc29519 = UNSTREAM_STRING_ASCII( &constant_bin[ 443830 ], 41, 0 );
    const_str_digest_bf4a13eb29b19ff26fc2c7a1e8b9635c = UNSTREAM_STRING_ASCII( &constant_bin[ 443871 ], 21, 0 );
    const_str_digest_65f8a8faf3c9cc9d9630ec066aebcf95 = UNSTREAM_STRING_ASCII( &constant_bin[ 443892 ], 48, 0 );
    const_str_digest_a7d86d946056cb82a064f23960067670 = UNSTREAM_STRING_ASCII( &constant_bin[ 443940 ], 45, 0 );
    const_str_digest_6677b15af5016f4e3eb2378c66c7b65b = UNSTREAM_STRING_ASCII( &constant_bin[ 443985 ], 15, 0 );
    const_str_digest_5ca1bce0bc266e01eb97ffecc8992c2f = UNSTREAM_STRING_ASCII( &constant_bin[ 443688 ], 12, 0 );
    const_str_digest_5223be42f5eb922165bfb0b8bb88f9ec = UNSTREAM_STRING_ASCII( &constant_bin[ 431173 ], 3, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_gspread$urls( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_5e58a2ff9a520dfbe56acef94a2716b3;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_194511086960bf081fbae0495e24bad0;
    codeobj_5e58a2ff9a520dfbe56acef94a2716b3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_bf4a13eb29b19ff26fc2c7a1e8b9635c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_gspread$urls =
{
    PyModuleDef_HEAD_INIT,
    "gspread.urls",
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
MOD_ENTRY_DECL(gspread$urls)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(gspread$urls)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_gspread$urls );
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
    puts("gspread.urls: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("gspread.urls: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("gspread.urls: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initgspread$urls" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_gspread$urls = Py_InitModule4(
        "gspread.urls",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_gspread$urls = PyModule_Create( &mdef_gspread$urls );
#endif

    moduledict_gspread$urls = MODULE_DICT( module_gspread$urls );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_gspread$urls,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_gspread$urls,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_gspread$urls,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_gspread$urls,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_gspread$urls );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_5ca1bce0bc266e01eb97ffecc8992c2f, module_gspread$urls );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_5e58a2ff9a520dfbe56acef94a2716b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_96a274f532e654b4f844552dc90eac11;
        UPDATE_STRING_DICT0( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_194511086960bf081fbae0495e24bad0;
        UPDATE_STRING_DICT0( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_5e58a2ff9a520dfbe56acef94a2716b3 = MAKE_MODULE_FRAME( codeobj_5e58a2ff9a520dfbe56acef94a2716b3, module_gspread$urls );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_5e58a2ff9a520dfbe56acef94a2716b3 );
    assert( Py_REFCNT( frame_5e58a2ff9a520dfbe56acef94a2716b3 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_194511086960bf081fbae0495e24bad0;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain___spec__ );

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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e58a2ff9a520dfbe56acef94a2716b3 );
#endif
    popFrameStack();

    assertFrameObject( frame_5e58a2ff9a520dfbe56acef94a2716b3 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e58a2ff9a520dfbe56acef94a2716b3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5e58a2ff9a520dfbe56acef94a2716b3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5e58a2ff9a520dfbe56acef94a2716b3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5e58a2ff9a520dfbe56acef94a2716b3, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_str_digest_a7d86d946056cb82a064f23960067670;
        UPDATE_STRING_DICT0( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain_SPREADSHEETS_API_V4_BASE_URL, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain_SPREADSHEETS_API_V4_BASE_URL );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPREADSHEETS_API_V4_BASE_URL );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_left_name_1 = tmp_mvar_value_3;
        tmp_right_name_1 = const_str_digest_5223be42f5eb922165bfb0b8bb88f9ec;
        tmp_assign_source_5 = BINARY_OPERATION_ADD_UNICODE_UNICODE( tmp_left_name_1, tmp_right_name_1 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain_SPREADSHEET_URL, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain_SPREADSHEETS_API_V4_BASE_URL );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPREADSHEETS_API_V4_BASE_URL );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_left_name_2 = tmp_mvar_value_4;
        tmp_right_name_2 = const_str_digest_6677b15af5016f4e3eb2378c66c7b65b;
        tmp_assign_source_6 = BINARY_OPERATION_ADD_UNICODE_UNICODE( tmp_left_name_2, tmp_right_name_2 );
        assert( !(tmp_assign_source_6 == NULL) );
        UPDATE_STRING_DICT1( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain_SPREADSHEET_BATCH_UPDATE_URL, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_right_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain_SPREADSHEETS_API_V4_BASE_URL );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPREADSHEETS_API_V4_BASE_URL );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_left_name_3 = tmp_mvar_value_5;
        tmp_right_name_3 = const_str_digest_bd422b5224098055ff664f2a8aa90c64;
        tmp_assign_source_7 = BINARY_OPERATION_ADD_UNICODE_UNICODE( tmp_left_name_3, tmp_right_name_3 );
        assert( !(tmp_assign_source_7 == NULL) );
        UPDATE_STRING_DICT1( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain_SPREADSHEET_VALUES_URL, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_right_name_4;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain_SPREADSHEET_VALUES_URL );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPREADSHEET_VALUES_URL );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_left_name_4 = tmp_mvar_value_6;
        tmp_right_name_4 = const_str_digest_a002988868962dfe639c481833db439a;
        tmp_assign_source_8 = BINARY_OPERATION_ADD_UNICODE_UNICODE( tmp_left_name_4, tmp_right_name_4 );
        assert( !(tmp_assign_source_8 == NULL) );
        UPDATE_STRING_DICT1( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain_SPREADSHEET_VALUES_APPEND_URL, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_right_name_5;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain_SPREADSHEET_VALUES_URL );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPREADSHEET_VALUES_URL );
        }

        CHECK_OBJECT( tmp_mvar_value_7 );
        tmp_left_name_5 = tmp_mvar_value_7;
        tmp_right_name_5 = const_str_digest_463f42e9c9b9e801ed55781e6660c99d;
        tmp_assign_source_9 = BINARY_OPERATION_ADD_UNICODE_UNICODE( tmp_left_name_5, tmp_right_name_5 );
        assert( !(tmp_assign_source_9 == NULL) );
        UPDATE_STRING_DICT1( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain_SPREADSHEET_VALUES_CLEAR_URL, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_str_digest_545b0502a08ca0860aeb99270bc29519;
        UPDATE_STRING_DICT0( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain_DRIVE_FILES_API_V2_URL, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_str_digest_65f8a8faf3c9cc9d9630ec066aebcf95;
        UPDATE_STRING_DICT0( moduledict_gspread$urls, (Nuitka_StringObject *)const_str_plain_DRIVE_FILES_UPLOAD_API_V2_URL, tmp_assign_source_11 );
    }

    return MOD_RETURN_VALUE( module_gspread$urls );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
