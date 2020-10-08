/* Generated code for Python module 'rsa'
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

/* The "_module_rsa" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rsa;
PyDictObject *moduledict_rsa;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_digest_d87a867a1da18e127aa595b45709adf5;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_a4f827080968323bb16c4cc74ee94473_tuple;
extern PyObject *const_str_plain_encrypt;
static PyObject *const_str_digest_6963879975f6283aa1ca4b8035ddaa48;
static PyObject *const_tuple_str_plain_newkeys_str_plain_PrivateKey_str_plain_PublicKey_tuple;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_fc6be4516f2b0b0706b3a3db64233bac;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_96561172ec2844fc327809c0e8706666;
static PyObject *const_list_0992c036cc5be91a9c3c6dbf0a109a90_list;
extern PyObject *const_str_plain_sign_hash;
static PyObject *const_str_digest_49cf2fa9f62188135f03f852d3118633;
extern PyObject *const_str_plain_PrivateKey;
static PyObject *const_str_digest_bf7919470eb7f9244f88e3016d2ba44d;
static PyObject *const_str_plain___date__;
extern PyObject *const_str_plain___version__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_DecryptionError;
static PyObject *const_str_digest_c3ac55f8d90bcae8a55ee79a6c306c7d;
extern PyObject *const_str_plain_VerificationError;
extern PyObject *const_str_plain_decrypt;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_ec008b11def3fee25602c86081895340;
extern PyObject *const_str_plain_newkeys;
extern PyObject *const_str_plain_PublicKey;
extern PyObject *const_str_plain_rsa;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_verify;
extern PyObject *const_str_plain_has_location;
static PyObject *const_list_str_digest_6963879975f6283aa1ca4b8035ddaa48_list;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_digest_172952d0bc04806234e0d58ce32ce3d8;
extern PyObject *const_str_plain_find_signature_hash;
extern PyObject *const_str_plain_compute_hash;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_a4f827080968323bb16c4cc74ee94473_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_a4f827080968323bb16c4cc74ee94473_tuple, 0, const_str_plain_encrypt ); Py_INCREF( const_str_plain_encrypt );
    PyTuple_SET_ITEM( const_tuple_a4f827080968323bb16c4cc74ee94473_tuple, 1, const_str_plain_decrypt ); Py_INCREF( const_str_plain_decrypt );
    PyTuple_SET_ITEM( const_tuple_a4f827080968323bb16c4cc74ee94473_tuple, 2, const_str_plain_sign ); Py_INCREF( const_str_plain_sign );
    PyTuple_SET_ITEM( const_tuple_a4f827080968323bb16c4cc74ee94473_tuple, 3, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_a4f827080968323bb16c4cc74ee94473_tuple, 4, const_str_plain_DecryptionError ); Py_INCREF( const_str_plain_DecryptionError );
    PyTuple_SET_ITEM( const_tuple_a4f827080968323bb16c4cc74ee94473_tuple, 5, const_str_plain_VerificationError ); Py_INCREF( const_str_plain_VerificationError );
    PyTuple_SET_ITEM( const_tuple_a4f827080968323bb16c4cc74ee94473_tuple, 6, const_str_plain_find_signature_hash ); Py_INCREF( const_str_plain_find_signature_hash );
    PyTuple_SET_ITEM( const_tuple_a4f827080968323bb16c4cc74ee94473_tuple, 7, const_str_plain_sign_hash ); Py_INCREF( const_str_plain_sign_hash );
    PyTuple_SET_ITEM( const_tuple_a4f827080968323bb16c4cc74ee94473_tuple, 8, const_str_plain_compute_hash ); Py_INCREF( const_str_plain_compute_hash );
    const_str_digest_6963879975f6283aa1ca4b8035ddaa48 = UNSTREAM_STRING_ASCII( &constant_bin[ 2716336 ], 31, 0 );
    const_tuple_str_plain_newkeys_str_plain_PrivateKey_str_plain_PublicKey_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_newkeys_str_plain_PrivateKey_str_plain_PublicKey_tuple, 0, const_str_plain_newkeys ); Py_INCREF( const_str_plain_newkeys );
    PyTuple_SET_ITEM( const_tuple_str_plain_newkeys_str_plain_PrivateKey_str_plain_PublicKey_tuple, 1, const_str_plain_PrivateKey ); Py_INCREF( const_str_plain_PrivateKey );
    PyTuple_SET_ITEM( const_tuple_str_plain_newkeys_str_plain_PrivateKey_str_plain_PublicKey_tuple, 2, const_str_plain_PublicKey ); Py_INCREF( const_str_plain_PublicKey );
    const_str_digest_fc6be4516f2b0b0706b3a3db64233bac = UNSTREAM_STRING_ASCII( &constant_bin[ 2716367 ], 51, 0 );
    const_str_digest_96561172ec2844fc327809c0e8706666 = UNSTREAM_STRING_ASCII( &constant_bin[ 2716418 ], 309, 0 );
    const_list_0992c036cc5be91a9c3c6dbf0a109a90_list = PyList_New( 11 );
    PyList_SET_ITEM( const_list_0992c036cc5be91a9c3c6dbf0a109a90_list, 0, const_str_plain_newkeys ); Py_INCREF( const_str_plain_newkeys );
    PyList_SET_ITEM( const_list_0992c036cc5be91a9c3c6dbf0a109a90_list, 1, const_str_plain_encrypt ); Py_INCREF( const_str_plain_encrypt );
    PyList_SET_ITEM( const_list_0992c036cc5be91a9c3c6dbf0a109a90_list, 2, const_str_plain_decrypt ); Py_INCREF( const_str_plain_decrypt );
    PyList_SET_ITEM( const_list_0992c036cc5be91a9c3c6dbf0a109a90_list, 3, const_str_plain_sign ); Py_INCREF( const_str_plain_sign );
    PyList_SET_ITEM( const_list_0992c036cc5be91a9c3c6dbf0a109a90_list, 4, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyList_SET_ITEM( const_list_0992c036cc5be91a9c3c6dbf0a109a90_list, 5, const_str_plain_PublicKey ); Py_INCREF( const_str_plain_PublicKey );
    PyList_SET_ITEM( const_list_0992c036cc5be91a9c3c6dbf0a109a90_list, 6, const_str_plain_PrivateKey ); Py_INCREF( const_str_plain_PrivateKey );
    PyList_SET_ITEM( const_list_0992c036cc5be91a9c3c6dbf0a109a90_list, 7, const_str_plain_DecryptionError ); Py_INCREF( const_str_plain_DecryptionError );
    PyList_SET_ITEM( const_list_0992c036cc5be91a9c3c6dbf0a109a90_list, 8, const_str_plain_VerificationError ); Py_INCREF( const_str_plain_VerificationError );
    PyList_SET_ITEM( const_list_0992c036cc5be91a9c3c6dbf0a109a90_list, 9, const_str_plain_compute_hash ); Py_INCREF( const_str_plain_compute_hash );
    PyList_SET_ITEM( const_list_0992c036cc5be91a9c3c6dbf0a109a90_list, 10, const_str_plain_sign_hash ); Py_INCREF( const_str_plain_sign_hash );
    const_str_digest_49cf2fa9f62188135f03f852d3118633 = UNSTREAM_STRING_ASCII( &constant_bin[ 2716727 ], 12, 0 );
    const_str_digest_bf7919470eb7f9244f88e3016d2ba44d = UNSTREAM_STRING_ASCII( &constant_bin[ 2716739 ], 43, 0 );
    const_str_plain___date__ = UNSTREAM_STRING_ASCII( &constant_bin[ 2716782 ], 8, 1 );
    const_str_digest_c3ac55f8d90bcae8a55ee79a6c306c7d = UNSTREAM_STRING_ASCII( &constant_bin[ 2716790 ], 10, 0 );
    const_list_str_digest_6963879975f6283aa1ca4b8035ddaa48_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_6963879975f6283aa1ca4b8035ddaa48_list, 0, const_str_digest_6963879975f6283aa1ca4b8035ddaa48 ); Py_INCREF( const_str_digest_6963879975f6283aa1ca4b8035ddaa48 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_rsa( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_5f4effdd1181d049122504f36434e58c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_bf7919470eb7f9244f88e3016d2ba44d;
    codeobj_5f4effdd1181d049122504f36434e58c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_49cf2fa9f62188135f03f852d3118633, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_rsa =
{
    PyModuleDef_HEAD_INIT,
    "rsa",
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
MOD_ENTRY_DECL(rsa)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(rsa)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_rsa );
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
    puts("rsa: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrsa" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_rsa = Py_InitModule4(
        "rsa",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_rsa = PyModule_Create( &mdef_rsa );
#endif

    moduledict_rsa = MODULE_DICT( module_rsa );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_rsa,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_rsa,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_rsa );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_rsa, module_rsa );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_5f4effdd1181d049122504f36434e58c;
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
        tmp_assign_source_1 = const_str_digest_96561172ec2844fc327809c0e8706666;
        UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_bf7919470eb7f9244f88e3016d2ba44d;
        UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY( const_list_str_digest_6963879975f6283aa1ca4b8035ddaa48_list );
        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_5f4effdd1181d049122504f36434e58c = MAKE_MODULE_FRAME( codeobj_5f4effdd1181d049122504f36434e58c, module_rsa );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_5f4effdd1181d049122504f36434e58c );
    assert( Py_REFCNT( frame_5f4effdd1181d049122504f36434e58c ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_bf7919470eb7f9244f88e3016d2ba44d;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_d87a867a1da18e127aa595b45709adf5;
        tmp_globals_name_1 = (PyObject *)moduledict_rsa;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_newkeys_str_plain_PrivateKey_str_plain_PublicKey_tuple;
        tmp_level_name_1 = const_int_0;
        frame_5f4effdd1181d049122504f36434e58c->m_frame.f_lineno = 26;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

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
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_newkeys );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_newkeys, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_PrivateKey );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_PrivateKey, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_PublicKey );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_PublicKey, tmp_assign_source_8 );
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_172952d0bc04806234e0d58ce32ce3d8;
        tmp_globals_name_2 = (PyObject *)moduledict_rsa;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_a4f827080968323bb16c4cc74ee94473_tuple;
        tmp_level_name_2 = const_int_0;
        frame_5f4effdd1181d049122504f36434e58c->m_frame.f_lineno = 27;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_encrypt );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_encrypt, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_decrypt );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_decrypt, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_sign );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_sign, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_verify );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_verify, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_DecryptionError );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_DecryptionError, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_VerificationError );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_VerificationError, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_find_signature_hash );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_find_signature_hash, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_sign_hash );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_sign_hash, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_12 = tmp_import_from_2__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_compute_hash );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain_compute_hash, tmp_assign_source_18 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f4effdd1181d049122504f36434e58c );
#endif
    popFrameStack();

    assertFrameObject( frame_5f4effdd1181d049122504f36434e58c );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f4effdd1181d049122504f36434e58c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5f4effdd1181d049122504f36434e58c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5f4effdd1181d049122504f36434e58c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5f4effdd1181d049122504f36434e58c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = const_str_digest_fc6be4516f2b0b0706b3a3db64233bac;
        UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = const_str_digest_c3ac55f8d90bcae8a55ee79a6c306c7d;
        UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___date__, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = const_str_digest_ec008b11def3fee25602c86081895340;
        UPDATE_STRING_DICT0( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = LIST_COPY( const_list_0992c036cc5be91a9c3c6dbf0a109a90_list );
        UPDATE_STRING_DICT1( moduledict_rsa, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_22 );
    }

    return MOD_RETURN_VALUE( module_rsa );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
