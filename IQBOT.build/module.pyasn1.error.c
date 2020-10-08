/* Generated code for Python module 'pyasn1.error'
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

/* The "_module_pyasn1$error" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$error;
PyDictObject *moduledict_pyasn1$error;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_tuple_type_Exception_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_ff85ed2e1a2cfea67ede0ec11414bade;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_plain_unicode_error;
static PyObject *const_str_digest_aa7b5b87f3a306ae241ea2ef4d358480;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_PyAsn1UnicodeDecodeError;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_args;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_digest_b143869ac5134532a6e65cedf883f892;
static PyObject *const_str_plain_PyAsn1UnicodeError;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_bc7d398f6fdaccdc940a58ccb4d64c37;
extern PyObject *const_str_plain_message;
static PyObject *const_str_digest_07e8a12dc067acd6eb7bb6b00784e2f7;
static PyObject *const_str_digest_a35ffba076ef86345f748a1c57cfcf79;
extern PyObject *const_str_plain_ValueConstraintError;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_tuple_str_plain_self_str_plain_message_str_plain_unicode_error_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_PyAsn1UnicodeEncodeError;
static PyObject *const_str_digest_e4abf8ecaf1f1096d4b6755c3163b6ed;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_0bc975ea0dcda7d2c4a0d6e7290d5079;
static PyObject *const_str_digest_e4ecf61c45dbbd8c3c67edee536eaa4a;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_SubstrateUnderrunError;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_PyAsn1Error;
static PyObject *const_str_digest_b4c7229b83ff7bfe21f12654300ae16c;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_ff85ed2e1a2cfea67ede0ec11414bade = UNSTREAM_STRING_ASCII( &constant_bin[ 2552485 ], 21, 0 );
    const_str_plain_unicode_error = UNSTREAM_STRING_ASCII( &constant_bin[ 2552506 ], 13, 1 );
    const_str_digest_aa7b5b87f3a306ae241ea2ef4d358480 = UNSTREAM_STRING_ASCII( &constant_bin[ 2552519 ], 43, 0 );
    const_str_plain_PyAsn1UnicodeError = UNSTREAM_STRING_ASCII( &constant_bin[ 2552562 ], 18, 1 );
    const_str_digest_bc7d398f6fdaccdc940a58ccb4d64c37 = UNSTREAM_STRING_ASCII( &constant_bin[ 2552580 ], 27, 0 );
    const_str_digest_07e8a12dc067acd6eb7bb6b00784e2f7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2552607 ], 172, 0 );
    const_str_digest_a35ffba076ef86345f748a1c57cfcf79 = UNSTREAM_STRING_ASCII( &constant_bin[ 2552779 ], 302, 0 );
    const_tuple_str_plain_self_str_plain_message_str_plain_unicode_error_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_message_str_plain_unicode_error_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_message_str_plain_unicode_error_tuple, 1, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_message_str_plain_unicode_error_tuple, 2, const_str_plain_unicode_error ); Py_INCREF( const_str_plain_unicode_error );
    const_str_digest_e4abf8ecaf1f1096d4b6755c3163b6ed = UNSTREAM_STRING_ASCII( &constant_bin[ 2553081 ], 301, 0 );
    const_str_digest_0bc975ea0dcda7d2c4a0d6e7290d5079 = UNSTREAM_STRING_ASCII( &constant_bin[ 2553382 ], 259, 0 );
    const_str_digest_e4ecf61c45dbbd8c3c67edee536eaa4a = UNSTREAM_STRING_ASCII( &constant_bin[ 2553641 ], 303, 0 );
    const_str_digest_b4c7229b83ff7bfe21f12654300ae16c = UNSTREAM_STRING_ASCII( &constant_bin[ 2553944 ], 162, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyasn1$error( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6d14d8a59f84920007fbb941403d18ce;
static PyCodeObject *codeobj_35997e3e4486cd7262c335127e2f4141;
static PyCodeObject *codeobj_25a1c66942d6fe14f731e015639d744b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_aa7b5b87f3a306ae241ea2ef4d358480;
    codeobj_6d14d8a59f84920007fbb941403d18ce = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ff85ed2e1a2cfea67ede0ec11414bade, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_35997e3e4486cd7262c335127e2f4141 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PyAsn1UnicodeError, 37, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_25a1c66942d6fe14f731e015639d744b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 46, const_tuple_str_plain_self_str_plain_message_str_plain_unicode_error_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_pos_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_pyasn1$error$$$function_1___init__( PyObject *defaults );


// The module function definitions.
static PyObject *impl_pyasn1$error$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_message = python_pars[ 1 ];
    PyObject *par_unicode_error = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_25a1c66942d6fe14f731e015639d744b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_25a1c66942d6fe14f731e015639d744b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_25a1c66942d6fe14f731e015639d744b, codeobj_25a1c66942d6fe14f731e015639d744b, module_pyasn1$error, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_25a1c66942d6fe14f731e015639d744b = cache_frame_25a1c66942d6fe14f731e015639d744b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_25a1c66942d6fe14f731e015639d744b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_25a1c66942d6fe14f731e015639d744b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_unicode_error );
        tmp_isinstance_inst_1 = par_unicode_error;
        tmp_isinstance_cls_1 = PyExc_UnicodeError;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            tmp_source_name_1 = PyExc_UnicodeError;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
            assert( !(tmp_dircall_arg1_1 == NULL) );
            CHECK_OBJECT( par_self );
            tmp_tuple_element_1 = par_self;
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_unicode_error );
            tmp_source_name_2 = par_unicode_error;
            tmp_dircall_arg3_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_args );
            if ( tmp_dircall_arg3_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dircall_arg1_1 );
                Py_DECREF( tmp_dircall_arg2_1 );

                exception_lineno = 48;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_call_result_1 = impl___internal__$$$function_9_complex_call_helper_pos_star_list( dir_call_args );
            }
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain_PyAsn1Error );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyAsn1Error );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyAsn1Error" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_message );
        tmp_args_element_name_2 = par_message;
        frame_25a1c66942d6fe14f731e015639d744b->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25a1c66942d6fe14f731e015639d744b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25a1c66942d6fe14f731e015639d744b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_25a1c66942d6fe14f731e015639d744b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_25a1c66942d6fe14f731e015639d744b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_25a1c66942d6fe14f731e015639d744b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_25a1c66942d6fe14f731e015639d744b,
        type_description_1,
        par_self,
        par_message,
        par_unicode_error
    );


    // Release cached frame.
    if ( frame_25a1c66942d6fe14f731e015639d744b == cache_frame_25a1c66942d6fe14f731e015639d744b )
    {
        Py_DECREF( frame_25a1c66942d6fe14f731e015639d744b );
    }
    cache_frame_25a1c66942d6fe14f731e015639d744b = NULL;

    assertFrameObject( frame_25a1c66942d6fe14f731e015639d744b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$error$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_unicode_error );
    Py_DECREF( par_unicode_error );
    par_unicode_error = NULL;

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

    CHECK_OBJECT( (PyObject *)par_unicode_error );
    Py_DECREF( par_unicode_error );
    par_unicode_error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$error$$$function_1___init__ );
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



static PyObject *MAKE_FUNCTION_pyasn1$error$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$error$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_bc7d398f6fdaccdc940a58ccb4d64c37,
#endif
        codeobj_25a1c66942d6fe14f731e015639d744b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$error,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyasn1$error =
{
    PyModuleDef_HEAD_INIT,
    "pyasn1.error",
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
MOD_ENTRY_DECL(pyasn1$error)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(pyasn1$error)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyasn1$error );
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
    puts("pyasn1.error: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.error: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.error: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpyasn1$error" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyasn1$error = Py_InitModule4(
        "pyasn1.error",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pyasn1$error = PyModule_Create( &mdef_pyasn1$error );
#endif

    moduledict_pyasn1$error = MODULE_DICT( module_pyasn1$error );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_pyasn1$error,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pyasn1$error,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$error,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$error,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pyasn1$error );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_b143869ac5134532a6e65cedf883f892, module_pyasn1$error );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    struct Nuitka_FrameObject *frame_6d14d8a59f84920007fbb941403d18ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_pyasn1$error_9 = NULL;
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
    PyObject *locals_pyasn1$error_18 = NULL;
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
    PyObject *locals_pyasn1$error_29 = NULL;
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
    PyObject *locals_pyasn1$error_37 = NULL;
    struct Nuitka_FrameObject *frame_35997e3e4486cd7262c335127e2f4141_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_35997e3e4486cd7262c335127e2f4141_2 = NULL;
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
    PyObject *locals_pyasn1$error_52 = NULL;
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
    PyObject *locals_pyasn1$error_64 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_aa7b5b87f3a306ae241ea2ef4d358480;
        UPDATE_STRING_DICT0( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_6d14d8a59f84920007fbb941403d18ce = MAKE_MODULE_FRAME( codeobj_6d14d8a59f84920007fbb941403d18ce, module_pyasn1$error );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_6d14d8a59f84920007fbb941403d18ce );
    assert( Py_REFCNT( frame_6d14d8a59f84920007fbb941403d18ce ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_aa7b5b87f3a306ae241ea2ef4d358480;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
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


            exception_lineno = 9;

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


            exception_lineno = 9;

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


            exception_lineno = 9;

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


            exception_lineno = 9;

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


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

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


            exception_lineno = 9;

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


            exception_lineno = 9;

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


            exception_lineno = 9;

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


                exception_lineno = 9;

                goto try_except_handler_1;
            }
            tmp_tuple_element_1 = const_str_plain_PyAsn1Error;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_6d14d8a59f84920007fbb941403d18ce->m_frame.f_lineno = 9;
            tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;

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


                exception_lineno = 9;

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


                    exception_lineno = 9;

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

                    exception_lineno = 9;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 9;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 9;
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
            locals_pyasn1$error_9 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b143869ac5134532a6e65cedf883f892;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_9, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_b4c7229b83ff7bfe21f12654300ae16c;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_9, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_PyAsn1Error;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_9, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

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


                exception_lineno = 9;

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
            tmp_res = PyObject_SetItem( locals_pyasn1$error_9, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;

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
            tmp_tuple_element_3 = const_str_plain_PyAsn1Error;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_pyasn1$error_9;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_6d14d8a59f84920007fbb941403d18ce->m_frame.f_lineno = 9;
            tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;

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
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_pyasn1$error_9 );
        locals_pyasn1$error_9 = NULL;
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

        Py_DECREF( locals_pyasn1$error_9 );
        locals_pyasn1$error_9 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
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
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 9;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain_PyAsn1Error, tmp_assign_source_9 );
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
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain_PyAsn1Error );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyAsn1Error );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyAsn1Error" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 18;

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


            exception_lineno = 18;

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


            exception_lineno = 18;

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


            exception_lineno = 18;

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


            exception_lineno = 18;

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


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

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


            exception_lineno = 18;

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


            exception_lineno = 18;

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


            exception_lineno = 18;

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


                exception_lineno = 18;

                goto try_except_handler_4;
            }
            tmp_tuple_element_5 = const_str_plain_ValueConstraintError;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_5 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_6d14d8a59f84920007fbb941403d18ce->m_frame.f_lineno = 18;
            tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;

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


                exception_lineno = 18;

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


                    exception_lineno = 18;

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

                    exception_lineno = 18;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_6 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 18;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 18;
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
            locals_pyasn1$error_18 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b143869ac5134532a6e65cedf883f892;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_18, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_0bc975ea0dcda7d2c4a0d6e7290d5079;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_18, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_ValueConstraintError;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_18, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

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


                exception_lineno = 18;

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
            tmp_res = PyObject_SetItem( locals_pyasn1$error_18, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;

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
            tmp_tuple_element_7 = const_str_plain_ValueConstraintError;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_7 );
            tmp_tuple_element_7 = locals_pyasn1$error_18;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_6d14d8a59f84920007fbb941403d18ce->m_frame.f_lineno = 18;
            tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;

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
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_pyasn1$error_18 );
        locals_pyasn1$error_18 = NULL;
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

        Py_DECREF( locals_pyasn1$error_18 );
        locals_pyasn1$error_18 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
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
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 18;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain_ValueConstraintError, tmp_assign_source_17 );
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
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain_PyAsn1Error );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyAsn1Error );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyAsn1Error" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;

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


            exception_lineno = 29;

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


            exception_lineno = 29;

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


            exception_lineno = 29;

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


            exception_lineno = 29;

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


            exception_lineno = 29;

            goto try_except_handler_7;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
        Py_DECREF( tmp_type_arg_5 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

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


            exception_lineno = 29;

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


            exception_lineno = 29;

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


            exception_lineno = 29;

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


                exception_lineno = 29;

                goto try_except_handler_7;
            }
            tmp_tuple_element_9 = const_str_plain_SubstrateUnderrunError;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_6d14d8a59f84920007fbb941403d18ce->m_frame.f_lineno = 29;
            tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;

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


                exception_lineno = 29;

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


                    exception_lineno = 29;

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

                    exception_lineno = 29;

                    goto try_except_handler_7;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_10 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 29;

                    goto try_except_handler_7;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 29;
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
            locals_pyasn1$error_29 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b143869ac5134532a6e65cedf883f892;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_29, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_digest_07e8a12dc067acd6eb7bb6b00784e2f7;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_29, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_plain_SubstrateUnderrunError;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_29, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

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


                exception_lineno = 29;

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
            tmp_res = PyObject_SetItem( locals_pyasn1$error_29, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;

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
            tmp_tuple_element_11 = const_str_plain_SubstrateUnderrunError;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_11 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_11 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_11 );
            tmp_tuple_element_11 = locals_pyasn1$error_29;
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_11 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_6d14d8a59f84920007fbb941403d18ce->m_frame.f_lineno = 29;
            tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;

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
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF( locals_pyasn1$error_29 );
        locals_pyasn1$error_29 = NULL;
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

        Py_DECREF( locals_pyasn1$error_29 );
        locals_pyasn1$error_29 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
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
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 29;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain_SubstrateUnderrunError, tmp_assign_source_25 );
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
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain_PyAsn1Error );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyAsn1Error );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyAsn1Error" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 37;

            goto try_except_handler_10;
        }

        tmp_tuple_element_12 = tmp_mvar_value_5;
        tmp_assign_source_27 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_12 );
        tmp_tuple_element_12 = PyExc_UnicodeError;
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_assign_source_27, 1, tmp_tuple_element_12 );
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


            exception_lineno = 37;

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


            exception_lineno = 37;

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


            exception_lineno = 37;

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


            exception_lineno = 37;

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


            exception_lineno = 37;

            goto try_except_handler_10;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_7 );
        Py_DECREF( tmp_type_arg_7 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

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


            exception_lineno = 37;

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


            exception_lineno = 37;

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


            exception_lineno = 37;

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


                exception_lineno = 37;

                goto try_except_handler_10;
            }
            tmp_tuple_element_13 = const_str_plain_PyAsn1UnicodeError;
            tmp_args_name_7 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_13 );
            PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_13 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_13 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_13 );
            PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_13 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
            frame_6d14d8a59f84920007fbb941403d18ce->m_frame.f_lineno = 37;
            tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_name_7 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;

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


                exception_lineno = 37;

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


                    exception_lineno = 37;

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

                    exception_lineno = 37;

                    goto try_except_handler_10;
                }
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_14 );
                tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_raise_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 37;

                    goto try_except_handler_10;
                }
                exception_type = tmp_raise_type_4;
                Py_INCREF( tmp_raise_type_4 );
                exception_value = tmp_raise_value_4;
                exception_lineno = 37;
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
            locals_pyasn1$error_37 = tmp_set_locals_4;
            Py_INCREF( tmp_set_locals_4 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b143869ac5134532a6e65cedf883f892;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_37, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_digest_a35ffba076ef86345f748a1c57cfcf79;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_37, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_plain_PyAsn1UnicodeError;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_37, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_12;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_35997e3e4486cd7262c335127e2f4141_2, codeobj_35997e3e4486cd7262c335127e2f4141, module_pyasn1$error, sizeof(void *) );
        frame_35997e3e4486cd7262c335127e2f4141_2 = cache_frame_35997e3e4486cd7262c335127e2f4141_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_35997e3e4486cd7262c335127e2f4141_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_35997e3e4486cd7262c335127e2f4141_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_pyasn1$error$$$function_1___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_pyasn1$error_37, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_35997e3e4486cd7262c335127e2f4141_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_35997e3e4486cd7262c335127e2f4141_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_35997e3e4486cd7262c335127e2f4141_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_35997e3e4486cd7262c335127e2f4141_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_35997e3e4486cd7262c335127e2f4141_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_35997e3e4486cd7262c335127e2f4141_2,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame.
        if ( frame_35997e3e4486cd7262c335127e2f4141_2 == cache_frame_35997e3e4486cd7262c335127e2f4141_2 )
        {
            Py_DECREF( frame_35997e3e4486cd7262c335127e2f4141_2 );
        }
        cache_frame_35997e3e4486cd7262c335127e2f4141_2 = NULL;

        assertFrameObject( frame_35997e3e4486cd7262c335127e2f4141_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_12;
        skip_nested_handling_1:;
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


                exception_lineno = 37;

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
            tmp_res = PyObject_SetItem( locals_pyasn1$error_37, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;

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
            tmp_tuple_element_15 = const_str_plain_PyAsn1UnicodeError;
            tmp_args_name_8 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_15 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_15 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_15 );
            tmp_tuple_element_15 = locals_pyasn1$error_37;
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_15 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_6d14d8a59f84920007fbb941403d18ce->m_frame.f_lineno = 37;
            tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_args_name_8 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;

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
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF( locals_pyasn1$error_37 );
        locals_pyasn1$error_37 = NULL;
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

        Py_DECREF( locals_pyasn1$error_37 );
        locals_pyasn1$error_37 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
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
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_4:;
        exception_lineno = 37;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain_PyAsn1UnicodeError, tmp_assign_source_33 );
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
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain_PyAsn1UnicodeError );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyAsn1UnicodeError );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyAsn1UnicodeError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;

            goto try_except_handler_13;
        }

        tmp_tuple_element_16 = tmp_mvar_value_6;
        tmp_assign_source_35 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_16 );
        PyTuple_SET_ITEM( tmp_assign_source_35, 0, tmp_tuple_element_16 );
        tmp_tuple_element_16 = PyExc_UnicodeDecodeError;
        Py_INCREF( tmp_tuple_element_16 );
        PyTuple_SET_ITEM( tmp_assign_source_35, 1, tmp_tuple_element_16 );
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


            exception_lineno = 52;

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


            exception_lineno = 52;

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


            exception_lineno = 52;

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


            exception_lineno = 52;

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


            exception_lineno = 52;

            goto try_except_handler_13;
        }
        tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_9 );
        Py_DECREF( tmp_type_arg_9 );
        if ( tmp_metaclass_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

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


            exception_lineno = 52;

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


            exception_lineno = 52;

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


            exception_lineno = 52;

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


                exception_lineno = 52;

                goto try_except_handler_13;
            }
            tmp_tuple_element_17 = const_str_plain_PyAsn1UnicodeDecodeError;
            tmp_args_name_9 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_17 );
            PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_17 );
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_tuple_element_17 = tmp_class_creation_5__bases;
            Py_INCREF( tmp_tuple_element_17 );
            PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_17 );
            CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
            tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;
            frame_6d14d8a59f84920007fbb941403d18ce->m_frame.f_lineno = 52;
            tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_name_9 );
            if ( tmp_assign_source_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;

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


                exception_lineno = 52;

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


                    exception_lineno = 52;

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

                    exception_lineno = 52;

                    goto try_except_handler_13;
                }
                PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_18 );
                tmp_raise_value_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_raise_value_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 52;

                    goto try_except_handler_13;
                }
                exception_type = tmp_raise_type_5;
                Py_INCREF( tmp_raise_type_5 );
                exception_value = tmp_raise_value_5;
                exception_lineno = 52;
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
            locals_pyasn1$error_52 = tmp_set_locals_5;
            Py_INCREF( tmp_set_locals_5 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b143869ac5134532a6e65cedf883f892;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_52, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_digest_e4ecf61c45dbbd8c3c67edee536eaa4a;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_52, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_plain_PyAsn1UnicodeDecodeError;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_52, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

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


                exception_lineno = 52;

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
            tmp_res = PyObject_SetItem( locals_pyasn1$error_52, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;

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
            tmp_tuple_element_19 = const_str_plain_PyAsn1UnicodeDecodeError;
            tmp_args_name_10 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_19 );
            PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_19 );
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_tuple_element_19 = tmp_class_creation_5__bases;
            Py_INCREF( tmp_tuple_element_19 );
            PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_19 );
            tmp_tuple_element_19 = locals_pyasn1$error_52;
            Py_INCREF( tmp_tuple_element_19 );
            PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_19 );
            CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
            tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;
            frame_6d14d8a59f84920007fbb941403d18ce->m_frame.f_lineno = 52;
            tmp_assign_source_42 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
            Py_DECREF( tmp_args_name_10 );
            if ( tmp_assign_source_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;

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
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF( locals_pyasn1$error_52 );
        locals_pyasn1$error_52 = NULL;
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

        Py_DECREF( locals_pyasn1$error_52 );
        locals_pyasn1$error_52 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
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
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_5:;
        exception_lineno = 52;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain_PyAsn1UnicodeDecodeError, tmp_assign_source_41 );
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
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain_PyAsn1UnicodeError );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyAsn1UnicodeError );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyAsn1UnicodeError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 64;

            goto try_except_handler_16;
        }

        tmp_tuple_element_20 = tmp_mvar_value_7;
        tmp_assign_source_43 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_20 );
        PyTuple_SET_ITEM( tmp_assign_source_43, 0, tmp_tuple_element_20 );
        tmp_tuple_element_20 = PyExc_UnicodeEncodeError;
        Py_INCREF( tmp_tuple_element_20 );
        PyTuple_SET_ITEM( tmp_assign_source_43, 1, tmp_tuple_element_20 );
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


            exception_lineno = 64;

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


            exception_lineno = 64;

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


            exception_lineno = 64;

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


            exception_lineno = 64;

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


            exception_lineno = 64;

            goto try_except_handler_16;
        }
        tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_11 );
        Py_DECREF( tmp_type_arg_11 );
        if ( tmp_metaclass_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

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


            exception_lineno = 64;

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


            exception_lineno = 64;

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


            exception_lineno = 64;

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


                exception_lineno = 64;

                goto try_except_handler_16;
            }
            tmp_tuple_element_21 = const_str_plain_PyAsn1UnicodeEncodeError;
            tmp_args_name_11 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_21 );
            PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_21 );
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_tuple_element_21 = tmp_class_creation_6__bases;
            Py_INCREF( tmp_tuple_element_21 );
            PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_21 );
            CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
            tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;
            frame_6d14d8a59f84920007fbb941403d18ce->m_frame.f_lineno = 64;
            tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_11, tmp_kw_name_11 );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_name_11 );
            if ( tmp_assign_source_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

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


                exception_lineno = 64;

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


                    exception_lineno = 64;

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

                    exception_lineno = 64;

                    goto try_except_handler_16;
                }
                PyTuple_SET_ITEM( tmp_right_name_6, 1, tmp_tuple_element_22 );
                tmp_raise_value_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_raise_value_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;

                    goto try_except_handler_16;
                }
                exception_type = tmp_raise_type_6;
                Py_INCREF( tmp_raise_type_6 );
                exception_value = tmp_raise_value_6;
                exception_lineno = 64;
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
            locals_pyasn1$error_64 = tmp_set_locals_6;
            Py_INCREF( tmp_set_locals_6 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b143869ac5134532a6e65cedf883f892;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_64, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_18;
        }
        tmp_dictset_value = const_str_digest_e4abf8ecaf1f1096d4b6755c3163b6ed;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_64, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto try_except_handler_18;
        }
        tmp_dictset_value = const_str_plain_PyAsn1UnicodeEncodeError;
        tmp_res = PyObject_SetItem( locals_pyasn1$error_64, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

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


                exception_lineno = 64;

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
            tmp_res = PyObject_SetItem( locals_pyasn1$error_64, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

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
            tmp_tuple_element_23 = const_str_plain_PyAsn1UnicodeEncodeError;
            tmp_args_name_12 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_23 );
            PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_23 );
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_tuple_element_23 = tmp_class_creation_6__bases;
            Py_INCREF( tmp_tuple_element_23 );
            PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_23 );
            tmp_tuple_element_23 = locals_pyasn1$error_64;
            Py_INCREF( tmp_tuple_element_23 );
            PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_23 );
            CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
            tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;
            frame_6d14d8a59f84920007fbb941403d18ce->m_frame.f_lineno = 64;
            tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_12, tmp_kw_name_12 );
            Py_DECREF( tmp_args_name_12 );
            if ( tmp_assign_source_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

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
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF( locals_pyasn1$error_64 );
        locals_pyasn1$error_64 = NULL;
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

        Py_DECREF( locals_pyasn1$error_64 );
        locals_pyasn1$error_64 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
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
        NUITKA_CANNOT_GET_HERE( pyasn1$error );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_6:;
        exception_lineno = 64;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$error, (Nuitka_StringObject *)const_str_plain_PyAsn1UnicodeEncodeError, tmp_assign_source_49 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d14d8a59f84920007fbb941403d18ce );
#endif
    popFrameStack();

    assertFrameObject( frame_6d14d8a59f84920007fbb941403d18ce );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d14d8a59f84920007fbb941403d18ce );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6d14d8a59f84920007fbb941403d18ce, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6d14d8a59f84920007fbb941403d18ce->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6d14d8a59f84920007fbb941403d18ce, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
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


    return MOD_RETURN_VALUE( module_pyasn1$error );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
