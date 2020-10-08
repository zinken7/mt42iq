/* Generated code for Python module 'attr.filters'
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

/* The "_module_attr$filters" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_attr$filters;
PyDictObject *moduledict_attr$filters;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_attrs;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_84569dfe4bf2d5118766bf8107967f02;
static PyObject *const_str_digest_6917ec0aad867d8d02d07c10e116c85a;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_str_plain__split_what;
static PyObject *const_str_digest_6752f263bf790e2e2e020c0b8c590413;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_exclude;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
static PyObject *const_tuple_str_plain_Attribute_tuple;
extern PyObject *const_str_plain_value;
static PyObject *const_tuple_str_plain_what_tuple;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_d2ba402d85bbc0fa3b9c76115b2ab6e9;
static PyObject *const_str_digest_2fe3f1393d12a409e7c58ac36723edb2;
extern PyObject *const_str_plain__make;
static PyObject *const_str_digest_3d7538a4a753d2da9935f83b72e2da09;
static PyObject *const_tuple_d0bd4e54746ea13c8b466c5dce7d2944_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain__compat;
static PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_cls_tuple;
extern PyObject *const_str_plain_what;
static PyObject *const_str_digest_ae7513d6d78418c461d3ccf45aece3f7;
static PyObject *const_str_plain_exclude_;
static PyObject *const_tuple_str_plain_isclass_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_Attribute;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_attribute;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_isclass;
static PyObject *const_tuple_fc16c5fea64f8fb2be76d8e5bb9e2d77_tuple;
extern PyObject *const_str_plain_include;
static PyObject *const_str_digest_4e05e91d673a58ff25792b0581cbc691;
static PyObject *const_tuple_ea144d42909d65c485bc736e980d4d2f_tuple;
static PyObject *const_str_digest_d7657c4e528a3e14bba79079b04b880b;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_include_;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_1a6f4ba2c544e9366a47c0c424d53bc8;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_84569dfe4bf2d5118766bf8107967f02 = UNSTREAM_STRING_ASCII( &constant_bin[ 41332 ], 44, 0 );
    const_str_digest_6917ec0aad867d8d02d07c10e116c85a = UNSTREAM_STRING_ASCII( &constant_bin[ 41376 ], 25, 0 );
    const_str_plain__split_what = UNSTREAM_STRING_ASCII( &constant_bin[ 41401 ], 11, 1 );
    const_str_digest_6752f263bf790e2e2e020c0b8c590413 = UNSTREAM_STRING_ASCII( &constant_bin[ 41412 ], 144, 0 );
    const_str_plain_exclude = UNSTREAM_STRING_ASCII( &constant_bin[ 31049 ], 7, 1 );
    const_tuple_str_plain_Attribute_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Attribute_tuple, 0, const_str_plain_Attribute ); Py_INCREF( const_str_plain_Attribute );
    const_tuple_str_plain_what_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_what_tuple, 0, const_str_plain_what ); Py_INCREF( const_str_plain_what );
    const_str_digest_d2ba402d85bbc0fa3b9c76115b2ab6e9 = UNSTREAM_STRING_ASCII( &constant_bin[ 41556 ], 21, 0 );
    const_str_digest_2fe3f1393d12a409e7c58ac36723edb2 = UNSTREAM_STRING_ASCII( &constant_bin[ 41577 ], 30, 0 );
    const_str_digest_3d7538a4a753d2da9935f83b72e2da09 = UNSTREAM_STRING_ASCII( &constant_bin[ 41607 ], 25, 0 );
    const_tuple_d0bd4e54746ea13c8b466c5dce7d2944_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d0bd4e54746ea13c8b466c5dce7d2944_tuple, 0, const_str_plain_what ); Py_INCREF( const_str_plain_what );
    PyTuple_SET_ITEM( const_tuple_d0bd4e54746ea13c8b466c5dce7d2944_tuple, 1, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_d0bd4e54746ea13c8b466c5dce7d2944_tuple, 2, const_str_plain_attrs ); Py_INCREF( const_str_plain_attrs );
    const_str_plain_exclude_ = UNSTREAM_STRING_ASCII( &constant_bin[ 41393 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_d0bd4e54746ea13c8b466c5dce7d2944_tuple, 3, const_str_plain_exclude_ ); Py_INCREF( const_str_plain_exclude_ );
    const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_cls_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_cls_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_cls_tuple, 1, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    const_str_digest_ae7513d6d78418c461d3ccf45aece3f7 = UNSTREAM_STRING_ASCII( &constant_bin[ 41564 ], 12, 0 );
    const_tuple_str_plain_isclass_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_isclass_tuple, 0, const_str_plain_isclass ); Py_INCREF( const_str_plain_isclass );
    const_str_plain_attribute = UNSTREAM_STRING_ASCII( &constant_bin[ 5979 ], 9, 1 );
    const_tuple_fc16c5fea64f8fb2be76d8e5bb9e2d77_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_fc16c5fea64f8fb2be76d8e5bb9e2d77_tuple, 0, const_str_plain_what ); Py_INCREF( const_str_plain_what );
    PyTuple_SET_ITEM( const_tuple_fc16c5fea64f8fb2be76d8e5bb9e2d77_tuple, 1, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_fc16c5fea64f8fb2be76d8e5bb9e2d77_tuple, 2, const_str_plain_attrs ); Py_INCREF( const_str_plain_attrs );
    const_str_plain_include_ = UNSTREAM_STRING_ASCII( &constant_bin[ 41624 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_fc16c5fea64f8fb2be76d8e5bb9e2d77_tuple, 3, const_str_plain_include_ ); Py_INCREF( const_str_plain_include_ );
    const_str_digest_4e05e91d673a58ff25792b0581cbc691 = UNSTREAM_STRING_ASCII( &constant_bin[ 41632 ], 43, 0 );
    const_tuple_ea144d42909d65c485bc736e980d4d2f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ea144d42909d65c485bc736e980d4d2f_tuple, 0, const_str_plain_attribute ); Py_INCREF( const_str_plain_attribute );
    PyTuple_SET_ITEM( const_tuple_ea144d42909d65c485bc736e980d4d2f_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_ea144d42909d65c485bc736e980d4d2f_tuple, 2, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_ea144d42909d65c485bc736e980d4d2f_tuple, 3, const_str_plain_attrs ); Py_INCREF( const_str_plain_attrs );
    const_str_digest_d7657c4e528a3e14bba79079b04b880b = UNSTREAM_STRING_ASCII( &constant_bin[ 41675 ], 68, 0 );
    const_str_digest_1a6f4ba2c544e9366a47c0c424d53bc8 = UNSTREAM_STRING_ASCII( &constant_bin[ 41743 ], 146, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_attr$filters( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f741afc1498dbfb54cd2463c4c7c3365;
static PyCodeObject *codeobj_e89f040ef508729a472feaf73d4ad76a;
static PyCodeObject *codeobj_6da02abda33081a1233a8e64e68a385e;
static PyCodeObject *codeobj_e8aa6ba80ecba6a46bc690137caf591b;
static PyCodeObject *codeobj_d0de58019cb0ad39368d8b6adf6f357f;
static PyCodeObject *codeobj_207dbc7737cac59dff809a16b3a7a9d2;
static PyCodeObject *codeobj_8e00f1fa84f8f6034fb726a2fea7b944;
static PyCodeObject *codeobj_f5d27d3196a39587fba48aa6d7000932;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_4e05e91d673a58ff25792b0581cbc691;
    codeobj_f741afc1498dbfb54cd2463c4c7c3365 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 16, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_cls_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e89f040ef508729a472feaf73d4ad76a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 17, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_cls_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6da02abda33081a1233a8e64e68a385e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d2ba402d85bbc0fa3b9c76115b2ab6e9, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e8aa6ba80ecba6a46bc690137caf591b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__split_what, 11, const_tuple_str_plain_what_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0de58019cb0ad39368d8b6adf6f357f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_exclude, 38, const_tuple_d0bd4e54746ea13c8b466c5dce7d2944_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_207dbc7737cac59dff809a16b3a7a9d2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_exclude_, 49, const_tuple_ea144d42909d65c485bc736e980d4d2f_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_8e00f1fa84f8f6034fb726a2fea7b944 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_include, 21, const_tuple_fc16c5fea64f8fb2be76d8e5bb9e2d77_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_f5d27d3196a39587fba48aa6d7000932 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_include_, 32, const_tuple_ea144d42909d65c485bc736e980d4d2f_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
static PyObject *attr$filters$$$function_1__split_what$$$genexpr_1_genexpr_maker( void );


static PyObject *attr$filters$$$function_1__split_what$$$genexpr_2_genexpr_maker( void );


static PyObject *MAKE_FUNCTION_attr$filters$$$function_1__split_what(  );


static PyObject *MAKE_FUNCTION_attr$filters$$$function_2_include(  );


static PyObject *MAKE_FUNCTION_attr$filters$$$function_2_include$$$function_1_include_(  );


static PyObject *MAKE_FUNCTION_attr$filters$$$function_3_exclude(  );


static PyObject *MAKE_FUNCTION_attr$filters$$$function_3_exclude$$$function_1_exclude_(  );


// The module function definitions.
static PyObject *impl_attr$filters$$$function_1__split_what( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_what = python_pars[ 0 ];
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    struct Nuitka_FrameObject *frame_e8aa6ba80ecba6a46bc690137caf591b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e8aa6ba80ecba6a46bc690137caf591b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e8aa6ba80ecba6a46bc690137caf591b, codeobj_e8aa6ba80ecba6a46bc690137caf591b, module_attr$filters, sizeof(void *) );
    frame_e8aa6ba80ecba6a46bc690137caf591b = cache_frame_e8aa6ba80ecba6a46bc690137caf591b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e8aa6ba80ecba6a46bc690137caf591b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e8aa6ba80ecba6a46bc690137caf591b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_frozenset_arg_1;
        PyObject *tmp_frozenset_arg_2;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_what );
            tmp_iter_arg_1 = par_what;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        tmp_frozenset_arg_1 = attr$filters$$$function_1__split_what$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_frozenset_arg_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( attr$filters$$$function_1__split_what );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( attr$filters$$$function_1__split_what );
        return NULL;
        outline_result_1:;
        tmp_tuple_element_1 = PyFrozenSet_New( tmp_frozenset_arg_1 );
        Py_DECREF( tmp_frozenset_arg_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( par_what );
            tmp_iter_arg_2 = par_what;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_2__$0 == NULL );
            tmp_genexpr_2__$0 = tmp_assign_source_2;
        }
        // Tried code:
        tmp_frozenset_arg_2 = attr$filters$$$function_1__split_what$$$genexpr_2_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_frozenset_arg_2)->m_closure[0] = PyCell_NEW0( tmp_genexpr_2__$0 );


        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( attr$filters$$$function_1__split_what );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
        Py_DECREF( tmp_genexpr_2__$0 );
        tmp_genexpr_2__$0 = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
        Py_DECREF( tmp_genexpr_2__$0 );
        tmp_genexpr_2__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( attr$filters$$$function_1__split_what );
        return NULL;
        outline_result_2:;
        tmp_tuple_element_1 = PyFrozenSet_New( tmp_frozenset_arg_2 );
        Py_DECREF( tmp_frozenset_arg_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 17;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8aa6ba80ecba6a46bc690137caf591b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8aa6ba80ecba6a46bc690137caf591b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8aa6ba80ecba6a46bc690137caf591b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e8aa6ba80ecba6a46bc690137caf591b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e8aa6ba80ecba6a46bc690137caf591b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e8aa6ba80ecba6a46bc690137caf591b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e8aa6ba80ecba6a46bc690137caf591b,
        type_description_1,
        par_what
    );


    // Release cached frame.
    if ( frame_e8aa6ba80ecba6a46bc690137caf591b == cache_frame_e8aa6ba80ecba6a46bc690137caf591b )
    {
        Py_DECREF( frame_e8aa6ba80ecba6a46bc690137caf591b );
    }
    cache_frame_e8aa6ba80ecba6a46bc690137caf591b = NULL;

    assertFrameObject( frame_e8aa6ba80ecba6a46bc690137caf591b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( attr$filters$$$function_1__split_what );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_what );
    Py_DECREF( par_what );
    par_what = NULL;

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

    CHECK_OBJECT( (PyObject *)par_what );
    Py_DECREF( par_what );
    par_what = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( attr$filters$$$function_1__split_what );
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



struct attr$filters$$$function_1__split_what$$$genexpr_1_genexpr_locals {
    PyObject *var_cls;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *attr$filters$$$function_1__split_what$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct attr$filters$$$function_1__split_what$$$genexpr_1_genexpr_locals *generator_heap = (struct attr$filters$$$function_1__split_what$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_cls = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_f741afc1498dbfb54cd2463c4c7c3365, module_attr$filters, sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 16;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_cls;
            generator_heap->var_cls = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_cls );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain_isclass );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isclass );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isclass" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 16;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( generator_heap->var_cls );
        tmp_args_element_name_1 = generator_heap->var_cls;
        generator->m_frame->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 16;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_call_result_1 );

            generator_heap->exception_lineno = 16;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_expression_name_1;
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
            CHECK_OBJECT( generator_heap->var_cls );
            tmp_expression_name_1 = generator_heap->var_cls;
            Py_INCREF( tmp_expression_name_1 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_call_result_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_truth_name_1, sizeof(int), NULL );
            generator->m_yield_return_index = 1;
            return tmp_expression_name_1;
            yield_return_1:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_called_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_call_result_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_truth_name_1, sizeof(int), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 16;
                generator_heap->type_description_1 = "No";
                goto try_except_handler_2;
            }
            tmp_yield_result_1 = yield_return_value;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 16;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_cls
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_cls );
    generator_heap->var_cls = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_cls );
    generator_heap->var_cls = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *attr$filters$$$function_1__split_what$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        attr$filters$$$function_1__split_what$$$genexpr_1_genexpr_context,
        module_attr$filters,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_2fe3f1393d12a409e7c58ac36723edb2,
#endif
        codeobj_f741afc1498dbfb54cd2463c4c7c3365,
        1,
        sizeof(struct attr$filters$$$function_1__split_what$$$genexpr_1_genexpr_locals)
    );
}



struct attr$filters$$$function_1__split_what$$$genexpr_2_genexpr_locals {
    PyObject *var_cls;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *attr$filters$$$function_1__split_what$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct attr$filters$$$function_1__split_what$$$genexpr_2_genexpr_locals *generator_heap = (struct attr$filters$$$function_1__split_what$$$genexpr_2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_cls = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_e89f040ef508729a472feaf73d4ad76a, module_attr$filters, sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 17;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_cls;
            generator_heap->var_cls = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_cls );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( generator_heap->var_cls );
        tmp_isinstance_inst_1 = generator_heap->var_cls;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain_Attribute );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Attribute );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Attribute" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 17;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        generator_heap->tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 17;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_expression_name_1;
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
            CHECK_OBJECT( generator_heap->var_cls );
            tmp_expression_name_1 = generator_heap->var_cls;
            Py_INCREF( tmp_expression_name_1 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), NULL );
            generator->m_yield_return_index = 1;
            return tmp_expression_name_1;
            yield_return_1:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 17;
                generator_heap->type_description_1 = "No";
                goto try_except_handler_2;
            }
            tmp_yield_result_1 = yield_return_value;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 17;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_cls
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_cls );
    generator_heap->var_cls = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_cls );
    generator_heap->var_cls = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *attr$filters$$$function_1__split_what$$$genexpr_2_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        attr$filters$$$function_1__split_what$$$genexpr_2_genexpr_context,
        module_attr$filters,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_2fe3f1393d12a409e7c58ac36723edb2,
#endif
        codeobj_e89f040ef508729a472feaf73d4ad76a,
        1,
        sizeof(struct attr$filters$$$function_1__split_what$$$genexpr_2_genexpr_locals)
    );
}


static PyObject *impl_attr$filters$$$function_2_include( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_what = python_pars[ 0 ];
    struct Nuitka_CellObject *var_cls = PyCell_EMPTY();
    struct Nuitka_CellObject *var_attrs = PyCell_EMPTY();
    PyObject *var_include_ = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8e00f1fa84f8f6034fb726a2fea7b944;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_8e00f1fa84f8f6034fb726a2fea7b944 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8e00f1fa84f8f6034fb726a2fea7b944, codeobj_8e00f1fa84f8f6034fb726a2fea7b944, module_attr$filters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8e00f1fa84f8f6034fb726a2fea7b944 = cache_frame_8e00f1fa84f8f6034fb726a2fea7b944;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8e00f1fa84f8f6034fb726a2fea7b944 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8e00f1fa84f8f6034fb726a2fea7b944 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain__split_what );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__split_what );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_split_what" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 30;
            type_description_1 = "occo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_what );
        tmp_args_element_name_1 = par_what;
        frame_8e00f1fa84f8f6034fb726a2fea7b944->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "occo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "occo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "occo";
            exception_lineno = 30;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "occo";
            exception_lineno = 30;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "occo";
                    exception_lineno = 30;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "occo";
            exception_lineno = 30;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e00f1fa84f8f6034fb726a2fea7b944 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e00f1fa84f8f6034fb726a2fea7b944 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8e00f1fa84f8f6034fb726a2fea7b944, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8e00f1fa84f8f6034fb726a2fea7b944->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8e00f1fa84f8f6034fb726a2fea7b944, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8e00f1fa84f8f6034fb726a2fea7b944,
        type_description_1,
        par_what,
        var_cls,
        var_attrs,
        var_include_
    );


    // Release cached frame.
    if ( frame_8e00f1fa84f8f6034fb726a2fea7b944 == cache_frame_8e00f1fa84f8f6034fb726a2fea7b944 )
    {
        Py_DECREF( frame_8e00f1fa84f8f6034fb726a2fea7b944 );
    }
    cache_frame_8e00f1fa84f8f6034fb726a2fea7b944 = NULL;

    assertFrameObject( frame_8e00f1fa84f8f6034fb726a2fea7b944 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( PyCell_GET( var_cls ) == NULL );
        Py_INCREF( tmp_assign_source_4 );
        PyCell_SET( var_cls, tmp_assign_source_4 );

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( PyCell_GET( var_attrs ) == NULL );
        Py_INCREF( tmp_assign_source_5 );
        PyCell_SET( var_attrs, tmp_assign_source_5 );

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_attr$filters$$$function_2_include$$$function_1_include_(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[0] = var_attrs;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[1] = var_cls;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[1] );


        assert( var_include_ == NULL );
        var_include_ = tmp_assign_source_6;
    }
    CHECK_OBJECT( var_include_ );
    tmp_return_value = var_include_;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( attr$filters$$$function_2_include );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_what );
    Py_DECREF( par_what );
    par_what = NULL;

    CHECK_OBJECT( (PyObject *)var_cls );
    Py_DECREF( var_cls );
    var_cls = NULL;

    CHECK_OBJECT( (PyObject *)var_attrs );
    Py_DECREF( var_attrs );
    var_attrs = NULL;

    CHECK_OBJECT( (PyObject *)var_include_ );
    Py_DECREF( var_include_ );
    var_include_ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_what );
    Py_DECREF( par_what );
    par_what = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( attr$filters$$$function_2_include );
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


static PyObject *impl_attr$filters$$$function_2_include$$$function_1_include_( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_attribute = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_f5d27d3196a39587fba48aa6d7000932;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f5d27d3196a39587fba48aa6d7000932 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f5d27d3196a39587fba48aa6d7000932, codeobj_f5d27d3196a39587fba48aa6d7000932, module_attr$filters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f5d27d3196a39587fba48aa6d7000932 = cache_frame_f5d27d3196a39587fba48aa6d7000932;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f5d27d3196a39587fba48aa6d7000932 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f5d27d3196a39587fba48aa6d7000932 ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_value );
        tmp_source_name_1 = par_value;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cls" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = PyCell_GET( self->m_closure[1] );
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res == 1 ) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_attribute );
        tmp_compexpr_left_2 = par_attribute;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "attrs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = PyCell_GET( self->m_closure[0] );
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res == 1 ) ? Py_True : Py_False;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5d27d3196a39587fba48aa6d7000932 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5d27d3196a39587fba48aa6d7000932 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5d27d3196a39587fba48aa6d7000932 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f5d27d3196a39587fba48aa6d7000932, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f5d27d3196a39587fba48aa6d7000932->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f5d27d3196a39587fba48aa6d7000932, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f5d27d3196a39587fba48aa6d7000932,
        type_description_1,
        par_attribute,
        par_value,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_f5d27d3196a39587fba48aa6d7000932 == cache_frame_f5d27d3196a39587fba48aa6d7000932 )
    {
        Py_DECREF( frame_f5d27d3196a39587fba48aa6d7000932 );
    }
    cache_frame_f5d27d3196a39587fba48aa6d7000932 = NULL;

    assertFrameObject( frame_f5d27d3196a39587fba48aa6d7000932 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( attr$filters$$$function_2_include$$$function_1_include_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_attribute );
    Py_DECREF( par_attribute );
    par_attribute = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_attribute );
    Py_DECREF( par_attribute );
    par_attribute = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( attr$filters$$$function_2_include$$$function_1_include_ );
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


static PyObject *impl_attr$filters$$$function_3_exclude( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_what = python_pars[ 0 ];
    struct Nuitka_CellObject *var_cls = PyCell_EMPTY();
    struct Nuitka_CellObject *var_attrs = PyCell_EMPTY();
    PyObject *var_exclude_ = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d0de58019cb0ad39368d8b6adf6f357f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_d0de58019cb0ad39368d8b6adf6f357f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d0de58019cb0ad39368d8b6adf6f357f, codeobj_d0de58019cb0ad39368d8b6adf6f357f, module_attr$filters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d0de58019cb0ad39368d8b6adf6f357f = cache_frame_d0de58019cb0ad39368d8b6adf6f357f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d0de58019cb0ad39368d8b6adf6f357f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d0de58019cb0ad39368d8b6adf6f357f ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain__split_what );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__split_what );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_split_what" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 47;
            type_description_1 = "occo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_what );
        tmp_args_element_name_1 = par_what;
        frame_d0de58019cb0ad39368d8b6adf6f357f->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "occo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "occo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "occo";
            exception_lineno = 47;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "occo";
            exception_lineno = 47;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "occo";
                    exception_lineno = 47;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "occo";
            exception_lineno = 47;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0de58019cb0ad39368d8b6adf6f357f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0de58019cb0ad39368d8b6adf6f357f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0de58019cb0ad39368d8b6adf6f357f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0de58019cb0ad39368d8b6adf6f357f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0de58019cb0ad39368d8b6adf6f357f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d0de58019cb0ad39368d8b6adf6f357f,
        type_description_1,
        par_what,
        var_cls,
        var_attrs,
        var_exclude_
    );


    // Release cached frame.
    if ( frame_d0de58019cb0ad39368d8b6adf6f357f == cache_frame_d0de58019cb0ad39368d8b6adf6f357f )
    {
        Py_DECREF( frame_d0de58019cb0ad39368d8b6adf6f357f );
    }
    cache_frame_d0de58019cb0ad39368d8b6adf6f357f = NULL;

    assertFrameObject( frame_d0de58019cb0ad39368d8b6adf6f357f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( PyCell_GET( var_cls ) == NULL );
        Py_INCREF( tmp_assign_source_4 );
        PyCell_SET( var_cls, tmp_assign_source_4 );

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( PyCell_GET( var_attrs ) == NULL );
        Py_INCREF( tmp_assign_source_5 );
        PyCell_SET( var_attrs, tmp_assign_source_5 );

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_attr$filters$$$function_3_exclude$$$function_1_exclude_(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[0] = var_attrs;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[1] = var_cls;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[1] );


        assert( var_exclude_ == NULL );
        var_exclude_ = tmp_assign_source_6;
    }
    CHECK_OBJECT( var_exclude_ );
    tmp_return_value = var_exclude_;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( attr$filters$$$function_3_exclude );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_what );
    Py_DECREF( par_what );
    par_what = NULL;

    CHECK_OBJECT( (PyObject *)var_cls );
    Py_DECREF( var_cls );
    var_cls = NULL;

    CHECK_OBJECT( (PyObject *)var_attrs );
    Py_DECREF( var_attrs );
    var_attrs = NULL;

    CHECK_OBJECT( (PyObject *)var_exclude_ );
    Py_DECREF( var_exclude_ );
    var_exclude_ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_what );
    Py_DECREF( par_what );
    par_what = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( attr$filters$$$function_3_exclude );
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


static PyObject *impl_attr$filters$$$function_3_exclude$$$function_1_exclude_( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_attribute = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_207dbc7737cac59dff809a16b3a7a9d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_207dbc7737cac59dff809a16b3a7a9d2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_207dbc7737cac59dff809a16b3a7a9d2, codeobj_207dbc7737cac59dff809a16b3a7a9d2, module_attr$filters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_207dbc7737cac59dff809a16b3a7a9d2 = cache_frame_207dbc7737cac59dff809a16b3a7a9d2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_207dbc7737cac59dff809a16b3a7a9d2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_207dbc7737cac59dff809a16b3a7a9d2 ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_value );
        tmp_source_name_1 = par_value;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cls" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = PyCell_GET( self->m_closure[1] );
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res == 0 ) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( par_attribute );
        tmp_compexpr_left_2 = par_attribute;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "attrs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = PyCell_GET( self->m_closure[0] );
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? Py_True : Py_False;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_207dbc7737cac59dff809a16b3a7a9d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_207dbc7737cac59dff809a16b3a7a9d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_207dbc7737cac59dff809a16b3a7a9d2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_207dbc7737cac59dff809a16b3a7a9d2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_207dbc7737cac59dff809a16b3a7a9d2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_207dbc7737cac59dff809a16b3a7a9d2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_207dbc7737cac59dff809a16b3a7a9d2,
        type_description_1,
        par_attribute,
        par_value,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_207dbc7737cac59dff809a16b3a7a9d2 == cache_frame_207dbc7737cac59dff809a16b3a7a9d2 )
    {
        Py_DECREF( frame_207dbc7737cac59dff809a16b3a7a9d2 );
    }
    cache_frame_207dbc7737cac59dff809a16b3a7a9d2 = NULL;

    assertFrameObject( frame_207dbc7737cac59dff809a16b3a7a9d2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( attr$filters$$$function_3_exclude$$$function_1_exclude_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_attribute );
    Py_DECREF( par_attribute );
    par_attribute = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_attribute );
    Py_DECREF( par_attribute );
    par_attribute = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( attr$filters$$$function_3_exclude$$$function_1_exclude_ );
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



static PyObject *MAKE_FUNCTION_attr$filters$$$function_1__split_what(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$filters$$$function_1__split_what,
        const_str_plain__split_what,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e8aa6ba80ecba6a46bc690137caf591b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_attr$filters,
        const_str_digest_d7657c4e528a3e14bba79079b04b880b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$filters$$$function_2_include(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$filters$$$function_2_include,
        const_str_plain_include,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8e00f1fa84f8f6034fb726a2fea7b944,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_attr$filters,
        const_str_digest_6752f263bf790e2e2e020c0b8c590413,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$filters$$$function_2_include$$$function_1_include_(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$filters$$$function_2_include$$$function_1_include_,
        const_str_plain_include_,
#if PYTHON_VERSION >= 300
        const_str_digest_3d7538a4a753d2da9935f83b72e2da09,
#endif
        codeobj_f5d27d3196a39587fba48aa6d7000932,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_attr$filters,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$filters$$$function_3_exclude(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$filters$$$function_3_exclude,
        const_str_plain_exclude,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d0de58019cb0ad39368d8b6adf6f357f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_attr$filters,
        const_str_digest_1a6f4ba2c544e9366a47c0c424d53bc8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$filters$$$function_3_exclude$$$function_1_exclude_(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$filters$$$function_3_exclude$$$function_1_exclude_,
        const_str_plain_exclude_,
#if PYTHON_VERSION >= 300
        const_str_digest_6917ec0aad867d8d02d07c10e116c85a,
#endif
        codeobj_207dbc7737cac59dff809a16b3a7a9d2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_attr$filters,
        NULL,
        2
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_attr$filters =
{
    PyModuleDef_HEAD_INIT,
    "attr.filters",
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
MOD_ENTRY_DECL(attr$filters)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(attr$filters)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_attr$filters );
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
    puts("attr.filters: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("attr.filters: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("attr.filters: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initattr$filters" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_attr$filters = Py_InitModule4(
        "attr.filters",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_attr$filters = PyModule_Create( &mdef_attr$filters );
#endif

    moduledict_attr$filters = MODULE_DICT( module_attr$filters );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_attr$filters,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_attr$filters,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_attr$filters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_attr$filters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_attr$filters );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ae7513d6d78418c461d3ccf45aece3f7, module_attr$filters );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_6da02abda33081a1233a8e64e68a385e;
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
        tmp_assign_source_1 = const_str_digest_84569dfe4bf2d5118766bf8107967f02;
        UPDATE_STRING_DICT0( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_4e05e91d673a58ff25792b0581cbc691;
        UPDATE_STRING_DICT0( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_6da02abda33081a1233a8e64e68a385e = MAKE_MODULE_FRAME( codeobj_6da02abda33081a1233a8e64e68a385e, module_attr$filters );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_6da02abda33081a1233a8e64e68a385e );
    assert( Py_REFCNT( frame_6da02abda33081a1233a8e64e68a385e ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_4e05e91d673a58ff25792b0581cbc691;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_6da02abda33081a1233a8e64e68a385e->m_frame.f_lineno = 5;
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


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
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


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
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


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain__compat;
        tmp_globals_name_1 = (PyObject *)moduledict_attr$filters;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_isclass_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_6da02abda33081a1233a8e64e68a385e->m_frame.f_lineno = 7;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_attr$filters,
                const_str_plain_isclass,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_isclass );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain_isclass, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain__make;
        tmp_globals_name_2 = (PyObject *)moduledict_attr$filters;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_Attribute_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_6da02abda33081a1233a8e64e68a385e->m_frame.f_lineno = 8;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_attr$filters,
                const_str_plain_Attribute,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Attribute );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain_Attribute, tmp_assign_source_9 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6da02abda33081a1233a8e64e68a385e );
#endif
    popFrameStack();

    assertFrameObject( frame_6da02abda33081a1233a8e64e68a385e );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6da02abda33081a1233a8e64e68a385e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6da02abda33081a1233a8e64e68a385e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6da02abda33081a1233a8e64e68a385e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6da02abda33081a1233a8e64e68a385e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_attr$filters$$$function_1__split_what(  );



        UPDATE_STRING_DICT1( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain__split_what, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_attr$filters$$$function_2_include(  );



        UPDATE_STRING_DICT1( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain_include, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_attr$filters$$$function_3_exclude(  );



        UPDATE_STRING_DICT1( moduledict_attr$filters, (Nuitka_StringObject *)const_str_plain_exclude, tmp_assign_source_12 );
    }

    return MOD_RETURN_VALUE( module_attr$filters );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
