/* Generated code for Python module 'rsa.machine_size'
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

/* The "_module_rsa$machine_size" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rsa$machine_size;
PyDictObject *moduledict_rsa$machine_size;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_L;
extern PyObject *const_tuple_int_pos_8_int_pos_1_int_pos_255_str_plain_B_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_MAX_INT16;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_MAX_INT64;
extern PyObject *const_str_plain_Q;
extern PyObject *const_tuple_36cff8729c9fbe536c5709ff2fbbc0a5_tuple;
extern PyObject *const_int_pos_4294967295;
extern PyObject *const_str_plain_max_uint16;
extern PyObject *const_str_plain_MAX_INT;
extern PyObject *const_int_pos_2147483647;
static PyObject *const_str_digest_2e4edba9f691efc316f3cc847a5ab540;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_MAX_INT32;
extern PyObject *const_str_plain___file__;
extern PyObject *const_int_pos_18446744073709551615;
static PyObject *const_str_digest_d39f6a155c2509399cb77e18811f7f69;
extern PyObject *const_int_0;
extern PyObject *const_int_pos_32767;
extern PyObject *const_str_plain_maxsize;
extern PyObject *const_str_plain__machine_word_size;
static PyObject *const_str_digest_4a3a1ff416c3f72af7323e7d0c8ac597;
extern PyObject *const_tuple_int_pos_32_int_pos_4_int_pos_4294967295_str_plain_L_tuple;
extern PyObject *const_str_plain_max_uint64;
extern PyObject *const_int_pos_255;
extern PyObject *const_str_plain_max_uint32;
extern PyObject *const_str_plain_num;
extern PyObject *const_str_plain_origin;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_B;
extern PyObject *const_str_plain_max_uint8;
extern PyObject *const_tuple_2d68c0cb2bf3db2a25ba90da9ac738a1_tuple;
extern PyObject *const_str_plain_H;
extern PyObject *const_int_pos_65535;
extern PyObject *const_int_pos_64;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_get_word_alignment;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_digest_9c1cf6cca19b40e6ef2b3a028e76f0d6;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_force_arch;
extern PyObject *const_str_plain_MACHINE_WORD_SIZE;
static PyObject *const_str_digest_1ba4ee578cb067fc8bce59b326a4ce98;
extern PyObject *const_tuple_int_pos_16_int_pos_2_int_pos_65535_str_plain_H_tuple;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_int_pos_32;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_int_pos_9223372036854775807;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_2e4edba9f691efc316f3cc847a5ab540 = UNSTREAM_STRING_ASCII( &constant_bin[ 2733434 ], 59, 0 );
    const_str_digest_d39f6a155c2509399cb77e18811f7f69 = UNSTREAM_STRING_ASCII( &constant_bin[ 2733493 ], 16, 0 );
    const_str_digest_4a3a1ff416c3f72af7323e7d0c8ac597 = UNSTREAM_STRING_ASCII( &constant_bin[ 2733509 ], 47, 0 );
    const_str_digest_1ba4ee578cb067fc8bce59b326a4ce98 = UNSTREAM_STRING_ASCII( &constant_bin[ 2733556 ], 25, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_rsa$machine_size( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f7aaf220597db229f7e4876902c7f210;
static PyCodeObject *codeobj_0ea03b6709e8238f7abfbaf8742b7521;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_4a3a1ff416c3f72af7323e7d0c8ac597;
    codeobj_f7aaf220597db229f7e4876902c7f210 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1ba4ee578cb067fc8bce59b326a4ce98, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_0ea03b6709e8238f7abfbaf8742b7521 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_word_alignment, 38, const_tuple_2d68c0cb2bf3db2a25ba90da9ac738a1_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_rsa$machine_size$$$function_1_get_word_alignment( PyObject *defaults );


// The module function definitions.
static PyObject *impl_rsa$machine_size$$$function_1_get_word_alignment( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_num = python_pars[ 0 ];
    PyObject *par_force_arch = python_pars[ 1 ];
    PyObject *par__machine_word_size = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_0ea03b6709e8238f7abfbaf8742b7521;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0ea03b6709e8238f7abfbaf8742b7521 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0ea03b6709e8238f7abfbaf8742b7521, codeobj_0ea03b6709e8238f7abfbaf8742b7521, module_rsa$machine_size, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0ea03b6709e8238f7abfbaf8742b7521 = cache_frame_0ea03b6709e8238f7abfbaf8742b7521;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0ea03b6709e8238f7abfbaf8742b7521 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0ea03b6709e8238f7abfbaf8742b7521 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_force_arch );
        tmp_compexpr_left_1 = par_force_arch;
        tmp_compexpr_right_1 = const_int_pos_64;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooNNNN";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( par__machine_word_size );
        tmp_compexpr_left_2 = par__machine_word_size;
        tmp_compexpr_right_2 = const_int_pos_64;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooNNNN";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT( par_num );
        tmp_compexpr_left_3 = par_num;
        tmp_compexpr_right_3 = const_int_pos_4294967295;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooNNNN";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = const_tuple_36cff8729c9fbe536c5709ff2fbbc0a5_tuple;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( par_num );
            tmp_compexpr_left_4 = par_num;
            tmp_compexpr_right_4 = const_int_pos_65535;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "oooNNNN";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            tmp_return_value = const_tuple_int_pos_32_int_pos_4_int_pos_4294967295_str_plain_L_tuple;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                CHECK_OBJECT( par_num );
                tmp_compexpr_left_5 = par_num;
                tmp_compexpr_right_5 = const_int_pos_255;
                tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 69;
                    type_description_1 = "oooNNNN";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_3;
                }
                else
                {
                    goto branch_no_3;
                }
                branch_yes_3:;
                tmp_return_value = const_tuple_int_pos_16_int_pos_2_int_pos_65535_str_plain_H_tuple;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                goto branch_end_3;
                branch_no_3:;
                tmp_return_value = const_tuple_int_pos_8_int_pos_1_int_pos_255_str_plain_B_tuple;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ea03b6709e8238f7abfbaf8742b7521 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ea03b6709e8238f7abfbaf8742b7521 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ea03b6709e8238f7abfbaf8742b7521 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0ea03b6709e8238f7abfbaf8742b7521, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0ea03b6709e8238f7abfbaf8742b7521->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0ea03b6709e8238f7abfbaf8742b7521, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0ea03b6709e8238f7abfbaf8742b7521,
        type_description_1,
        par_num,
        par_force_arch,
        par__machine_word_size,
        NULL,
        NULL,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_0ea03b6709e8238f7abfbaf8742b7521 == cache_frame_0ea03b6709e8238f7abfbaf8742b7521 )
    {
        Py_DECREF( frame_0ea03b6709e8238f7abfbaf8742b7521 );
    }
    cache_frame_0ea03b6709e8238f7abfbaf8742b7521 = NULL;

    assertFrameObject( frame_0ea03b6709e8238f7abfbaf8742b7521 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$machine_size$$$function_1_get_word_alignment );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_force_arch );
    Py_DECREF( par_force_arch );
    par_force_arch = NULL;

    CHECK_OBJECT( (PyObject *)par__machine_word_size );
    Py_DECREF( par__machine_word_size );
    par__machine_word_size = NULL;

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

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_force_arch );
    Py_DECREF( par_force_arch );
    par_force_arch = NULL;

    CHECK_OBJECT( (PyObject *)par__machine_word_size );
    Py_DECREF( par__machine_word_size );
    par__machine_word_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$machine_size$$$function_1_get_word_alignment );
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



static PyObject *MAKE_FUNCTION_rsa$machine_size$$$function_1_get_word_alignment( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$machine_size$$$function_1_get_word_alignment,
        const_str_plain_get_word_alignment,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0ea03b6709e8238f7abfbaf8742b7521,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$machine_size,
        const_str_digest_9c1cf6cca19b40e6ef2b3a028e76f0d6,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_rsa$machine_size =
{
    PyModuleDef_HEAD_INIT,
    "rsa.machine_size",
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
MOD_ENTRY_DECL(rsa$machine_size)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(rsa$machine_size)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_rsa$machine_size );
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
    puts("rsa.machine_size: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.machine_size: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.machine_size: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrsa$machine_size" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_rsa$machine_size = Py_InitModule4(
        "rsa.machine_size",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_rsa$machine_size = PyModule_Create( &mdef_rsa$machine_size );
#endif

    moduledict_rsa$machine_size = MODULE_DICT( module_rsa$machine_size );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_rsa$machine_size,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_rsa$machine_size,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$machine_size,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$machine_size,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_rsa$machine_size );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_d39f6a155c2509399cb77e18811f7f69, module_rsa$machine_size );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_f7aaf220597db229f7e4876902c7f210;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_2e4edba9f691efc316f3cc847a5ab540;
        UPDATE_STRING_DICT0( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_4a3a1ff416c3f72af7323e7d0c8ac597;
        UPDATE_STRING_DICT0( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_f7aaf220597db229f7e4876902c7f210 = MAKE_MODULE_FRAME( codeobj_f7aaf220597db229f7e4876902c7f210, module_rsa$machine_size );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f7aaf220597db229f7e4876902c7f210 );
    assert( Py_REFCNT( frame_f7aaf220597db229f7e4876902c7f210 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_4a3a1ff416c3f72af7323e7d0c8ac597;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_rsa$machine_size;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_f7aaf220597db229f7e4876902c7f210->m_frame.f_lineno = 19;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_maxsize );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_MAX_INT, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_pos_9223372036854775807;
        UPDATE_STRING_DICT0( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_MAX_INT64, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_int_pos_2147483647;
        UPDATE_STRING_DICT0( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_MAX_INT32, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_pos_32767;
        UPDATE_STRING_DICT0( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_MAX_INT16, tmp_assign_source_8 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_MAX_INT );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_INT );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_compexpr_left_1 = tmp_mvar_value_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_MAX_INT64 );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_INT64 );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_compexpr_right_1 = tmp_mvar_value_5;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

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
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = const_int_pos_64;
            UPDATE_STRING_DICT0( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_MACHINE_WORD_SIZE, tmp_assign_source_9 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_MAX_INT );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_INT );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAX_INT" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 30;

                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_2 = tmp_mvar_value_6;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_MAX_INT32 );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_INT32 );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAX_INT32" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 30;

                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_2 = tmp_mvar_value_7;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;

                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assign_source_10;
                tmp_assign_source_10 = const_int_pos_32;
                UPDATE_STRING_DICT0( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_MACHINE_WORD_SIZE, tmp_assign_source_10 );
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_11;
                tmp_assign_source_11 = const_int_pos_64;
                UPDATE_STRING_DICT0( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_MACHINE_WORD_SIZE, tmp_assign_source_11 );
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_8;
        tmp_tuple_element_1 = const_int_pos_64;
        tmp_defaults_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_MACHINE_WORD_SIZE );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MACHINE_WORD_SIZE );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_defaults_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MACHINE_WORD_SIZE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_8;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_12 = MAKE_FUNCTION_rsa$machine_size$$$function_1_get_word_alignment( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_rsa$machine_size, (Nuitka_StringObject *)const_str_plain_get_word_alignment, tmp_assign_source_12 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7aaf220597db229f7e4876902c7f210 );
#endif
    popFrameStack();

    assertFrameObject( frame_f7aaf220597db229f7e4876902c7f210 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7aaf220597db229f7e4876902c7f210 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f7aaf220597db229f7e4876902c7f210, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f7aaf220597db229f7e4876902c7f210->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f7aaf220597db229f7e4876902c7f210, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_rsa$machine_size );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
