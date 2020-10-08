/* Generated code for Python module 'pyasn1.compat.calling'
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

/* The "_module_pyasn1$compat$calling" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$compat$calling;
PyDictObject *moduledict_pyasn1$compat$calling;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_int_pos_3_int_pos_2_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_slice_none_int_pos_2_none;
static PyObject *const_str_digest_870d5cb180a7943d6cc41b66ce0ab34e;
static PyObject *const_str_digest_9b65a6b74afc5bf78e7191686396a2f3;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_int_0;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_collections;
extern PyObject *const_str_plain_Callable;
static PyObject *const_tuple_int_pos_2_int_pos_7_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_version_info;
static PyObject *const_list_str_plain_callable_list;
extern PyObject *const_str_plain_None;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_9eaa4fcf5c20b92f462c5b3c0eef6e2b;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_callable;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_str_plain_version_info_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_870d5cb180a7943d6cc41b66ce0ab34e = UNSTREAM_STRING_ASCII( &constant_bin[ 2551430 ], 52, 0 );
    const_str_digest_9b65a6b74afc5bf78e7191686396a2f3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2551482 ], 21, 0 );
    const_tuple_int_pos_2_int_pos_7_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_7_tuple, 0, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_7_tuple, 1, const_int_pos_7 ); Py_INCREF( const_int_pos_7 );
    const_list_str_plain_callable_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_callable_list, 0, const_str_plain_callable ); Py_INCREF( const_str_plain_callable );
    const_str_digest_9eaa4fcf5c20b92f462c5b3c0eef6e2b = UNSTREAM_STRING_ASCII( &constant_bin[ 2551503 ], 30, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyasn1$compat$calling( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_90569b6c795ac124068a40135d013c8d;
static PyCodeObject *codeobj_88fe22d34fa52bb7ecbcf50e63d71c78;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_870d5cb180a7943d6cc41b66ce0ab34e;
    codeobj_90569b6c795ac124068a40135d013c8d = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9eaa4fcf5c20b92f462c5b3c0eef6e2b, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_88fe22d34fa52bb7ecbcf50e63d71c78 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_callable, 15, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyasn1$compat$calling$$$function_1_callable(  );


// The module function definitions.
static PyObject *impl_pyasn1$compat$calling$$$function_1_callable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_88fe22d34fa52bb7ecbcf50e63d71c78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_88fe22d34fa52bb7ecbcf50e63d71c78 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_88fe22d34fa52bb7ecbcf50e63d71c78, codeobj_88fe22d34fa52bb7ecbcf50e63d71c78, module_pyasn1$compat$calling, sizeof(void *) );
    frame_88fe22d34fa52bb7ecbcf50e63d71c78 = cache_frame_88fe22d34fa52bb7ecbcf50e63d71c78;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_88fe22d34fa52bb7ecbcf50e63d71c78 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_88fe22d34fa52bb7ecbcf50e63d71c78 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_isinstance_inst_1 = par_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain_collections );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_collections );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "collections" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Callable );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88fe22d34fa52bb7ecbcf50e63d71c78 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_88fe22d34fa52bb7ecbcf50e63d71c78 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88fe22d34fa52bb7ecbcf50e63d71c78 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_88fe22d34fa52bb7ecbcf50e63d71c78, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_88fe22d34fa52bb7ecbcf50e63d71c78->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_88fe22d34fa52bb7ecbcf50e63d71c78, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_88fe22d34fa52bb7ecbcf50e63d71c78,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_88fe22d34fa52bb7ecbcf50e63d71c78 == cache_frame_88fe22d34fa52bb7ecbcf50e63d71c78 )
    {
        Py_DECREF( frame_88fe22d34fa52bb7ecbcf50e63d71c78 );
    }
    cache_frame_88fe22d34fa52bb7ecbcf50e63d71c78 = NULL;

    assertFrameObject( frame_88fe22d34fa52bb7ecbcf50e63d71c78 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$calling$$$function_1_callable );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$calling$$$function_1_callable );
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



static PyObject *MAKE_FUNCTION_pyasn1$compat$calling$$$function_1_callable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$calling$$$function_1_callable,
        const_str_plain_callable,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_88fe22d34fa52bb7ecbcf50e63d71c78,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$calling,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyasn1$compat$calling =
{
    PyModuleDef_HEAD_INIT,
    "pyasn1.compat.calling",
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
MOD_ENTRY_DECL(pyasn1$compat$calling)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(pyasn1$compat$calling)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyasn1$compat$calling );
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
    puts("pyasn1.compat.calling: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.compat.calling: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.compat.calling: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpyasn1$compat$calling" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyasn1$compat$calling = Py_InitModule4(
        "pyasn1.compat.calling",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pyasn1$compat$calling = PyModule_Create( &mdef_pyasn1$compat$calling );
#endif

    moduledict_pyasn1$compat$calling = MODULE_DICT( module_pyasn1$compat$calling );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_pyasn1$compat$calling,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pyasn1$compat$calling,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$compat$calling,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$compat$calling,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pyasn1$compat$calling );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_9b65a6b74afc5bf78e7191686396a2f3, module_pyasn1$compat$calling );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_90569b6c795ac124068a40135d013c8d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_870d5cb180a7943d6cc41b66ce0ab34e;
        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_90569b6c795ac124068a40135d013c8d = MAKE_MODULE_FRAME( codeobj_90569b6c795ac124068a40135d013c8d, module_pyasn1$compat$calling );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_90569b6c795ac124068a40135d013c8d );
    assert( Py_REFCNT( frame_90569b6c795ac124068a40135d013c8d ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_870d5cb180a7943d6cc41b66ce0ab34e;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_pyasn1$compat$calling;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_version_info_tuple;
        tmp_level_name_1 = const_int_0;
        frame_90569b6c795ac124068a40135d013c8d->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_version_info );
        Py_DECREF( tmp_import_name_from_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain_version_info, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = LIST_COPY( const_list_str_plain_callable_list );
        UPDATE_STRING_DICT1( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain_version_info );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_version_info );
            }

            CHECK_OBJECT( tmp_mvar_value_3 );
            tmp_subscribed_name_1 = tmp_mvar_value_3;
            tmp_subscript_name_1 = const_slice_none_int_pos_2_none;
            tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

                goto try_except_handler_1;
            }
            assert( tmp_comparison_chain_1__operand_2 == NULL );
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = const_tuple_int_pos_2_int_pos_7_tuple;
            CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
            tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_7 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

                goto try_except_handler_1;
            }
            assert( tmp_comparison_chain_1__comparison_result == NULL );
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_7;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
            tmp_operand_name_1 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

                goto try_except_handler_1;
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
            CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
            tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
            Py_INCREF( tmp_outline_return_value_1 );
            goto try_return_handler_1;
            branch_no_2:;
        }
        {
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
            tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;
            tmp_compexpr_right_2 = const_tuple_int_pos_3_int_pos_2_tuple;
            tmp_outline_return_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_outline_return_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;

                goto try_except_handler_1;
            }
            goto try_return_handler_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$compat$calling );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
        Py_DECREF( tmp_comparison_chain_1__operand_2 );
        tmp_comparison_chain_1__operand_2 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
        Py_DECREF( tmp_comparison_chain_1__comparison_result );
        tmp_comparison_chain_1__comparison_result = NULL;

        goto outline_result_1;
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

        Py_XDECREF( tmp_comparison_chain_1__operand_2 );
        tmp_comparison_chain_1__operand_2 = NULL;

        Py_XDECREF( tmp_comparison_chain_1__comparison_result );
        tmp_comparison_chain_1__comparison_result = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyasn1$compat$calling );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_outline_return_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_outline_return_value_1 );

            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_outline_return_value_1 );
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            PyObject *tmp_level_name_2;
            tmp_name_name_2 = const_str_plain_collections;
            tmp_globals_name_2 = (PyObject *)moduledict_pyasn1$compat$calling;
            tmp_locals_name_2 = Py_None;
            tmp_fromlist_name_2 = Py_None;
            tmp_level_name_2 = const_int_0;
            frame_90569b6c795ac124068a40135d013c8d->m_frame.f_lineno = 13;
            tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 13;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain_collections, tmp_assign_source_8 );
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_FUNCTION_pyasn1$compat$calling$$$function_1_callable(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain_callable, tmp_assign_source_9 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain_callable );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_callable );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "callable" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 20;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_10 = tmp_mvar_value_4;
            UPDATE_STRING_DICT0( moduledict_pyasn1$compat$calling, (Nuitka_StringObject *)const_str_plain_callable, tmp_assign_source_10 );
        }
        branch_end_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_90569b6c795ac124068a40135d013c8d );
#endif
    popFrameStack();

    assertFrameObject( frame_90569b6c795ac124068a40135d013c8d );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_90569b6c795ac124068a40135d013c8d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_90569b6c795ac124068a40135d013c8d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_90569b6c795ac124068a40135d013c8d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_90569b6c795ac124068a40135d013c8d, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_pyasn1$compat$calling );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
