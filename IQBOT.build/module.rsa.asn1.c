/* Generated code for Python module 'rsa.asn1'
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

/* The "_module_rsa$asn1" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rsa$asn1;
PyDictObject *moduledict_rsa$asn1;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_Null;
extern PyObject *const_str_plain_oid;
extern PyObject *const_str_plain_tag;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_NamedTypes;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_implicitTag;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_subtype;
static PyObject *const_str_digest_20ff472d6ddbdff0a9adb6a92ed88ea0;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_digest_7c8c58049edd248f8b1cb370445e702c;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_univ;
extern PyObject *const_str_plain_tagClass;
extern PyObject *const_str_plain_key;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_publicExponent;
static PyObject *const_str_digest_a84d7e4facb06a6d2f9e364b5169da44;
extern PyObject *const_str_plain_Sequence;
extern PyObject *const_str_plain_parameters;
extern PyObject *const_str_plain_NamedType;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_tagFormat;
extern PyObject *const_str_plain_modulus;
static PyObject *const_str_digest_cf08a2472617f57ecf4c4359c6303dc5;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_plain_PubKeyHeader;
extern PyObject *const_str_digest_ee52f19f6eef7462714cc4db074b9a85;
extern PyObject *const_str_plain_Tag;
extern PyObject *const_str_plain_header;
static PyObject *const_dict_fec7ef745ca4a88c8ef2d383b7f3d75a;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_componentType;
static PyObject *const_str_digest_0999ade9b9ff3a208cfce22f4d5e7d61;
extern PyObject *const_str_plain_OpenSSLPubKey;
extern PyObject *const_str_plain_OctetString;
extern PyObject *const_str_plain_AsnPubKey;
extern PyObject *const_str_plain_namedtype;
static PyObject *const_tuple_str_plain_univ_str_plain_namedtype_str_plain_tag_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_ObjectIdentifier;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_tagId;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_Integer;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_20ff472d6ddbdff0a9adb6a92ed88ea0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2718138 ], 163, 0 );
    const_str_digest_a84d7e4facb06a6d2f9e364b5169da44 = UNSTREAM_STRING_ASCII( &constant_bin[ 2718301 ], 39, 0 );
    const_str_digest_cf08a2472617f57ecf4c4359c6303dc5 = UNSTREAM_STRING_ASCII( &constant_bin[ 2718340 ], 17, 0 );
    const_str_plain_PubKeyHeader = UNSTREAM_STRING_ASCII( &constant_bin[ 2718357 ], 12, 1 );
    const_dict_fec7ef745ca4a88c8ef2d383b7f3d75a = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_fec7ef745ca4a88c8ef2d383b7f3d75a, const_str_plain_tagClass, const_int_0 );
    PyDict_SetItem( const_dict_fec7ef745ca4a88c8ef2d383b7f3d75a, const_str_plain_tagFormat, const_int_0 );
    PyDict_SetItem( const_dict_fec7ef745ca4a88c8ef2d383b7f3d75a, const_str_plain_tagId, const_int_pos_3 );
    assert( PyDict_Size( const_dict_fec7ef745ca4a88c8ef2d383b7f3d75a ) == 3 );
    const_str_digest_0999ade9b9ff3a208cfce22f4d5e7d61 = UNSTREAM_STRING_ASCII( &constant_bin[ 2718369 ], 110, 0 );
    const_tuple_str_plain_univ_str_plain_namedtype_str_plain_tag_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_univ_str_plain_namedtype_str_plain_tag_tuple, 0, const_str_plain_univ ); Py_INCREF( const_str_plain_univ );
    PyTuple_SET_ITEM( const_tuple_str_plain_univ_str_plain_namedtype_str_plain_tag_tuple, 1, const_str_plain_namedtype ); Py_INCREF( const_str_plain_namedtype );
    PyTuple_SET_ITEM( const_tuple_str_plain_univ_str_plain_namedtype_str_plain_tag_tuple, 2, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_rsa$asn1( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_adae6286ac50c1414cd757592be1ad81;
static PyCodeObject *codeobj_00bc0d289974b06a7a54abf4b3ce961b;
static PyCodeObject *codeobj_ba3b47ca1a0d2e8e9bc0ba5434d95e46;
static PyCodeObject *codeobj_d10b09faf8e6a40a3a34626ca2870012;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_a84d7e4facb06a6d2f9e364b5169da44;
    codeobj_adae6286ac50c1414cd757592be1ad81 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_cf08a2472617f57ecf4c4359c6303dc5, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_00bc0d289974b06a7a54abf4b3ce961b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_AsnPubKey, 42, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_ba3b47ca1a0d2e8e9bc0ba5434d95e46 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_OpenSSLPubKey, 32, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_d10b09faf8e6a40a3a34626ca2870012 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PubKeyHeader, 25, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_rsa$asn1 =
{
    PyModuleDef_HEAD_INIT,
    "rsa.asn1",
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
MOD_ENTRY_DECL(rsa$asn1)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(rsa$asn1)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_rsa$asn1 );
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
    puts("rsa.asn1: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.asn1: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.asn1: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrsa$asn1" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_rsa$asn1 = Py_InitModule4(
        "rsa.asn1",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_rsa$asn1 = PyModule_Create( &mdef_rsa$asn1 );
#endif

    moduledict_rsa$asn1 = MODULE_DICT( module_rsa$asn1 );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_rsa$asn1,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_rsa$asn1,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$asn1,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$asn1,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_rsa$asn1 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ee52f19f6eef7462714cc4db074b9a85, module_rsa$asn1 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_adae6286ac50c1414cd757592be1ad81;
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
    PyObject *locals_rsa$asn1_25 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_d10b09faf8e6a40a3a34626ca2870012_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d10b09faf8e6a40a3a34626ca2870012_2 = NULL;
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
    PyObject *locals_rsa$asn1_32 = NULL;
    struct Nuitka_FrameObject *frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_rsa$asn1_42 = NULL;
    struct Nuitka_FrameObject *frame_00bc0d289974b06a7a54abf4b3ce961b_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_00bc0d289974b06a7a54abf4b3ce961b_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_0999ade9b9ff3a208cfce22f4d5e7d61;
        UPDATE_STRING_DICT0( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_a84d7e4facb06a6d2f9e364b5169da44;
        UPDATE_STRING_DICT0( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_adae6286ac50c1414cd757592be1ad81 = MAKE_MODULE_FRAME( codeobj_adae6286ac50c1414cd757592be1ad81, module_rsa$asn1 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_adae6286ac50c1414cd757592be1ad81 );
    assert( Py_REFCNT( frame_adae6286ac50c1414cd757592be1ad81 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_a84d7e4facb06a6d2f9e364b5169da44;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_7c8c58049edd248f8b1cb370445e702c;
        tmp_globals_name_1 = (PyObject *)moduledict_rsa$asn1;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_univ_str_plain_namedtype_str_plain_tag_tuple;
        tmp_level_name_1 = const_int_0;
        frame_adae6286ac50c1414cd757592be1ad81->m_frame.f_lineno = 22;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_univ );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_univ, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_namedtype );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_namedtype, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_tag );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_tag, tmp_assign_source_7 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;

            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Sequence );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_2;
        }
        tmp_assign_source_8 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_8, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases_orig == NULL );
        tmp_class_creation_1__bases_orig = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT( tmp_class_creation_1__bases_orig );
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_9 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
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


            exception_lineno = 25;

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


            exception_lineno = 25;

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


            exception_lineno = 25;

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


            exception_lineno = 25;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

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
        tmp_assign_source_11 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_11;
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


            exception_lineno = 25;

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


            exception_lineno = 25;

            goto try_except_handler_2;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_2 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_2, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_3 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_2;
            }
            tmp_tuple_element_2 = const_str_plain_PubKeyHeader;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_adae6286ac50c1414cd757592be1ad81->m_frame.f_lineno = 25;
            tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_12;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_4 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_4, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

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
                PyObject *tmp_source_name_5;
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


                    exception_lineno = 25;

                    goto try_except_handler_2;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_5 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_5 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 25;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 25;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 25;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_13;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_rsa$asn1_25 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_ee52f19f6eef7462714cc4db074b9a85;
        tmp_res = PyObject_SetItem( locals_rsa$asn1_25, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_PubKeyHeader;
        tmp_res = PyObject_SetItem( locals_rsa$asn1_25, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_d10b09faf8e6a40a3a34626ca2870012_2, codeobj_d10b09faf8e6a40a3a34626ca2870012, module_rsa$asn1, sizeof(void *) );
        frame_d10b09faf8e6a40a3a34626ca2870012_2 = cache_frame_d10b09faf8e6a40a3a34626ca2870012_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_d10b09faf8e6a40a3a34626ca2870012_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_d10b09faf8e6a40a3a34626ca2870012_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_8;
            tmp_source_name_6 = PyObject_GetItem( locals_rsa$asn1_25, const_str_plain_namedtype );

            if ( tmp_source_name_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_namedtype );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtype );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "namedtype" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 26;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_6 = tmp_mvar_value_4;
                Py_INCREF( tmp_source_name_6 );
                }
            }

            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_NamedTypes );
            Py_DECREF( tmp_source_name_6 );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_source_name_7 = PyObject_GetItem( locals_rsa$asn1_25, const_str_plain_namedtype );

            if ( tmp_source_name_7 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_namedtype );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtype );
                }

                if ( tmp_mvar_value_5 == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "namedtype" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 27;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_7 = tmp_mvar_value_5;
                Py_INCREF( tmp_source_name_7 );
                }
            }

            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_NamedType );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_2 = const_str_plain_oid;
            tmp_called_instance_1 = PyObject_GetItem( locals_rsa$asn1_25, const_str_plain_univ );

            if ( tmp_called_instance_1 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_univ );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
                }

                if ( tmp_mvar_value_6 == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_called_name_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 27;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_instance_1 = tmp_mvar_value_6;
                Py_INCREF( tmp_called_instance_1 );
                }
            }

            frame_d10b09faf8e6a40a3a34626ca2870012_2->m_frame.f_lineno = 27;
            tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ObjectIdentifier );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_d10b09faf8e6a40a3a34626ca2870012_2->m_frame.f_lineno = 27;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_source_name_8 = PyObject_GetItem( locals_rsa$asn1_25, const_str_plain_namedtype );

            if ( tmp_source_name_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_namedtype );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtype );
                }

                if ( tmp_mvar_value_7 == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_args_element_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "namedtype" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_8 = tmp_mvar_value_7;
                Py_INCREF( tmp_source_name_8 );
                }
            }

            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_NamedType );
            Py_DECREF( tmp_source_name_8 );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_5 = const_str_plain_parameters;
            tmp_called_instance_2 = PyObject_GetItem( locals_rsa$asn1_25, const_str_plain_univ );

            if ( tmp_called_instance_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_univ );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
                }

                if ( tmp_mvar_value_8 == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_args_element_name_1 );
                    Py_DECREF( tmp_called_name_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_instance_2 = tmp_mvar_value_8;
                Py_INCREF( tmp_called_instance_2 );
                }
            }

            frame_d10b09faf8e6a40a3a34626ca2870012_2->m_frame.f_lineno = 28;
            tmp_args_element_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_Null );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_d10b09faf8e6a40a3a34626ca2870012_2->m_frame.f_lineno = 28;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_d10b09faf8e6a40a3a34626ca2870012_2->m_frame.f_lineno = 26;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_rsa$asn1_25, const_str_plain_componentType, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d10b09faf8e6a40a3a34626ca2870012_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d10b09faf8e6a40a3a34626ca2870012_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_d10b09faf8e6a40a3a34626ca2870012_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_d10b09faf8e6a40a3a34626ca2870012_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_d10b09faf8e6a40a3a34626ca2870012_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_d10b09faf8e6a40a3a34626ca2870012_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_d10b09faf8e6a40a3a34626ca2870012_2 == cache_frame_d10b09faf8e6a40a3a34626ca2870012_2 )
        {
            Py_DECREF( frame_d10b09faf8e6a40a3a34626ca2870012_2 );
        }
        cache_frame_d10b09faf8e6a40a3a34626ca2870012_2 = NULL;

        assertFrameObject( frame_d10b09faf8e6a40a3a34626ca2870012_2 );

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


                exception_lineno = 25;

                goto try_except_handler_4;
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
            tmp_res = PyObject_SetItem( locals_rsa$asn1_25, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_PubKeyHeader;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_rsa$asn1_25;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_adae6286ac50c1414cd757592be1ad81->m_frame.f_lineno = 25;
            tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_15;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_14 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_14 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( rsa$asn1 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_rsa$asn1_25 );
        locals_rsa$asn1_25 = NULL;
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

        Py_DECREF( locals_rsa$asn1_25 );
        locals_rsa$asn1_25 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( rsa$asn1 );
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
        NUITKA_CANNOT_GET_HERE( rsa$asn1 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 25;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_PubKeyHeader, tmp_assign_source_14 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 32;

            goto try_except_handler_5;
        }

        tmp_source_name_9 = tmp_mvar_value_9;
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_Sequence );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_5;
        }
        tmp_assign_source_16 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_16, 0, tmp_tuple_element_5 );
        assert( tmp_class_creation_2__bases_orig == NULL );
        tmp_class_creation_2__bases_orig = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT( tmp_class_creation_2__bases_orig );
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_17 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
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


            exception_lineno = 32;

            goto try_except_handler_5;
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


            exception_lineno = 32;

            goto try_except_handler_5;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_5;
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


            exception_lineno = 32;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_5;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_19 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_19;
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


            exception_lineno = 32;

            goto try_except_handler_5;
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


            exception_lineno = 32;

            goto try_except_handler_5;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_10 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_10, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_11;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_11 = tmp_class_creation_2__metaclass;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;

                goto try_except_handler_5;
            }
            tmp_tuple_element_6 = const_str_plain_OpenSSLPubKey;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_adae6286ac50c1414cd757592be1ad81->m_frame.f_lineno = 32;
            tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;

                goto try_except_handler_5;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_20;
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_12;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_12 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_12, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;

                goto try_except_handler_5;
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
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_13;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_7 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 32;

                    goto try_except_handler_5;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_13 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_13 == NULL) );
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_13 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 32;

                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_7 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 32;

                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 32;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_5;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_21;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_rsa$asn1_32 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_ee52f19f6eef7462714cc4db074b9a85;
        tmp_res = PyObject_SetItem( locals_rsa$asn1_32, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain_OpenSSLPubKey;
        tmp_res = PyObject_SetItem( locals_rsa$asn1_32, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3, codeobj_ba3b47ca1a0d2e8e9bc0ba5434d95e46, module_rsa$asn1, sizeof(void *) );
        frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3 = cache_frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_15;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_17;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_kw_name_4;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_18;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_kw_name_5;
            tmp_source_name_14 = PyObject_GetItem( locals_rsa$asn1_32, const_str_plain_namedtype );

            if ( tmp_source_name_14 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_namedtype );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtype );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "namedtype" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 33;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_source_name_14 = tmp_mvar_value_10;
                Py_INCREF( tmp_source_name_14 );
                }
            }

            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_NamedTypes );
            Py_DECREF( tmp_source_name_14 );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_source_name_15 = PyObject_GetItem( locals_rsa$asn1_32, const_str_plain_namedtype );

            if ( tmp_source_name_15 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_namedtype );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtype );
                }

                if ( tmp_mvar_value_11 == NULL )
                {
                    Py_DECREF( tmp_called_name_7 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "namedtype" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 34;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_source_name_15 = tmp_mvar_value_11;
                Py_INCREF( tmp_source_name_15 );
                }
            }

            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_NamedType );
            Py_DECREF( tmp_source_name_15 );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_args_element_name_8 = const_str_plain_header;
            tmp_called_name_9 = PyObject_GetItem( locals_rsa$asn1_32, const_str_plain_PubKeyHeader );

            if ( tmp_called_name_9 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_PubKeyHeader );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PubKeyHeader );
                }

                if ( tmp_mvar_value_12 == NULL )
                {
                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_called_name_8 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PubKeyHeader" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 34;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_called_name_9 = tmp_mvar_value_12;
                Py_INCREF( tmp_called_name_9 );
                }
            }

            frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3->m_frame.f_lineno = 34;
            tmp_args_element_name_9 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
            Py_DECREF( tmp_called_name_9 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_called_name_8 );

                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3->m_frame.f_lineno = 34;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_source_name_16 = PyObject_GetItem( locals_rsa$asn1_32, const_str_plain_namedtype );

            if ( tmp_source_name_16 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_namedtype );

                if (unlikely( tmp_mvar_value_13 == NULL ))
                {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtype );
                }

                if ( tmp_mvar_value_13 == NULL )
                {
                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_args_element_name_7 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "namedtype" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 37;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_source_name_16 = tmp_mvar_value_13;
                Py_INCREF( tmp_source_name_16 );
                }
            }

            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_NamedType );
            Py_DECREF( tmp_source_name_16 );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_7 );

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_args_element_name_11 = const_str_plain_key;
            tmp_called_instance_3 = PyObject_GetItem( locals_rsa$asn1_32, const_str_plain_univ );

            if ( tmp_called_instance_3 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_univ );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
                }

                if ( tmp_mvar_value_14 == NULL )
                {
                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_args_element_name_7 );
                    Py_DECREF( tmp_called_name_10 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 37;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_called_instance_3 = tmp_mvar_value_14;
                Py_INCREF( tmp_called_instance_3 );
                }
            }

            frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3->m_frame.f_lineno = 37;
            tmp_source_name_17 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_OctetString );
            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_source_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_7 );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_subtype );
            Py_DECREF( tmp_source_name_17 );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_7 );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_1 = const_str_plain_implicitTag;
            tmp_source_name_18 = PyObject_GetItem( locals_rsa$asn1_32, const_str_plain_tag );

            if ( tmp_source_name_18 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_tag );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tag );
                }

                if ( tmp_mvar_value_15 == NULL )
                {
                    Py_DECREF( tmp_called_name_7 );
                    Py_DECREF( tmp_args_element_name_7 );
                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_called_name_11 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tag" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 38;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_source_name_18 = tmp_mvar_value_15;
                Py_INCREF( tmp_source_name_18 );
                }
            }

            tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_Tag );
            Py_DECREF( tmp_source_name_18 );
            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_7 );
                Py_DECREF( tmp_called_name_10 );
                Py_DECREF( tmp_called_name_11 );

                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_kw_name_5 = PyDict_Copy( const_dict_fec7ef745ca4a88c8ef2d383b7f3d75a );
            frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3->m_frame.f_lineno = 38;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_12, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_kw_name_5 );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_7 );
                Py_DECREF( tmp_called_name_10 );
                Py_DECREF( tmp_called_name_11 );

                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_kw_name_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3->m_frame.f_lineno = 37;
            tmp_args_element_name_12 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_11, tmp_kw_name_4 );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_7 );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3->m_frame.f_lineno = 37;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_7 );

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3->m_frame.f_lineno = 33;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_10 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem( locals_rsa$asn1_32, const_str_plain_componentType, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3 == cache_frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3 )
        {
            Py_DECREF( frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3 );
        }
        cache_frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3 = NULL;

        assertFrameObject( frame_ba3b47ca1a0d2e8e9bc0ba5434d95e46_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
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


                exception_lineno = 32;

                goto try_except_handler_7;
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
            tmp_res = PyObject_SetItem( locals_rsa$asn1_32, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;

                goto try_except_handler_7;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_13;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_13 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = const_str_plain_OpenSSLPubKey;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
            tmp_tuple_element_8 = locals_rsa$asn1_32;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_2__class_decl_dict;
            frame_adae6286ac50c1414cd757592be1ad81->m_frame.f_lineno = 32;
            tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_4, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;

                goto try_except_handler_7;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_22 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_22 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( rsa$asn1 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_rsa$asn1_32 );
        locals_rsa$asn1_32 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_rsa$asn1_32 );
        locals_rsa$asn1_32 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( rsa$asn1 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( rsa$asn1 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 32;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_OpenSSLPubKey, tmp_assign_source_22 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_16;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 42;

            goto try_except_handler_8;
        }

        tmp_source_name_19 = tmp_mvar_value_16;
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_Sequence );
        if ( tmp_tuple_element_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        tmp_assign_source_24 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_24, 0, tmp_tuple_element_9 );
        assert( tmp_class_creation_3__bases_orig == NULL );
        tmp_class_creation_3__bases_orig = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT( tmp_class_creation_3__bases_orig );
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF( tmp_dircall_arg1_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_25 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
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


            exception_lineno = 42;

            goto try_except_handler_8;
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


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_class_creation_3__bases );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto try_except_handler_8;
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


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
        Py_DECREF( tmp_type_arg_5 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_3 );
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_27 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_27;
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


            exception_lineno = 42;

            goto try_except_handler_8;
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


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_source_name_20;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_20 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_20, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_name_14;
            PyObject *tmp_source_name_21;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_21 = tmp_class_creation_3__metaclass;
            tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain___prepare__ );
            if ( tmp_called_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;

                goto try_except_handler_8;
            }
            tmp_tuple_element_10 = const_str_plain_AsnPubKey;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_7 = tmp_class_creation_3__class_decl_dict;
            frame_adae6286ac50c1414cd757592be1ad81->m_frame.f_lineno = 42;
            tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_5, tmp_kw_name_7 );
            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;

                goto try_except_handler_8;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_28;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_22;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_22 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_22, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;

                goto try_except_handler_8;
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
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_23;
                PyObject *tmp_type_arg_6;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_11 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 42;

                    goto try_except_handler_8;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_11 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_6 = tmp_class_creation_3__prepared;
                tmp_source_name_23 = BUILTIN_TYPE1( tmp_type_arg_6 );
                assert( !(tmp_source_name_23 == NULL) );
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_23 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 42;

                    goto try_except_handler_8;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_11 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 42;

                    goto try_except_handler_8;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 42;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_8;
            }
            branch_no_11:;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_29;
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_rsa$asn1_42 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_ee52f19f6eef7462714cc4db074b9a85;
        tmp_res = PyObject_SetItem( locals_rsa$asn1_42, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_digest_20ff472d6ddbdff0a9adb6a92ed88ea0;
        tmp_res = PyObject_SetItem( locals_rsa$asn1_42, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_plain_AsnPubKey;
        tmp_res = PyObject_SetItem( locals_rsa$asn1_42, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto try_except_handler_10;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_00bc0d289974b06a7a54abf4b3ce961b_4, codeobj_00bc0d289974b06a7a54abf4b3ce961b, module_rsa$asn1, sizeof(void *) );
        frame_00bc0d289974b06a7a54abf4b3ce961b_4 = cache_frame_00bc0d289974b06a7a54abf4b3ce961b_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_00bc0d289974b06a7a54abf4b3ce961b_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_00bc0d289974b06a7a54abf4b3ce961b_4 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_15;
            PyObject *tmp_source_name_24;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_called_name_16;
            PyObject *tmp_source_name_25;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_called_name_17;
            PyObject *tmp_source_name_26;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_21;
            tmp_source_name_24 = PyObject_GetItem( locals_rsa$asn1_42, const_str_plain_namedtype );

            if ( tmp_source_name_24 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_namedtype );

                if (unlikely( tmp_mvar_value_17 == NULL ))
                {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtype );
                }

                if ( tmp_mvar_value_17 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "namedtype" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 50;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_source_name_24 = tmp_mvar_value_17;
                Py_INCREF( tmp_source_name_24 );
                }
            }

            tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_NamedTypes );
            Py_DECREF( tmp_source_name_24 );
            if ( tmp_called_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_source_name_25 = PyObject_GetItem( locals_rsa$asn1_42, const_str_plain_namedtype );

            if ( tmp_source_name_25 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_namedtype );

                if (unlikely( tmp_mvar_value_18 == NULL ))
                {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtype );
                }

                if ( tmp_mvar_value_18 == NULL )
                {
                    Py_DECREF( tmp_called_name_15 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "namedtype" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 51;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_source_name_25 = tmp_mvar_value_18;
                Py_INCREF( tmp_source_name_25 );
                }
            }

            tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_NamedType );
            Py_DECREF( tmp_source_name_25 );
            if ( tmp_called_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_15 );

                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_args_element_name_14 = const_str_plain_modulus;
            tmp_called_instance_4 = PyObject_GetItem( locals_rsa$asn1_42, const_str_plain_univ );

            if ( tmp_called_instance_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_univ );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
                }

                if ( tmp_mvar_value_19 == NULL )
                {
                    Py_DECREF( tmp_called_name_15 );
                    Py_DECREF( tmp_called_name_16 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 51;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_called_instance_4 = tmp_mvar_value_19;
                Py_INCREF( tmp_called_instance_4 );
                }
            }

            frame_00bc0d289974b06a7a54abf4b3ce961b_4->m_frame.f_lineno = 51;
            tmp_args_element_name_15 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_Integer );
            Py_DECREF( tmp_called_instance_4 );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_15 );
                Py_DECREF( tmp_called_name_16 );

                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_00bc0d289974b06a7a54abf4b3ce961b_4->m_frame.f_lineno = 51;
            {
                PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
                tmp_args_element_name_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
            }

            Py_DECREF( tmp_called_name_16 );
            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_15 );

                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_source_name_26 = PyObject_GetItem( locals_rsa$asn1_42, const_str_plain_namedtype );

            if ( tmp_source_name_26 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_namedtype );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtype );
                }

                if ( tmp_mvar_value_20 == NULL )
                {
                    Py_DECREF( tmp_called_name_15 );
                    Py_DECREF( tmp_args_element_name_13 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "namedtype" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 52;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_source_name_26 = tmp_mvar_value_20;
                Py_INCREF( tmp_source_name_26 );
                }
            }

            tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_NamedType );
            Py_DECREF( tmp_source_name_26 );
            if ( tmp_called_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_15 );
                Py_DECREF( tmp_args_element_name_13 );

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_args_element_name_17 = const_str_plain_publicExponent;
            tmp_called_instance_5 = PyObject_GetItem( locals_rsa$asn1_42, const_str_plain_univ );

            if ( tmp_called_instance_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_univ );

                if (unlikely( tmp_mvar_value_21 == NULL ))
                {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
                }

                if ( tmp_mvar_value_21 == NULL )
                {
                    Py_DECREF( tmp_called_name_15 );
                    Py_DECREF( tmp_args_element_name_13 );
                    Py_DECREF( tmp_called_name_17 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 52;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }

                tmp_called_instance_5 = tmp_mvar_value_21;
                Py_INCREF( tmp_called_instance_5 );
                }
            }

            frame_00bc0d289974b06a7a54abf4b3ce961b_4->m_frame.f_lineno = 52;
            tmp_args_element_name_18 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_Integer );
            Py_DECREF( tmp_called_instance_5 );
            if ( tmp_args_element_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_15 );
                Py_DECREF( tmp_args_element_name_13 );
                Py_DECREF( tmp_called_name_17 );

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_00bc0d289974b06a7a54abf4b3ce961b_4->m_frame.f_lineno = 52;
            {
                PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
                tmp_args_element_name_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
            }

            Py_DECREF( tmp_called_name_17 );
            Py_DECREF( tmp_args_element_name_18 );
            if ( tmp_args_element_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_15 );
                Py_DECREF( tmp_args_element_name_13 );

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_00bc0d289974b06a7a54abf4b3ce961b_4->m_frame.f_lineno = 50;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_16 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
            }

            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_element_name_13 );
            Py_DECREF( tmp_args_element_name_16 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem( locals_rsa$asn1_42, const_str_plain_componentType, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_00bc0d289974b06a7a54abf4b3ce961b_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_00bc0d289974b06a7a54abf4b3ce961b_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_00bc0d289974b06a7a54abf4b3ce961b_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_00bc0d289974b06a7a54abf4b3ce961b_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_00bc0d289974b06a7a54abf4b3ce961b_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_00bc0d289974b06a7a54abf4b3ce961b_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if ( frame_00bc0d289974b06a7a54abf4b3ce961b_4 == cache_frame_00bc0d289974b06a7a54abf4b3ce961b_4 )
        {
            Py_DECREF( frame_00bc0d289974b06a7a54abf4b3ce961b_4 );
        }
        cache_frame_00bc0d289974b06a7a54abf4b3ce961b_4 = NULL;

        assertFrameObject( frame_00bc0d289974b06a7a54abf4b3ce961b_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
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


                exception_lineno = 42;

                goto try_except_handler_10;
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
            tmp_res = PyObject_SetItem( locals_rsa$asn1_42, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;

                goto try_except_handler_10;
            }
            branch_no_12:;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_18;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_18 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = const_str_plain_AsnPubKey;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_12 );
            tmp_tuple_element_12 = locals_rsa$asn1_42;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_8 = tmp_class_creation_3__class_decl_dict;
            frame_adae6286ac50c1414cd757592be1ad81->m_frame.f_lineno = 42;
            tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_6, tmp_kw_name_8 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;

                goto try_except_handler_10;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_30 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_30 );
        goto try_return_handler_10;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( rsa$asn1 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF( locals_rsa$asn1_42 );
        locals_rsa$asn1_42 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_rsa$asn1_42 );
        locals_rsa$asn1_42 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( rsa$asn1 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( rsa$asn1 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 42;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_rsa$asn1, (Nuitka_StringObject *)const_str_plain_AsnPubKey, tmp_assign_source_30 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_adae6286ac50c1414cd757592be1ad81 );
#endif
    popFrameStack();

    assertFrameObject( frame_adae6286ac50c1414cd757592be1ad81 );

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_adae6286ac50c1414cd757592be1ad81 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_adae6286ac50c1414cd757592be1ad81, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_adae6286ac50c1414cd757592be1ad81->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_adae6286ac50c1414cd757592be1ad81, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;
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


    return MOD_RETURN_VALUE( module_rsa$asn1 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
