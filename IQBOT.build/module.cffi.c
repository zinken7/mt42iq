/* Generated code for Python module 'cffi'
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

/* The "_module_cffi" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cffi;
PyDictObject *moduledict_cffi;

/* The declarations of module constants used, if any. */
extern PyObject *const_int_pos_12;
static PyObject *const_list_cc8e118e059b198af50b284f923babfd_list;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_api;
static PyObject *const_str_digest_04dc97e700ba5e02233a6a55b589456e;
static PyObject *const_tuple_5567394af7b6abc138a4a3691ec67957_tuple;
extern PyObject *const_str_plain___version_info__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_PkgConfigError;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_b0a71fe9de45238f617fde22d177a607;
static PyObject *const_str_digest_28743f399ab6565b33215f0f8ac28a72;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain___version_verifier_modules__;
static PyObject *const_str_digest_cf243fd84fa162616a9a5ed682f3634f;
extern PyObject *const_str_plain_VerificationMissing;
static PyObject *const_tuple_str_plain_FFI_tuple;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_FFI;
extern PyObject *const_str_plain_VerificationError;
extern PyObject *const_str_plain_origin;
static PyObject *const_list_str_digest_28743f399ab6565b33215f0f8ac28a72_list;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_FFIError;
static PyObject *const_str_digest_df67a86a96fa35e73a0be0955929765f;
extern PyObject *const_str_plain_cffi;
extern PyObject *const_tuple_str_plain_PkgConfigError_tuple;
static PyObject *const_tuple_int_pos_1_int_pos_12_int_pos_3_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_CDefError;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_error;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_list_cc8e118e059b198af50b284f923babfd_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_cc8e118e059b198af50b284f923babfd_list, 0, const_str_plain_FFI ); Py_INCREF( const_str_plain_FFI );
    PyList_SET_ITEM( const_list_cc8e118e059b198af50b284f923babfd_list, 1, const_str_plain_VerificationError ); Py_INCREF( const_str_plain_VerificationError );
    PyList_SET_ITEM( const_list_cc8e118e059b198af50b284f923babfd_list, 2, const_str_plain_VerificationMissing ); Py_INCREF( const_str_plain_VerificationMissing );
    PyList_SET_ITEM( const_list_cc8e118e059b198af50b284f923babfd_list, 3, const_str_plain_CDefError ); Py_INCREF( const_str_plain_CDefError );
    PyList_SET_ITEM( const_list_cc8e118e059b198af50b284f923babfd_list, 4, const_str_plain_FFIError ); Py_INCREF( const_str_plain_FFIError );
    const_str_digest_04dc97e700ba5e02233a6a55b589456e = UNSTREAM_STRING_ASCII( &constant_bin[ 47222 ], 5, 0 );
    const_tuple_5567394af7b6abc138a4a3691ec67957_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_5567394af7b6abc138a4a3691ec67957_tuple, 0, const_str_plain_CDefError ); Py_INCREF( const_str_plain_CDefError );
    PyTuple_SET_ITEM( const_tuple_5567394af7b6abc138a4a3691ec67957_tuple, 1, const_str_plain_FFIError ); Py_INCREF( const_str_plain_FFIError );
    PyTuple_SET_ITEM( const_tuple_5567394af7b6abc138a4a3691ec67957_tuple, 2, const_str_plain_VerificationError ); Py_INCREF( const_str_plain_VerificationError );
    PyTuple_SET_ITEM( const_tuple_5567394af7b6abc138a4a3691ec67957_tuple, 3, const_str_plain_VerificationMissing ); Py_INCREF( const_str_plain_VerificationMissing );
    const_str_digest_b0a71fe9de45238f617fde22d177a607 = UNSTREAM_STRING_ASCII( &constant_bin[ 47227 ], 6, 0 );
    const_str_digest_28743f399ab6565b33215f0f8ac28a72 = UNSTREAM_STRING_ASCII( &constant_bin[ 47233 ], 32, 0 );
    const_str_digest_cf243fd84fa162616a9a5ed682f3634f = UNSTREAM_STRING_ASCII( &constant_bin[ 47265 ], 13, 0 );
    const_tuple_str_plain_FFI_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FFI_tuple, 0, const_str_plain_FFI ); Py_INCREF( const_str_plain_FFI );
    const_list_str_digest_28743f399ab6565b33215f0f8ac28a72_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_28743f399ab6565b33215f0f8ac28a72_list, 0, const_str_digest_28743f399ab6565b33215f0f8ac28a72 ); Py_INCREF( const_str_digest_28743f399ab6565b33215f0f8ac28a72 );
    const_str_digest_df67a86a96fa35e73a0be0955929765f = UNSTREAM_STRING_ASCII( &constant_bin[ 47278 ], 44, 0 );
    const_tuple_int_pos_1_int_pos_12_int_pos_3_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_12_int_pos_3_tuple, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_12_int_pos_3_tuple, 1, const_int_pos_12 ); Py_INCREF( const_int_pos_12 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_12_int_pos_3_tuple, 2, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cffi( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_fd86e486e79108eaab28407a179928c7;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_df67a86a96fa35e73a0be0955929765f;
    codeobj_fd86e486e79108eaab28407a179928c7 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_cf243fd84fa162616a9a5ed682f3634f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cffi =
{
    PyModuleDef_HEAD_INIT,
    "cffi",
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
MOD_ENTRY_DECL(cffi)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(cffi)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cffi );
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
    puts("cffi: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cffi: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cffi: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcffi" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cffi = Py_InitModule4(
        "cffi",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cffi = PyModule_Create( &mdef_cffi );
#endif

    moduledict_cffi = MODULE_DICT( module_cffi );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_cffi,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cffi,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cffi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cffi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cffi );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_cffi, module_cffi );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_fd86e486e79108eaab28407a179928c7;
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
        UPDATE_STRING_DICT0( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_df67a86a96fa35e73a0be0955929765f;
        UPDATE_STRING_DICT0( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY( const_list_str_digest_28743f399ab6565b33215f0f8ac28a72_list );
        UPDATE_STRING_DICT1( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_fd86e486e79108eaab28407a179928c7 = MAKE_MODULE_FRAME( codeobj_fd86e486e79108eaab28407a179928c7, module_cffi );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_fd86e486e79108eaab28407a179928c7 );
    assert( Py_REFCNT( frame_fd86e486e79108eaab28407a179928c7 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_df67a86a96fa35e73a0be0955929765f;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = LIST_COPY( const_list_cc8e118e059b198af50b284f923babfd_list );
        UPDATE_STRING_DICT1( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_api;
        tmp_globals_name_1 = (PyObject *)moduledict_cffi;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_FFI_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_fd86e486e79108eaab28407a179928c7->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_cffi,
                const_str_plain_FFI,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_FFI );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_cffi, (Nuitka_StringObject *)const_str_plain_FFI, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_error;
        tmp_globals_name_2 = (PyObject *)moduledict_cffi;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_5567394af7b6abc138a4a3691ec67957_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_fd86e486e79108eaab28407a179928c7->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_cffi,
                const_str_plain_CDefError,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_CDefError );
        }

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_cffi, (Nuitka_StringObject *)const_str_plain_CDefError, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_cffi,
                const_str_plain_FFIError,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_FFIError );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_cffi, (Nuitka_StringObject *)const_str_plain_FFIError, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_cffi,
                const_str_plain_VerificationError,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_VerificationError );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_cffi, (Nuitka_StringObject *)const_str_plain_VerificationError, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_cffi,
                const_str_plain_VerificationMissing,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_VerificationMissing );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_cffi, (Nuitka_StringObject *)const_str_plain_VerificationMissing, tmp_assign_source_11 );
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
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_error;
        tmp_globals_name_3 = (PyObject *)moduledict_cffi;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_PkgConfigError_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_fd86e486e79108eaab28407a179928c7->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_cffi,
                const_str_plain_PkgConfigError,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_PkgConfigError );
        }

        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_cffi, (Nuitka_StringObject *)const_str_plain_PkgConfigError, tmp_assign_source_12 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd86e486e79108eaab28407a179928c7 );
#endif
    popFrameStack();

    assertFrameObject( frame_fd86e486e79108eaab28407a179928c7 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd86e486e79108eaab28407a179928c7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fd86e486e79108eaab28407a179928c7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fd86e486e79108eaab28407a179928c7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fd86e486e79108eaab28407a179928c7, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_str_digest_b0a71fe9de45238f617fde22d177a607;
        UPDATE_STRING_DICT0( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_tuple_int_pos_1_int_pos_12_int_pos_3_tuple;
        UPDATE_STRING_DICT0( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___version_info__, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = const_str_digest_04dc97e700ba5e02233a6a55b589456e;
        UPDATE_STRING_DICT0( moduledict_cffi, (Nuitka_StringObject *)const_str_plain___version_verifier_modules__, tmp_assign_source_15 );
    }

    return MOD_RETURN_VALUE( module_cffi );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
