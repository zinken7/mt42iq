/* Generated code for Python module 'attr._config'
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

/* The "_module_attr$_config" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_attr$_config;
PyDictObject *moduledict_attr$_config;

/* The declarations of module constants used, if any. */
static PyObject *const_list_str_plain_set_run_validators_str_plain_get_run_validators_list;
extern PyObject *const_str_plain_get_run_validators;
static PyObject *const_tuple_str_plain_run_tuple;
static PyObject *const_str_plain_run;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_73ca523f79124669e0ea83071943cc4e;
extern PyObject *const_str_plain_bool;
static PyObject *const_str_digest_2c2dbf6c19eebd8a58c5078d7243e4f0;
static PyObject *const_str_digest_1d271c5c99fb9c246102db76dd4ef6d7;
extern PyObject *const_str_plain_set_run_validators;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_019cbba8d54c4bf20c6db2136cf32d5a;
static PyObject *const_str_digest_689a041af1595e9515745d09105facaf;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_33f06eda7a7f6fb3e0bee9c4d2b41ec2;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain__run_validators;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_list_str_plain_set_run_validators_str_plain_get_run_validators_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_set_run_validators_str_plain_get_run_validators_list, 0, const_str_plain_set_run_validators ); Py_INCREF( const_str_plain_set_run_validators );
    PyList_SET_ITEM( const_list_str_plain_set_run_validators_str_plain_get_run_validators_list, 1, const_str_plain_get_run_validators ); Py_INCREF( const_str_plain_get_run_validators );
    const_tuple_str_plain_run_tuple = PyTuple_New( 1 );
    const_str_plain_run = UNSTREAM_STRING_ASCII( &constant_bin[ 103 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_run_tuple, 0, const_str_plain_run ); Py_INCREF( const_str_plain_run );
    const_str_digest_73ca523f79124669e0ea83071943cc4e = UNSTREAM_STRING_ASCII( &constant_bin[ 7702 ], 12, 0 );
    const_str_digest_2c2dbf6c19eebd8a58c5078d7243e4f0 = UNSTREAM_STRING_ASCII( &constant_bin[ 7714 ], 75, 0 );
    const_str_digest_1d271c5c99fb9c246102db76dd4ef6d7 = UNSTREAM_STRING_ASCII( &constant_bin[ 7789 ], 43, 0 );
    const_str_digest_019cbba8d54c4bf20c6db2136cf32d5a = UNSTREAM_STRING_ASCII( &constant_bin[ 7832 ], 51, 0 );
    const_str_digest_689a041af1595e9515745d09105facaf = UNSTREAM_STRING_ASCII( &constant_bin[ 7883 ], 21, 0 );
    const_str_digest_33f06eda7a7f6fb3e0bee9c4d2b41ec2 = UNSTREAM_STRING_ASCII( &constant_bin[ 7904 ], 19, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_attr$_config( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a488b2320d83109ed3f6268822969ca7;
static PyCodeObject *codeobj_2dfbc199f7440c3a06d3b2403d6a8ed2;
static PyCodeObject *codeobj_b556d4db4097b01e397a07f255782843;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_1d271c5c99fb9c246102db76dd4ef6d7;
    codeobj_a488b2320d83109ed3f6268822969ca7 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_689a041af1595e9515745d09105facaf, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_2dfbc199f7440c3a06d3b2403d6a8ed2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_run_validators, 19, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b556d4db4097b01e397a07f255782843 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_run_validators, 9, const_tuple_str_plain_run_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_attr$_config$$$function_1_set_run_validators(  );


static PyObject *MAKE_FUNCTION_attr$_config$$$function_2_get_run_validators(  );


// The module function definitions.
static PyObject *impl_attr$_config$$$function_1_set_run_validators( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_run = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b556d4db4097b01e397a07f255782843;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b556d4db4097b01e397a07f255782843 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b556d4db4097b01e397a07f255782843, codeobj_b556d4db4097b01e397a07f255782843, module_attr$_config, sizeof(void *) );
    frame_b556d4db4097b01e397a07f255782843 = cache_frame_b556d4db4097b01e397a07f255782843;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b556d4db4097b01e397a07f255782843 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b556d4db4097b01e397a07f255782843 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_run );
        tmp_isinstance_inst_1 = par_run;
        tmp_isinstance_cls_1 = (PyObject *)&PyBool_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_33f06eda7a7f6fb3e0bee9c4d2b41ec2;
            frame_b556d4db4097b01e397a07f255782843->m_frame.f_lineno = 14;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 14;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b556d4db4097b01e397a07f255782843 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b556d4db4097b01e397a07f255782843 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b556d4db4097b01e397a07f255782843, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b556d4db4097b01e397a07f255782843->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b556d4db4097b01e397a07f255782843, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b556d4db4097b01e397a07f255782843,
        type_description_1,
        par_run
    );


    // Release cached frame.
    if ( frame_b556d4db4097b01e397a07f255782843 == cache_frame_b556d4db4097b01e397a07f255782843 )
    {
        Py_DECREF( frame_b556d4db4097b01e397a07f255782843 );
    }
    cache_frame_b556d4db4097b01e397a07f255782843 = NULL;

    assertFrameObject( frame_b556d4db4097b01e397a07f255782843 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( par_run );
        tmp_assign_source_1 = par_run;
        UPDATE_STRING_DICT0( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain__run_validators, tmp_assign_source_1 );
    }
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( attr$_config$$$function_1_set_run_validators );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_run );
    Py_DECREF( par_run );
    par_run = NULL;

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

    CHECK_OBJECT( (PyObject *)par_run );
    Py_DECREF( par_run );
    par_run = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( attr$_config$$$function_1_set_run_validators );
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


static PyObject *impl_attr$_config$$$function_2_get_run_validators( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_2dfbc199f7440c3a06d3b2403d6a8ed2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2dfbc199f7440c3a06d3b2403d6a8ed2 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_2dfbc199f7440c3a06d3b2403d6a8ed2, codeobj_2dfbc199f7440c3a06d3b2403d6a8ed2, module_attr$_config, 0 );
    frame_2dfbc199f7440c3a06d3b2403d6a8ed2 = cache_frame_2dfbc199f7440c3a06d3b2403d6a8ed2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2dfbc199f7440c3a06d3b2403d6a8ed2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2dfbc199f7440c3a06d3b2403d6a8ed2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain__run_validators );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__run_validators );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_run_validators" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }

        tmp_return_value = tmp_mvar_value_1;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2dfbc199f7440c3a06d3b2403d6a8ed2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2dfbc199f7440c3a06d3b2403d6a8ed2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2dfbc199f7440c3a06d3b2403d6a8ed2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2dfbc199f7440c3a06d3b2403d6a8ed2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2dfbc199f7440c3a06d3b2403d6a8ed2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2dfbc199f7440c3a06d3b2403d6a8ed2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2dfbc199f7440c3a06d3b2403d6a8ed2,
        type_description_1
    );


    // Release cached frame.
    if ( frame_2dfbc199f7440c3a06d3b2403d6a8ed2 == cache_frame_2dfbc199f7440c3a06d3b2403d6a8ed2 )
    {
        Py_DECREF( frame_2dfbc199f7440c3a06d3b2403d6a8ed2 );
    }
    cache_frame_2dfbc199f7440c3a06d3b2403d6a8ed2 = NULL;

    assertFrameObject( frame_2dfbc199f7440c3a06d3b2403d6a8ed2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( attr$_config$$$function_2_get_run_validators );
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



static PyObject *MAKE_FUNCTION_attr$_config$$$function_1_set_run_validators(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$_config$$$function_1_set_run_validators,
        const_str_plain_set_run_validators,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b556d4db4097b01e397a07f255782843,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_attr$_config,
        const_str_digest_2c2dbf6c19eebd8a58c5078d7243e4f0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$_config$$$function_2_get_run_validators(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$_config$$$function_2_get_run_validators,
        const_str_plain_get_run_validators,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2dfbc199f7440c3a06d3b2403d6a8ed2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_attr$_config,
        const_str_digest_019cbba8d54c4bf20c6db2136cf32d5a,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_attr$_config =
{
    PyModuleDef_HEAD_INIT,
    "attr._config",
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
MOD_ENTRY_DECL(attr$_config)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(attr$_config)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_attr$_config );
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
    puts("attr._config: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("attr._config: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("attr._config: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initattr$_config" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_attr$_config = Py_InitModule4(
        "attr._config",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_attr$_config = PyModule_Create( &mdef_attr$_config );
#endif

    moduledict_attr$_config = MODULE_DICT( module_attr$_config );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_attr$_config,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_attr$_config,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_attr$_config,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_attr$_config,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_attr$_config );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_73ca523f79124669e0ea83071943cc4e, module_attr$_config );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_a488b2320d83109ed3f6268822969ca7;
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
        UPDATE_STRING_DICT0( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_1d271c5c99fb9c246102db76dd4ef6d7;
        UPDATE_STRING_DICT0( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_a488b2320d83109ed3f6268822969ca7 = MAKE_MODULE_FRAME( codeobj_a488b2320d83109ed3f6268822969ca7, module_attr$_config );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a488b2320d83109ed3f6268822969ca7 );
    assert( Py_REFCNT( frame_a488b2320d83109ed3f6268822969ca7 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_1d271c5c99fb9c246102db76dd4ef6d7;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_a488b2320d83109ed3f6268822969ca7->m_frame.f_lineno = 1;
        tmp_assign_source_4 = PyImport_ImportModule("__future__");
        assert( !(tmp_assign_source_4 == NULL) );
        assert( tmp_import_from_1__module == NULL );
        Py_INCREF( tmp_assign_source_4 );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a488b2320d83109ed3f6268822969ca7 );
#endif
    popFrameStack();

    assertFrameObject( frame_a488b2320d83109ed3f6268822969ca7 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a488b2320d83109ed3f6268822969ca7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a488b2320d83109ed3f6268822969ca7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a488b2320d83109ed3f6268822969ca7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a488b2320d83109ed3f6268822969ca7, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = LIST_COPY( const_list_str_plain_set_run_validators_str_plain_get_run_validators_list );
        UPDATE_STRING_DICT1( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_True;
        UPDATE_STRING_DICT0( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain__run_validators, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_attr$_config$$$function_1_set_run_validators(  );



        UPDATE_STRING_DICT1( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain_set_run_validators, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_attr$_config$$$function_2_get_run_validators(  );



        UPDATE_STRING_DICT1( moduledict_attr$_config, (Nuitka_StringObject *)const_str_plain_get_run_validators, tmp_assign_source_11 );
    }

    return MOD_RETURN_VALUE( module_attr$_config );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
