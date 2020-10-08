/* Generated code for Python module 'pyasn1.compat.octets'
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

/* The "_module_pyasn1$compat$octets" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$compat$octets;
PyDictObject *moduledict_pyasn1$compat$octets;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_ensureString;
extern PyObject *const_str_digest_20861594150da1e43b5ee3f86b9deef6;
extern PyObject *const_str_plain_int2oct;
extern PyObject *const_str_plain_s;
static PyObject *const_str_digest_8740e23682c1aa296f87a7443dcaee6d;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_digest_20861594150da1e43b5ee3f86b9deef6_tuple;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_str;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_oct2int;
extern PyObject *const_str_plain_null;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_chr;
static PyObject *const_str_digest_58c2836bd656d96de4fce58c5a6f004c;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_ints2octs;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_digest_60685fcea8bf95c3a304455958b7e27d;
extern PyObject *const_str_plain_isStringType;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_ord;
extern PyObject *const_str_plain_isOctetsType;
extern PyObject *const_tuple_str_plain_s_tuple;
static PyObject *const_str_plain_octs2str;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_str2octs;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_octs2ints;
extern PyObject *const_int_pos_2;
extern PyObject *const_tuple_str_plain_version_info_tuple;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_8740e23682c1aa296f87a7443dcaee6d = UNSTREAM_STRING_ASCII( &constant_bin[ 2551830 ], 51, 0 );
    const_str_digest_58c2836bd656d96de4fce58c5a6f004c = UNSTREAM_STRING_ASCII( &constant_bin[ 2551881 ], 29, 0 );
    const_str_plain_octs2str = UNSTREAM_STRING_ASCII( &constant_bin[ 2551910 ], 8, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyasn1$compat$octets( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_851c87aeda5ad39672a64b06775f87b5;
static PyCodeObject *codeobj_70fcecf8b84a1f24a4c9e61d6091b80e;
static PyCodeObject *codeobj_9987c5f484887b817cc4d1bd14e35868;
static PyCodeObject *codeobj_d3c1b5c35fa7ca58234938908ed71432;
static PyCodeObject *codeobj_2857c204a72d31e13324856595ff304a;
static PyCodeObject *codeobj_b9936e0408cd3db58de766c6ede54410;
static PyCodeObject *codeobj_3dc197c1a6470b82e28f5c7693591ba0;
static PyCodeObject *codeobj_79f883e5f6042025db00914018d9978b;
static PyCodeObject *codeobj_3676399769317fea61358f53d15aaac1;
static PyCodeObject *codeobj_d2c402e4247e44393c3bb9c8b686cb71;
static PyCodeObject *codeobj_b86d925c9163a465ad61f6299f2e1fa8;
static PyCodeObject *codeobj_87d217cf481df403a598d8f2aeba8ee5;
static PyCodeObject *codeobj_4dc2947795c2411f9fb8ab1dd648ce87;
static PyCodeObject *codeobj_4c979e7d7c38188b3b98d20f32cd5dc6;
static PyCodeObject *codeobj_9c6a9bc4a2af3dbf3ba9b076dd6966cf;
static PyCodeObject *codeobj_b3268576a06179969f5f47864516bf99;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_8740e23682c1aa296f87a7443dcaee6d;
    codeobj_851c87aeda5ad39672a64b06775f87b5 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 12, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_70fcecf8b84a1f24a4c9e61d6091b80e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 17, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9987c5f484887b817cc4d1bd14e35868 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 23, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d3c1b5c35fa7ca58234938908ed71432 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 25, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2857c204a72d31e13324856595ff304a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 42, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b9936e0408cd3db58de766c6ede54410 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 44, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3dc197c1a6470b82e28f5c7693591ba0 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 19, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_79f883e5f6042025db00914018d9978b = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 21, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3676399769317fea61358f53d15aaac1 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 31, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d2c402e4247e44393c3bb9c8b686cb71 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 34, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b86d925c9163a465ad61f6299f2e1fa8 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 36, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_87d217cf481df403a598d8f2aeba8ee5 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 38, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4dc2947795c2411f9fb8ab1dd648ce87 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 40, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4c979e7d7c38188b3b98d20f32cd5dc6 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 12, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9c6a9bc4a2af3dbf3ba9b076dd6966cf = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 17, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b3268576a06179969f5f47864516bf99 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_58c2836bd656d96de4fce58c5a6f004c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_10_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_11_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_12_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_13_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_2_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_3_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_4_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_5_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_6_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_7_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_8_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_9_lambda(  );


// The module function definitions.
static PyObject *impl_pyasn1$compat$octets$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_851c87aeda5ad39672a64b06775f87b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_4c979e7d7c38188b3b98d20f32cd5dc6_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_4c979e7d7c38188b3b98d20f32cd5dc6_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_851c87aeda5ad39672a64b06775f87b5 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_851c87aeda5ad39672a64b06775f87b5, codeobj_851c87aeda5ad39672a64b06775f87b5, module_pyasn1$compat$octets, sizeof(void *) );
    frame_851c87aeda5ad39672a64b06775f87b5 = cache_frame_851c87aeda5ad39672a64b06775f87b5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_851c87aeda5ad39672a64b06775f87b5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_851c87aeda5ad39672a64b06775f87b5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_source_name_1 = const_str_empty;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
        assert( !(tmp_called_name_1 == NULL) );
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_s );
            tmp_iter_arg_1 = par_s;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_4c979e7d7c38188b3b98d20f32cd5dc6_2, codeobj_4c979e7d7c38188b3b98d20f32cd5dc6, module_pyasn1$compat$octets, sizeof(void *) );
        frame_4c979e7d7c38188b3b98d20f32cd5dc6_2 = cache_frame_4c979e7d7c38188b3b98d20f32cd5dc6_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_4c979e7d7c38188b3b98d20f32cd5dc6_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_4c979e7d7c38188b3b98d20f32cd5dc6_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 12;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_4;
                Py_INCREF( outline_0_var_x );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_int2oct );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int2oct );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "int2oct" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 12;
                type_description_2 = "o";
                goto try_except_handler_3;
            }

            tmp_called_name_2 = tmp_mvar_value_1;
            CHECK_OBJECT( outline_0_var_x );
            tmp_args_element_name_2 = outline_0_var_x;
            frame_4c979e7d7c38188b3b98d20f32cd5dc6_2->m_frame.f_lineno = 12;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 12;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_args_element_name_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_args_element_name_1 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_1_lambda );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        goto frame_return_exit_2;
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

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4c979e7d7c38188b3b98d20f32cd5dc6_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_4c979e7d7c38188b3b98d20f32cd5dc6_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4c979e7d7c38188b3b98d20f32cd5dc6_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_4c979e7d7c38188b3b98d20f32cd5dc6_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_4c979e7d7c38188b3b98d20f32cd5dc6_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_4c979e7d7c38188b3b98d20f32cd5dc6_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_4c979e7d7c38188b3b98d20f32cd5dc6_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame.
        if ( frame_4c979e7d7c38188b3b98d20f32cd5dc6_2 == cache_frame_4c979e7d7c38188b3b98d20f32cd5dc6_2 )
        {
            Py_DECREF( frame_4c979e7d7c38188b3b98d20f32cd5dc6_2 );
        }
        cache_frame_4c979e7d7c38188b3b98d20f32cd5dc6_2 = NULL;

        assertFrameObject( frame_4c979e7d7c38188b3b98d20f32cd5dc6_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "o";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_1_lambda );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_x );
        outline_0_var_x = NULL;

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

        Py_XDECREF( outline_0_var_x );
        outline_0_var_x = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_1_lambda );
        return NULL;
        outline_exception_1:;
        exception_lineno = 12;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_851c87aeda5ad39672a64b06775f87b5->m_frame.f_lineno = 12;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_851c87aeda5ad39672a64b06775f87b5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_851c87aeda5ad39672a64b06775f87b5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_851c87aeda5ad39672a64b06775f87b5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_851c87aeda5ad39672a64b06775f87b5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_851c87aeda5ad39672a64b06775f87b5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_851c87aeda5ad39672a64b06775f87b5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_851c87aeda5ad39672a64b06775f87b5,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_851c87aeda5ad39672a64b06775f87b5 == cache_frame_851c87aeda5ad39672a64b06775f87b5 )
    {
        Py_DECREF( frame_851c87aeda5ad39672a64b06775f87b5 );
    }
    cache_frame_851c87aeda5ad39672a64b06775f87b5 = NULL;

    assertFrameObject( frame_851c87aeda5ad39672a64b06775f87b5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_1_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_2_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_70fcecf8b84a1f24a4c9e61d6091b80e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_70fcecf8b84a1f24a4c9e61d6091b80e = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_70fcecf8b84a1f24a4c9e61d6091b80e, codeobj_70fcecf8b84a1f24a4c9e61d6091b80e, module_pyasn1$compat$octets, sizeof(void *) );
    frame_70fcecf8b84a1f24a4c9e61d6091b80e = cache_frame_70fcecf8b84a1f24a4c9e61d6091b80e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_70fcecf8b84a1f24a4c9e61d6091b80e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_70fcecf8b84a1f24a4c9e61d6091b80e ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_s );
        tmp_iter_arg_1 = par_s;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        assert( tmp_listcomp_1__$0 == NULL );
        tmp_listcomp_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New( 0 );
        assert( tmp_listcomp_1__contraction == NULL );
        tmp_listcomp_1__contraction = tmp_assign_source_2;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2, codeobj_9c6a9bc4a2af3dbf3ba9b076dd6966cf, module_pyasn1$compat$octets, sizeof(void *) );
    frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2 = cache_frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_listcomp_1__$0 );
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_2 = "o";
                exception_lineno = 17;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_x;
            outline_0_var_x = tmp_assign_source_4;
            Py_INCREF( outline_0_var_x );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_oct2int );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_oct2int );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "oct2int" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 17;
            type_description_2 = "o";
            goto try_except_handler_3;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( outline_0_var_x );
        tmp_args_element_name_1 = outline_0_var_x;
        frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        assert( PyList_Check( tmp_append_list_1 ) );
        tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
        Py_DECREF( tmp_append_value_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_listcomp_1__contraction );
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
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

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2,
        type_description_2,
        outline_0_var_x
    );


    // Release cached frame.
    if ( frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2 == cache_frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2 )
    {
        Py_DECREF( frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2 );
    }
    cache_frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2 = NULL;

    assertFrameObject( frame_9c6a9bc4a2af3dbf3ba9b076dd6966cf_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "o";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_x );
    outline_0_var_x = NULL;

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

    Py_XDECREF( outline_0_var_x );
    outline_0_var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_2_lambda );
    return NULL;
    outline_exception_1:;
    exception_lineno = 17;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_70fcecf8b84a1f24a4c9e61d6091b80e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_70fcecf8b84a1f24a4c9e61d6091b80e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_70fcecf8b84a1f24a4c9e61d6091b80e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_70fcecf8b84a1f24a4c9e61d6091b80e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_70fcecf8b84a1f24a4c9e61d6091b80e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_70fcecf8b84a1f24a4c9e61d6091b80e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_70fcecf8b84a1f24a4c9e61d6091b80e,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_70fcecf8b84a1f24a4c9e61d6091b80e == cache_frame_70fcecf8b84a1f24a4c9e61d6091b80e )
    {
        Py_DECREF( frame_70fcecf8b84a1f24a4c9e61d6091b80e );
    }
    cache_frame_70fcecf8b84a1f24a4c9e61d6091b80e = NULL;

    assertFrameObject( frame_70fcecf8b84a1f24a4c9e61d6091b80e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_2_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_3_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_3_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_3_lambda );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyasn1$compat$octets$$$function_4_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_4_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_4_lambda );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyasn1$compat$octets$$$function_5_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_9987c5f484887b817cc4d1bd14e35868;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9987c5f484887b817cc4d1bd14e35868 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9987c5f484887b817cc4d1bd14e35868, codeobj_9987c5f484887b817cc4d1bd14e35868, module_pyasn1$compat$octets, sizeof(void *) );
    frame_9987c5f484887b817cc4d1bd14e35868 = cache_frame_9987c5f484887b817cc4d1bd14e35868;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9987c5f484887b817cc4d1bd14e35868 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9987c5f484887b817cc4d1bd14e35868 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_s );
        tmp_isinstance_inst_1 = par_s;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9987c5f484887b817cc4d1bd14e35868 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9987c5f484887b817cc4d1bd14e35868 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9987c5f484887b817cc4d1bd14e35868 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9987c5f484887b817cc4d1bd14e35868, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9987c5f484887b817cc4d1bd14e35868->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9987c5f484887b817cc4d1bd14e35868, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9987c5f484887b817cc4d1bd14e35868,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_9987c5f484887b817cc4d1bd14e35868 == cache_frame_9987c5f484887b817cc4d1bd14e35868 )
    {
        Py_DECREF( frame_9987c5f484887b817cc4d1bd14e35868 );
    }
    cache_frame_9987c5f484887b817cc4d1bd14e35868 = NULL;

    assertFrameObject( frame_9987c5f484887b817cc4d1bd14e35868 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_5_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_5_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_6_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d3c1b5c35fa7ca58234938908ed71432;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d3c1b5c35fa7ca58234938908ed71432 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d3c1b5c35fa7ca58234938908ed71432, codeobj_d3c1b5c35fa7ca58234938908ed71432, module_pyasn1$compat$octets, sizeof(void *) );
    frame_d3c1b5c35fa7ca58234938908ed71432 = cache_frame_d3c1b5c35fa7ca58234938908ed71432;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d3c1b5c35fa7ca58234938908ed71432 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d3c1b5c35fa7ca58234938908ed71432 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_isinstance_inst_1 = par_s;
        tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
        tmp_isinstance_cls_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_unicode );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_isinstance_cls_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3c1b5c35fa7ca58234938908ed71432 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3c1b5c35fa7ca58234938908ed71432 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3c1b5c35fa7ca58234938908ed71432 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d3c1b5c35fa7ca58234938908ed71432, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d3c1b5c35fa7ca58234938908ed71432->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d3c1b5c35fa7ca58234938908ed71432, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d3c1b5c35fa7ca58234938908ed71432,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_d3c1b5c35fa7ca58234938908ed71432 == cache_frame_d3c1b5c35fa7ca58234938908ed71432 )
    {
        Py_DECREF( frame_d3c1b5c35fa7ca58234938908ed71432 );
    }
    cache_frame_d3c1b5c35fa7ca58234938908ed71432 = NULL;

    assertFrameObject( frame_d3c1b5c35fa7ca58234938908ed71432 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_6_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_6_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_7_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3676399769317fea61358f53d15aaac1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3676399769317fea61358f53d15aaac1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3676399769317fea61358f53d15aaac1, codeobj_3676399769317fea61358f53d15aaac1, module_pyasn1$compat$octets, sizeof(void *) );
    frame_3676399769317fea61358f53d15aaac1 = cache_frame_3676399769317fea61358f53d15aaac1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3676399769317fea61358f53d15aaac1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3676399769317fea61358f53d15aaac1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_ints2octs );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ints2octs );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ints2octs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_args_element_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        frame_3676399769317fea61358f53d15aaac1->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3676399769317fea61358f53d15aaac1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3676399769317fea61358f53d15aaac1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3676399769317fea61358f53d15aaac1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3676399769317fea61358f53d15aaac1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3676399769317fea61358f53d15aaac1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3676399769317fea61358f53d15aaac1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3676399769317fea61358f53d15aaac1,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_3676399769317fea61358f53d15aaac1 == cache_frame_3676399769317fea61358f53d15aaac1 )
    {
        Py_DECREF( frame_3676399769317fea61358f53d15aaac1 );
    }
    cache_frame_3676399769317fea61358f53d15aaac1 = NULL;

    assertFrameObject( frame_3676399769317fea61358f53d15aaac1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_7_lambda );
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
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_7_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_8_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_8_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_8_lambda );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyasn1$compat$octets$$$function_9_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_9_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_9_lambda );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyasn1$compat$octets$$$function_10_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_87d217cf481df403a598d8f2aeba8ee5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_87d217cf481df403a598d8f2aeba8ee5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_87d217cf481df403a598d8f2aeba8ee5, codeobj_87d217cf481df403a598d8f2aeba8ee5, module_pyasn1$compat$octets, sizeof(void *) );
    frame_87d217cf481df403a598d8f2aeba8ee5 = cache_frame_87d217cf481df403a598d8f2aeba8ee5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_87d217cf481df403a598d8f2aeba8ee5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_87d217cf481df403a598d8f2aeba8ee5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_x );
        tmp_called_instance_1 = par_x;
        frame_87d217cf481df403a598d8f2aeba8ee5->m_frame.f_lineno = 38;
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_20861594150da1e43b5ee3f86b9deef6_tuple, 0 ) );

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_87d217cf481df403a598d8f2aeba8ee5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_87d217cf481df403a598d8f2aeba8ee5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_87d217cf481df403a598d8f2aeba8ee5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_87d217cf481df403a598d8f2aeba8ee5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_87d217cf481df403a598d8f2aeba8ee5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_87d217cf481df403a598d8f2aeba8ee5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_87d217cf481df403a598d8f2aeba8ee5,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_87d217cf481df403a598d8f2aeba8ee5 == cache_frame_87d217cf481df403a598d8f2aeba8ee5 )
    {
        Py_DECREF( frame_87d217cf481df403a598d8f2aeba8ee5 );
    }
    cache_frame_87d217cf481df403a598d8f2aeba8ee5 = NULL;

    assertFrameObject( frame_87d217cf481df403a598d8f2aeba8ee5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_10_lambda );
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
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_10_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_11_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4dc2947795c2411f9fb8ab1dd648ce87;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4dc2947795c2411f9fb8ab1dd648ce87 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4dc2947795c2411f9fb8ab1dd648ce87, codeobj_4dc2947795c2411f9fb8ab1dd648ce87, module_pyasn1$compat$octets, sizeof(void *) );
    frame_4dc2947795c2411f9fb8ab1dd648ce87 = cache_frame_4dc2947795c2411f9fb8ab1dd648ce87;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4dc2947795c2411f9fb8ab1dd648ce87 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4dc2947795c2411f9fb8ab1dd648ce87 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_x );
        tmp_called_instance_1 = par_x;
        frame_4dc2947795c2411f9fb8ab1dd648ce87->m_frame.f_lineno = 40;
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_20861594150da1e43b5ee3f86b9deef6_tuple, 0 ) );

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4dc2947795c2411f9fb8ab1dd648ce87 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4dc2947795c2411f9fb8ab1dd648ce87 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4dc2947795c2411f9fb8ab1dd648ce87 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4dc2947795c2411f9fb8ab1dd648ce87, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4dc2947795c2411f9fb8ab1dd648ce87->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4dc2947795c2411f9fb8ab1dd648ce87, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4dc2947795c2411f9fb8ab1dd648ce87,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_4dc2947795c2411f9fb8ab1dd648ce87 == cache_frame_4dc2947795c2411f9fb8ab1dd648ce87 )
    {
        Py_DECREF( frame_4dc2947795c2411f9fb8ab1dd648ce87 );
    }
    cache_frame_4dc2947795c2411f9fb8ab1dd648ce87 = NULL;

    assertFrameObject( frame_4dc2947795c2411f9fb8ab1dd648ce87 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_11_lambda );
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
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_11_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_12_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_2857c204a72d31e13324856595ff304a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2857c204a72d31e13324856595ff304a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2857c204a72d31e13324856595ff304a, codeobj_2857c204a72d31e13324856595ff304a, module_pyasn1$compat$octets, sizeof(void *) );
    frame_2857c204a72d31e13324856595ff304a = cache_frame_2857c204a72d31e13324856595ff304a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2857c204a72d31e13324856595ff304a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2857c204a72d31e13324856595ff304a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_s );
        tmp_isinstance_inst_1 = par_s;
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2857c204a72d31e13324856595ff304a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2857c204a72d31e13324856595ff304a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2857c204a72d31e13324856595ff304a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2857c204a72d31e13324856595ff304a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2857c204a72d31e13324856595ff304a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2857c204a72d31e13324856595ff304a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2857c204a72d31e13324856595ff304a,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_2857c204a72d31e13324856595ff304a == cache_frame_2857c204a72d31e13324856595ff304a )
    {
        Py_DECREF( frame_2857c204a72d31e13324856595ff304a );
    }
    cache_frame_2857c204a72d31e13324856595ff304a = NULL;

    assertFrameObject( frame_2857c204a72d31e13324856595ff304a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_12_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_12_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_13_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b9936e0408cd3db58de766c6ede54410;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b9936e0408cd3db58de766c6ede54410 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b9936e0408cd3db58de766c6ede54410, codeobj_b9936e0408cd3db58de766c6ede54410, module_pyasn1$compat$octets, sizeof(void *) );
    frame_b9936e0408cd3db58de766c6ede54410 = cache_frame_b9936e0408cd3db58de766c6ede54410;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b9936e0408cd3db58de766c6ede54410 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b9936e0408cd3db58de766c6ede54410 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_s );
        tmp_isinstance_inst_1 = par_s;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9936e0408cd3db58de766c6ede54410 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9936e0408cd3db58de766c6ede54410 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9936e0408cd3db58de766c6ede54410 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b9936e0408cd3db58de766c6ede54410, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b9936e0408cd3db58de766c6ede54410->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b9936e0408cd3db58de766c6ede54410, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b9936e0408cd3db58de766c6ede54410,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_b9936e0408cd3db58de766c6ede54410 == cache_frame_b9936e0408cd3db58de766c6ede54410 )
    {
        Py_DECREF( frame_b9936e0408cd3db58de766c6ede54410 );
    }
    cache_frame_b9936e0408cd3db58de766c6ede54410 = NULL;

    assertFrameObject( frame_b9936e0408cd3db58de766c6ede54410 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_13_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_13_lambda );
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



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_10_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_10_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_87d217cf481df403a598d8f2aeba8ee5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_11_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_11_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4dc2947795c2411f9fb8ab1dd648ce87,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_12_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_12_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2857c204a72d31e13324856595ff304a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_13_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_13_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b9936e0408cd3db58de766c6ede54410,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_851c87aeda5ad39672a64b06775f87b5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_2_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_70fcecf8b84a1f24a4c9e61d6091b80e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_3_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_3_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3dc197c1a6470b82e28f5c7693591ba0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_4_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_4_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_79f883e5f6042025db00914018d9978b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_5_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_5_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9987c5f484887b817cc4d1bd14e35868,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_6_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_6_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d3c1b5c35fa7ca58234938908ed71432,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_7_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_7_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3676399769317fea61358f53d15aaac1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_8_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_8_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d2c402e4247e44393c3bb9c8b686cb71,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_9_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_9_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b86d925c9163a465ad61f6299f2e1fa8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyasn1$compat$octets =
{
    PyModuleDef_HEAD_INIT,
    "pyasn1.compat.octets",
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
MOD_ENTRY_DECL(pyasn1$compat$octets)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(pyasn1$compat$octets)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyasn1$compat$octets );
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
    puts("pyasn1.compat.octets: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.compat.octets: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.compat.octets: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpyasn1$compat$octets" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyasn1$compat$octets = Py_InitModule4(
        "pyasn1.compat.octets",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pyasn1$compat$octets = PyModule_Create( &mdef_pyasn1$compat$octets );
#endif

    moduledict_pyasn1$compat$octets = MODULE_DICT( module_pyasn1$compat$octets );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_pyasn1$compat$octets,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pyasn1$compat$octets,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$compat$octets,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$compat$octets,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pyasn1$compat$octets );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_60685fcea8bf95c3a304455958b7e27d, module_pyasn1$compat$octets );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_b3268576a06179969f5f47864516bf99;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_8740e23682c1aa296f87a7443dcaee6d;
        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_b3268576a06179969f5f47864516bf99 = MAKE_MODULE_FRAME( codeobj_b3268576a06179969f5f47864516bf99, module_pyasn1$compat$octets );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b3268576a06179969f5f47864516bf99 );
    assert( Py_REFCNT( frame_b3268576a06179969f5f47864516bf99 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_8740e23682c1aa296f87a7443dcaee6d;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_pyasn1$compat$octets;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_version_info_tuple;
        tmp_level_name_1 = const_int_0;
        frame_b3268576a06179969f5f47864516bf99->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_version_info );
        Py_DECREF( tmp_import_name_from_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_version_info, tmp_assign_source_4 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_version_info );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_version_info );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_subscribed_name_1 = tmp_mvar_value_3;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

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
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = LOOKUP_BUILTIN( const_str_plain_chr );
            assert( tmp_assign_source_5 != NULL );
            UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_int2oct, tmp_assign_source_5 );
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_1_lambda(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_ints2octs, tmp_assign_source_6 );
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_str_empty;
            UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_null, tmp_assign_source_7 );
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = LOOKUP_BUILTIN( const_str_plain_ord );
            assert( tmp_assign_source_8 != NULL );
            UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_oct2int, tmp_assign_source_8 );
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_2_lambda(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_octs2ints, tmp_assign_source_9 );
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_3_lambda(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_str2octs, tmp_assign_source_10 );
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_4_lambda(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_octs2str, tmp_assign_source_11 );
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_5_lambda(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_isOctetsType, tmp_assign_source_12 );
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_6_lambda(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_isStringType, tmp_assign_source_13 );
        }
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = (PyObject *)&PyUnicode_Type;
            UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_ensureString, tmp_assign_source_14 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = (PyObject *)&PyBytes_Type;
            UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_ints2octs, tmp_assign_source_15 );
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_7_lambda(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_int2oct, tmp_assign_source_16 );
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_ints2octs );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ints2octs );
            }

            CHECK_OBJECT( tmp_mvar_value_4 );
            tmp_called_name_1 = tmp_mvar_value_4;
            frame_b3268576a06179969f5f47864516bf99->m_frame.f_lineno = 32;
            tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_null, tmp_assign_source_17 );
        }
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_8_lambda(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_oct2int, tmp_assign_source_18 );
        }
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_9_lambda(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_octs2ints, tmp_assign_source_19 );
        }
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_10_lambda(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_str2octs, tmp_assign_source_20 );
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_11_lambda(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_octs2str, tmp_assign_source_21 );
        }
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_12_lambda(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_isOctetsType, tmp_assign_source_22 );
        }
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_13_lambda(  );



            UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_isStringType, tmp_assign_source_23 );
        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = (PyObject *)&PyBytes_Type;
            UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_ensureString, tmp_assign_source_24 );
        }
        branch_end_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3268576a06179969f5f47864516bf99 );
#endif
    popFrameStack();

    assertFrameObject( frame_b3268576a06179969f5f47864516bf99 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3268576a06179969f5f47864516bf99 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b3268576a06179969f5f47864516bf99, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b3268576a06179969f5f47864516bf99->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b3268576a06179969f5f47864516bf99, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_pyasn1$compat$octets );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
