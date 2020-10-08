/* Generated code for Python module 'pyasn1.codec.cer.decoder'
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

/* The "_module_pyasn1$codec$cer$decoder" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$codec$cer$decoder;
PyDictObject *moduledict_pyasn1$codec$cer$decoder;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_Decoder;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_digest_7c8c58049edd248f8b1cb370445e702c;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_tagSet;
extern PyObject *const_str_plain_univ;
static PyObject *const_str_digest_fe1f0d80ff95465e1481dc7deeb463f2;
extern PyObject *const_str_plain_Real;
static PyObject *const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_OctetStringDecoder;
extern PyObject *const_tuple_str_plain_decoder_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_pyasn1;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_head;
extern PyObject *const_str_plain_BitStringDecoder;
extern PyObject *const_str_plain_BitString;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_AbstractSimpleDecoder;
extern PyObject *const_str_plain_tail;
static PyObject *const_tuple_str_digest_fe1f0d80ff95465e1481dc7deeb463f2_tuple;
extern PyObject *const_list_str_plain_decode_list;
extern PyObject *const_str_plain_error;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_False;
static PyObject *const_tuple_str_plain_oct2int_tuple;
extern PyObject *const_str_plain_oct2int;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_decodeFun;
extern PyObject *const_str_plain___all__;
extern PyObject *const_tuple_none_none_none_none_none_tuple;
extern PyObject *const_str_plain_RealDecoder;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_1503b6119cd6ba88e7612e541d27eba3;
extern PyObject *const_str_plain_substrateFun;
static PyObject *const_str_digest_d655a8d8980fb94e87d86591c07ab047;
static PyObject *const_str_digest_b1b8ebbb11211fb5cf17db6ec2cff07a;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_Boolean;
static PyObject *const_str_digest_a74a5ed7829bb0e6c38eae19d3456522;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_protoComponent;
extern PyObject *const_str_plain_BooleanDecoder;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_asn1Spec;
extern PyObject *const_str_plain_valueDecoder;
extern PyObject *const_str_plain_PyAsn1Error;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_values;
extern PyObject *const_tuple_str_plain_univ_tuple;
extern PyObject *const_str_plain_decoder;
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_6e21cf3f1db056d9c43afdb25a5b89a8;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_digest_60685fcea8bf95c3a304455958b7e27d;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_substrate;
extern PyObject *const_int_pos_255;
extern PyObject *const_str_plain_typeId;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_byte;
static PyObject *const_str_digest_b5b3688a7f48242ab9c7b5da59131694;
extern PyObject *const_str_plain_tagMap;
extern PyObject *const_str_plain__createComponent;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_typeDecoder;
extern PyObject *const_str_plain_typeMap;
extern PyObject *const_str_plain_OctetString;
extern PyObject *const_tuple_str_plain_error_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_fe1f0d80ff95465e1481dc7deeb463f2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2550042 ], 32, 0 );
    const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple, 1, const_str_plain_substrate ); Py_INCREF( const_str_plain_substrate );
    PyTuple_SET_ITEM( const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple, 2, const_str_plain_asn1Spec ); Py_INCREF( const_str_plain_asn1Spec );
    PyTuple_SET_ITEM( const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple, 3, const_str_plain_tagSet ); Py_INCREF( const_str_plain_tagSet );
    PyTuple_SET_ITEM( const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple, 4, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    PyTuple_SET_ITEM( const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple, 5, const_str_plain_state ); Py_INCREF( const_str_plain_state );
    PyTuple_SET_ITEM( const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple, 6, const_str_plain_decodeFun ); Py_INCREF( const_str_plain_decodeFun );
    PyTuple_SET_ITEM( const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple, 7, const_str_plain_substrateFun ); Py_INCREF( const_str_plain_substrateFun );
    PyTuple_SET_ITEM( const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple, 8, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple, 9, const_str_plain_head ); Py_INCREF( const_str_plain_head );
    PyTuple_SET_ITEM( const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple, 10, const_str_plain_tail ); Py_INCREF( const_str_plain_tail );
    PyTuple_SET_ITEM( const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple, 11, const_str_plain_byte ); Py_INCREF( const_str_plain_byte );
    PyTuple_SET_ITEM( const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple, 12, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_tuple_str_digest_fe1f0d80ff95465e1481dc7deeb463f2_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_fe1f0d80ff95465e1481dc7deeb463f2_tuple, 0, const_str_digest_fe1f0d80ff95465e1481dc7deeb463f2 ); Py_INCREF( const_str_digest_fe1f0d80ff95465e1481dc7deeb463f2 );
    const_tuple_str_plain_oct2int_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_oct2int_tuple, 0, const_str_plain_oct2int ); Py_INCREF( const_str_plain_oct2int );
    const_str_digest_d655a8d8980fb94e87d86591c07ab047 = UNSTREAM_STRING_ASCII( &constant_bin[ 2550074 ], 33, 0 );
    const_str_digest_b1b8ebbb11211fb5cf17db6ec2cff07a = UNSTREAM_STRING_ASCII( &constant_bin[ 2550082 ], 24, 0 );
    const_str_digest_a74a5ed7829bb0e6c38eae19d3456522 = UNSTREAM_STRING_ASCII( &constant_bin[ 2550107 ], 55, 0 );
    const_str_digest_6e21cf3f1db056d9c43afdb25a5b89a8 = UNSTREAM_STRING_ASCII( &constant_bin[ 2550162 ], 30, 0 );
    const_str_digest_b5b3688a7f48242ab9c7b5da59131694 = UNSTREAM_STRING_ASCII( &constant_bin[ 2550192 ], 27, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyasn1$codec$cer$decoder( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_58e12b571a6866afab542f9c402f818e;
static PyCodeObject *codeobj_db247da7cddff02b03ae77071da5379c;
static PyCodeObject *codeobj_71e14ccc37137055348de3075edf609a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_a74a5ed7829bb0e6c38eae19d3456522;
    codeobj_58e12b571a6866afab542f9c402f818e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d655a8d8980fb94e87d86591c07ab047, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_db247da7cddff02b03ae77071da5379c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_BooleanDecoder, 15, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_71e14ccc37137055348de3075edf609a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_valueDecoder, 18, const_tuple_9f814e5407db5a971494ee4ebba36cad_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$decoder$$$function_1_valueDecoder( PyObject *defaults );


// The module function definitions.
static PyObject *impl_pyasn1$codec$cer$decoder$$$function_1_valueDecoder( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_substrate = python_pars[ 1 ];
    PyObject *par_asn1Spec = python_pars[ 2 ];
    PyObject *par_tagSet = python_pars[ 3 ];
    PyObject *par_length = python_pars[ 4 ];
    PyObject *par_state = python_pars[ 5 ];
    PyObject *par_decodeFun = python_pars[ 6 ];
    PyObject *par_substrateFun = python_pars[ 7 ];
    PyObject *par_options = python_pars[ 8 ];
    PyObject *var_head = NULL;
    PyObject *var_tail = NULL;
    PyObject *var_byte = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_71e14ccc37137055348de3075edf609a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_71e14ccc37137055348de3075edf609a = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_71e14ccc37137055348de3075edf609a, codeobj_71e14ccc37137055348de3075edf609a, module_pyasn1$codec$cer$decoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_71e14ccc37137055348de3075edf609a = cache_frame_71e14ccc37137055348de3075edf609a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_71e14ccc37137055348de3075edf609a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_71e14ccc37137055348de3075edf609a ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( par_substrate );
        tmp_subscribed_name_1 = par_substrate;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( par_length );
        tmp_stop_name_1 = par_length;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_substrate );
        tmp_subscribed_name_2 = par_substrate;
        CHECK_OBJECT( par_length );
        tmp_start_name_2 = par_length;
        tmp_stop_name_2 = Py_None;
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 22;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooooooooooooo";
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 22;
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 22;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_head == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_head = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_tail == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_tail = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_head );
        tmp_operand_name_1 = var_head;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_length );
        tmp_compexpr_left_1 = par_length;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_error );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "error" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 24;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            frame_71e14ccc37137055348de3075edf609a->m_frame.f_lineno = 24;
            tmp_raise_type_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_PyAsn1Error, &PyTuple_GET_ITEM( const_tuple_str_digest_fe1f0d80ff95465e1481dc7deeb463f2_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 24;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_oct2int );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_oct2int );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "oct2int" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_head );
        tmp_subscribed_name_3 = var_head;
        tmp_subscript_name_3 = const_int_0;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_71e14ccc37137055348de3075edf609a->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_byte == NULL );
        var_byte = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_byte );
        tmp_compexpr_left_2 = var_byte;
        tmp_compexpr_right_2 = const_int_pos_255;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_int_pos_1;
            assert( var_value == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_value = tmp_assign_source_7;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( var_byte );
            tmp_compexpr_left_3 = var_byte;
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 31;
                type_description_1 = "ooooooooooooo";
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
            {
                PyObject *tmp_assign_source_8;
                tmp_assign_source_8 = const_int_0;
                assert( var_value == NULL );
                Py_INCREF( tmp_assign_source_8 );
                var_value = tmp_assign_source_8;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_1;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_error );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "error" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 34;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_1 = tmp_mvar_value_3;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PyAsn1Error );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 34;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_1 = const_str_digest_6e21cf3f1db056d9c43afdb25a5b89a8;
                CHECK_OBJECT( var_byte );
                tmp_right_name_1 = var_byte;
                tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 34;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_71e14ccc37137055348de3075edf609a->m_frame.f_lineno = 34;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_raise_type_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 34;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 34;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__createComponent );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_asn1Spec );
        tmp_tuple_element_3 = par_asn1Spec;
        tmp_dircall_arg2_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_tagSet );
        tmp_tuple_element_3 = par_tagSet;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_3 );
        if ( var_value == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = var_value;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_3 );
        CHECK_OBJECT( par_options );
        tmp_dircall_arg3_1 = par_options;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_tuple_element_2 = impl___internal__$$$function_7_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_tail );
        tmp_tuple_element_2 = var_tail;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_71e14ccc37137055348de3075edf609a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_71e14ccc37137055348de3075edf609a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_71e14ccc37137055348de3075edf609a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_71e14ccc37137055348de3075edf609a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_71e14ccc37137055348de3075edf609a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_71e14ccc37137055348de3075edf609a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_71e14ccc37137055348de3075edf609a,
        type_description_1,
        par_self,
        par_substrate,
        par_asn1Spec,
        par_tagSet,
        par_length,
        par_state,
        par_decodeFun,
        par_substrateFun,
        par_options,
        var_head,
        var_tail,
        var_byte,
        var_value
    );


    // Release cached frame.
    if ( frame_71e14ccc37137055348de3075edf609a == cache_frame_71e14ccc37137055348de3075edf609a )
    {
        Py_DECREF( frame_71e14ccc37137055348de3075edf609a );
    }
    cache_frame_71e14ccc37137055348de3075edf609a = NULL;

    assertFrameObject( frame_71e14ccc37137055348de3075edf609a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$decoder$$$function_1_valueDecoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_substrate );
    Py_DECREF( par_substrate );
    par_substrate = NULL;

    CHECK_OBJECT( (PyObject *)par_asn1Spec );
    Py_DECREF( par_asn1Spec );
    par_asn1Spec = NULL;

    CHECK_OBJECT( (PyObject *)par_tagSet );
    Py_DECREF( par_tagSet );
    par_tagSet = NULL;

    CHECK_OBJECT( (PyObject *)par_length );
    Py_DECREF( par_length );
    par_length = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    CHECK_OBJECT( (PyObject *)par_decodeFun );
    Py_DECREF( par_decodeFun );
    par_decodeFun = NULL;

    CHECK_OBJECT( (PyObject *)par_substrateFun );
    Py_DECREF( par_substrateFun );
    par_substrateFun = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)var_head );
    Py_DECREF( var_head );
    var_head = NULL;

    CHECK_OBJECT( (PyObject *)var_tail );
    Py_DECREF( var_tail );
    var_tail = NULL;

    CHECK_OBJECT( (PyObject *)var_byte );
    Py_DECREF( var_byte );
    var_byte = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_substrate );
    Py_DECREF( par_substrate );
    par_substrate = NULL;

    CHECK_OBJECT( (PyObject *)par_asn1Spec );
    Py_DECREF( par_asn1Spec );
    par_asn1Spec = NULL;

    CHECK_OBJECT( (PyObject *)par_tagSet );
    Py_DECREF( par_tagSet );
    par_tagSet = NULL;

    CHECK_OBJECT( (PyObject *)par_length );
    Py_DECREF( par_length );
    par_length = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    CHECK_OBJECT( (PyObject *)par_decodeFun );
    Py_DECREF( par_decodeFun );
    par_decodeFun = NULL;

    CHECK_OBJECT( (PyObject *)par_substrateFun );
    Py_DECREF( par_substrateFun );
    par_substrateFun = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_head );
    var_head = NULL;

    Py_XDECREF( var_tail );
    var_tail = NULL;

    Py_XDECREF( var_byte );
    var_byte = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$decoder$$$function_1_valueDecoder );
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



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$decoder$$$function_1_valueDecoder( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$decoder$$$function_1_valueDecoder,
        const_str_plain_valueDecoder,
#if PYTHON_VERSION >= 300
        const_str_digest_b5b3688a7f48242ab9c7b5da59131694,
#endif
        codeobj_71e14ccc37137055348de3075edf609a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$decoder,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyasn1$codec$cer$decoder =
{
    PyModuleDef_HEAD_INIT,
    "pyasn1.codec.cer.decoder",
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
MOD_ENTRY_DECL(pyasn1$codec$cer$decoder)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(pyasn1$codec$cer$decoder)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyasn1$codec$cer$decoder );
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
    puts("pyasn1.codec.cer.decoder: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.codec.cer.decoder: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.codec.cer.decoder: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpyasn1$codec$cer$decoder" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyasn1$codec$cer$decoder = Py_InitModule4(
        "pyasn1.codec.cer.decoder",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pyasn1$codec$cer$decoder = PyModule_Create( &mdef_pyasn1$codec$cer$decoder );
#endif

    moduledict_pyasn1$codec$cer$decoder = MODULE_DICT( module_pyasn1$codec$cer$decoder );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_pyasn1$codec$cer$decoder,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pyasn1$codec$cer$decoder,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$codec$cer$decoder,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$codec$cer$decoder,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pyasn1$codec$cer$decoder );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_b1b8ebbb11211fb5cf17db6ec2cff07a, module_pyasn1$codec$cer$decoder );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
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
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_58e12b571a6866afab542f9c402f818e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_pyasn1$codec$cer$decoder_15 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_db247da7cddff02b03ae77071da5379c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_db247da7cddff02b03ae77071da5379c_2 = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_pyasn1$codec$cer$decoder_60 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_a74a5ed7829bb0e6c38eae19d3456522;
        UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_58e12b571a6866afab542f9c402f818e = MAKE_MODULE_FRAME( codeobj_58e12b571a6866afab542f9c402f818e, module_pyasn1$codec$cer$decoder );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_58e12b571a6866afab542f9c402f818e );
    assert( Py_REFCNT( frame_58e12b571a6866afab542f9c402f818e ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_a74a5ed7829bb0e6c38eae19d3456522;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_pyasn1;
        tmp_globals_name_1 = (PyObject *)moduledict_pyasn1$codec$cer$decoder;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_error_tuple;
        tmp_level_name_1 = const_int_0;
        frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_error );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_error, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_1503b6119cd6ba88e7612e541d27eba3;
        tmp_globals_name_2 = (PyObject *)moduledict_pyasn1$codec$cer$decoder;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_decoder_tuple;
        tmp_level_name_2 = const_int_0;
        frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 8;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_decoder );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_decoder, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_60685fcea8bf95c3a304455958b7e27d;
        tmp_globals_name_3 = (PyObject *)moduledict_pyasn1$codec$cer$decoder;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_oct2int_tuple;
        tmp_level_name_3 = const_int_0;
        frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 9;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_oct2int );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_oct2int, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_7c8c58049edd248f8b1cb370445e702c;
        tmp_globals_name_4 = (PyObject *)moduledict_pyasn1$codec$cer$decoder;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_univ_tuple;
        tmp_level_name_4 = const_int_0;
        frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 10;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_univ );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_univ, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = LIST_COPY( const_list_str_plain_decode_list );
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_decoder );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decoder );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "decoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;

            goto try_except_handler_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_AbstractSimpleDecoder );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        tmp_assign_source_9 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_9, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases_orig == NULL );
        tmp_class_creation_1__bases_orig = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT( tmp_class_creation_1__bases_orig );
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_10 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
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


            exception_lineno = 15;

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


            exception_lineno = 15;

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


            exception_lineno = 15;

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


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

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
        tmp_assign_source_12 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
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


            exception_lineno = 15;

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


            exception_lineno = 15;

            goto try_except_handler_1;
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
            PyObject *tmp_assign_source_13;
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


                exception_lineno = 15;

                goto try_except_handler_1;
            }
            tmp_tuple_element_2 = const_str_plain_BooleanDecoder;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 15;
            tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_13;
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


                exception_lineno = 15;

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


                    exception_lineno = 15;

                    goto try_except_handler_1;
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

                    exception_lineno = 15;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 15;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 15;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_14;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyasn1$codec$cer$decoder_15 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b1b8ebbb11211fb5cf17db6ec2cff07a;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$decoder_15, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_BooleanDecoder;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$decoder_15, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_db247da7cddff02b03ae77071da5379c_2, codeobj_db247da7cddff02b03ae77071da5379c, module_pyasn1$codec$cer$decoder, sizeof(void *) );
        frame_db247da7cddff02b03ae77071da5379c_2 = cache_frame_db247da7cddff02b03ae77071da5379c_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_db247da7cddff02b03ae77071da5379c_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_db247da7cddff02b03ae77071da5379c_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_4;
            tmp_called_instance_1 = PyObject_GetItem( locals_pyasn1$codec$cer$decoder_15, const_str_plain_univ );

            if ( tmp_called_instance_1 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_univ );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 16;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_instance_1 = tmp_mvar_value_4;
                Py_INCREF( tmp_called_instance_1 );
                }
            }

            frame_db247da7cddff02b03ae77071da5379c_2->m_frame.f_lineno = 16;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_Boolean, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$decoder_15, const_str_plain_protoComponent, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_none_none_none_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_pyasn1$codec$cer$decoder$$$function_1_valueDecoder( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$decoder_15, const_str_plain_valueDecoder, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_db247da7cddff02b03ae77071da5379c_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_db247da7cddff02b03ae77071da5379c_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_db247da7cddff02b03ae77071da5379c_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_db247da7cddff02b03ae77071da5379c_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_db247da7cddff02b03ae77071da5379c_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_db247da7cddff02b03ae77071da5379c_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_db247da7cddff02b03ae77071da5379c_2 == cache_frame_db247da7cddff02b03ae77071da5379c_2 )
        {
            Py_DECREF( frame_db247da7cddff02b03ae77071da5379c_2 );
        }
        cache_frame_db247da7cddff02b03ae77071da5379c_2 = NULL;

        assertFrameObject( frame_db247da7cddff02b03ae77071da5379c_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
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


                exception_lineno = 15;

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
            CHECK_OBJECT( tmp_class_creation_1__bases_orig );
            tmp_dictset_value = tmp_class_creation_1__bases_orig;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$decoder_15, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_BooleanDecoder;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_pyasn1$codec$cer$decoder_15;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 15;
            tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_15 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$decoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_pyasn1$codec$cer$decoder_15 );
        locals_pyasn1$codec$cer$decoder_15 = NULL;
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

        Py_DECREF( locals_pyasn1$codec$cer$decoder_15 );
        locals_pyasn1$codec$cer$decoder_15 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$decoder );
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
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$decoder );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 15;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_BooleanDecoder, tmp_assign_source_15 );
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
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

    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_decoder );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decoder );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "decoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_5;
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_BitStringDecoder );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_BitStringDecoder, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_decoder );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decoder );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "decoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_6;
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_OctetStringDecoder );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_OctetStringDecoder, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_decoder );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decoder );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "decoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_7;
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_RealDecoder );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_RealDecoder, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_decoder );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decoder );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "decoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_8;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_tagMap );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 42;
        tmp_assign_source_20 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_tagMap, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_13;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_15;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_17;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_17;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_tagMap );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tagMap );
        }

        CHECK_OBJECT( tmp_mvar_value_9 );
        tmp_source_name_10 = tmp_mvar_value_9;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_update );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_10;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_Boolean );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_tagSet );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_dict_key_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_BooleanDecoder );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BooleanDecoder );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_dict_key_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BooleanDecoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_11;
        frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 44;
        tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_dict_key_1 );

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_args_element_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        Py_DECREF( tmp_dict_key_1 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_12;
        tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_BitString );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_tagSet );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_dict_key_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_BitStringDecoder );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BitStringDecoder );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_dict_key_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BitStringDecoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_13;
        frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 45;
        tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_dict_key_2 );

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        Py_DECREF( tmp_dict_key_2 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }

        tmp_source_name_16 = tmp_mvar_value_14;
        tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_OctetString );
        if ( tmp_source_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_tagSet );
        Py_DECREF( tmp_source_name_15 );
        if ( tmp_dict_key_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_OctetStringDecoder );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OctetStringDecoder );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_dict_key_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OctetStringDecoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_15;
        frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 46;
        tmp_dict_value_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_dict_key_3 );

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        Py_DECREF( tmp_dict_key_3 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 47;

            goto frame_exception_exit_1;
        }

        tmp_source_name_18 = tmp_mvar_value_16;
        tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_Real );
        if ( tmp_source_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_tagSet );
        Py_DECREF( tmp_source_name_17 );
        if ( tmp_dict_key_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_RealDecoder );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RealDecoder );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_dict_key_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RealDecoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 47;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_17;
        frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 47;
        tmp_dict_value_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_dict_key_4 );

            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        Py_DECREF( tmp_dict_key_4 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_decoder );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decoder );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "decoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }

        tmp_source_name_19 = tmp_mvar_value_18;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_typeMap );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 50;
        tmp_assign_source_21 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_typeMap, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_tagMap );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tagMap );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tagMap" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_19;
        frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 53;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_values );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_22;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_23 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_23 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                exception_lineno = 53;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_24 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_typeDecoder, tmp_assign_source_24 );
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_20;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_typeDecoder );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeDecoder );
        }

        CHECK_OBJECT( tmp_mvar_value_20 );
        tmp_source_name_20 = tmp_mvar_value_20;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_protoComponent );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;

            goto try_except_handler_4;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_7 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_source_name_21;
            PyObject *tmp_source_name_22;
            PyObject *tmp_source_name_23;
            PyObject *tmp_mvar_value_21;
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_typeDecoder );

            if (unlikely( tmp_mvar_value_21 == NULL ))
            {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeDecoder );
            }

            if ( tmp_mvar_value_21 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "typeDecoder" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 55;

                goto try_except_handler_4;
            }

            tmp_source_name_23 = tmp_mvar_value_21;
            tmp_source_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_protoComponent );
            if ( tmp_source_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;

                goto try_except_handler_4;
            }
            tmp_source_name_21 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_22 );
            Py_DECREF( tmp_source_name_22 );
            if ( tmp_source_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;

                goto try_except_handler_4;
            }
            tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_typeId );
            Py_DECREF( tmp_source_name_21 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;

                goto try_except_handler_4;
            }
            UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_typeId, tmp_assign_source_25 );
        }
        {
            nuitka_bool tmp_condition_result_8;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_mvar_value_22;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_mvar_value_23;
            PyObject *tmp_mvar_value_24;
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_typeId );

            if (unlikely( tmp_mvar_value_22 == NULL ))
            {
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeId );
            }

            CHECK_OBJECT( tmp_mvar_value_22 );
            tmp_compexpr_left_3 = tmp_mvar_value_22;
            tmp_compexpr_right_3 = Py_None;
            tmp_and_left_value_1 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_typeId );

            if (unlikely( tmp_mvar_value_23 == NULL ))
            {
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeId );
            }

            if ( tmp_mvar_value_23 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "typeId" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 56;

                goto try_except_handler_4;
            }

            tmp_compexpr_left_4 = tmp_mvar_value_23;
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_typeMap );

            if (unlikely( tmp_mvar_value_24 == NULL ))
            {
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeMap );
            }

            if ( tmp_mvar_value_24 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "typeMap" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 56;

                goto try_except_handler_4;
            }

            tmp_compexpr_right_4 = tmp_mvar_value_24;
            tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;

                goto try_except_handler_4;
            }
            tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_8 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_8 = tmp_and_left_value_1;
            and_end_1:;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_mvar_value_25;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_mvar_value_26;
                PyObject *tmp_ass_subscript_1;
                PyObject *tmp_mvar_value_27;
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_typeDecoder );

                if (unlikely( tmp_mvar_value_25 == NULL ))
                {
                    tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeDecoder );
                }

                if ( tmp_mvar_value_25 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "typeDecoder" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 57;

                    goto try_except_handler_4;
                }

                tmp_ass_subvalue_1 = tmp_mvar_value_25;
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_typeMap );

                if (unlikely( tmp_mvar_value_26 == NULL ))
                {
                    tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeMap );
                }

                if ( tmp_mvar_value_26 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "typeMap" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 57;

                    goto try_except_handler_4;
                }

                tmp_ass_subscribed_1 = tmp_mvar_value_26;
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_typeId );

                if (unlikely( tmp_mvar_value_27 == NULL ))
                {
                    tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeId );
                }

                if ( tmp_mvar_value_27 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "typeId" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 57;

                    goto try_except_handler_4;
                }

                tmp_ass_subscript_1 = tmp_mvar_value_27;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 57;

                    goto try_except_handler_4;
                }
            }
            branch_no_6:;
        }
        branch_no_5:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_source_name_24;
        PyObject *tmp_mvar_value_28;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_decoder );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decoder );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "decoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;

            goto try_except_handler_5;
        }

        tmp_source_name_24 = tmp_mvar_value_28;
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_Decoder );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_5;
        }
        tmp_assign_source_26 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_26, 0, tmp_tuple_element_5 );
        assert( tmp_class_creation_2__bases_orig == NULL );
        tmp_class_creation_2__bases_orig = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT( tmp_class_creation_2__bases_orig );
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_27 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_10;
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


            exception_lineno = 60;

            goto try_except_handler_5;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 60;

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


            exception_lineno = 60;

            goto try_except_handler_5;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 60;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

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
        tmp_assign_source_29 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_11;
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


            exception_lineno = 60;

            goto try_except_handler_5;
        }
        tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_5;
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_source_name_25;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_25 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_25, const_str_plain___prepare__ );
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
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_26;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_26 = tmp_class_creation_2__metaclass;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain___prepare__ );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;

                goto try_except_handler_5;
            }
            tmp_tuple_element_6 = const_str_plain_Decoder;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 60;
            tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;

                goto try_except_handler_5;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_30;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_27;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_27 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_27, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;

                goto try_except_handler_5;
            }
            tmp_condition_result_13 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_9;
            }
            else
            {
                goto branch_no_9;
            }
            branch_yes_9:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_28;
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


                    exception_lineno = 60;

                    goto try_except_handler_5;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_28 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_28 == NULL) );
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_28 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 60;

                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_7 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 60;

                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 60;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_5;
            }
            branch_no_9:;
        }
        goto branch_end_8;
        branch_no_8:;
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_31;
        }
        branch_end_8:;
    }
    {
        PyObject *tmp_assign_source_32;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyasn1$codec$cer$decoder_60 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b1b8ebbb11211fb5cf17db6ec2cff07a;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$decoder_60, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain_Decoder;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$decoder_60, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto try_except_handler_7;
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_compexpr_left_5 = tmp_class_creation_2__bases;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_compexpr_right_5 = tmp_class_creation_2__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;

                goto try_except_handler_7;
            }
            tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_10;
            }
            else
            {
                goto branch_no_10;
            }
            branch_yes_10:;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_dictset_value = tmp_class_creation_2__bases_orig;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$decoder_60, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;

                goto try_except_handler_7;
            }
            branch_no_10:;
        }
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_9 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = const_str_plain_Decoder;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
            tmp_tuple_element_8 = locals_pyasn1$codec$cer$decoder_60;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 60;
            tmp_assign_source_33 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;

                goto try_except_handler_7;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_33;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_32 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_32 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$decoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_pyasn1$codec$cer$decoder_60 );
        locals_pyasn1$codec$cer$decoder_60 = NULL;
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

        Py_DECREF( locals_pyasn1$codec$cer$decoder_60 );
        locals_pyasn1$codec$cer$decoder_60 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$decoder );
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
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$decoder );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 60;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_Decoder, tmp_assign_source_32 );
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

    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_29;
        PyObject *tmp_mvar_value_31;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_Decoder );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Decoder );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Decoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_29;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_tagMap );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tagMap );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tagMap" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_30;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_decoder );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decoder );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "decoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }

        tmp_source_name_29 = tmp_mvar_value_31;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_typeMap );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_58e12b571a6866afab542f9c402f818e->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$decoder, (Nuitka_StringObject *)const_str_plain_decode, tmp_assign_source_34 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_58e12b571a6866afab542f9c402f818e );
#endif
    popFrameStack();

    assertFrameObject( frame_58e12b571a6866afab542f9c402f818e );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_58e12b571a6866afab542f9c402f818e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58e12b571a6866afab542f9c402f818e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58e12b571a6866afab542f9c402f818e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58e12b571a6866afab542f9c402f818e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

    return MOD_RETURN_VALUE( module_pyasn1$codec$cer$decoder );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
