/* Generated code for Python module 'pyasn1.codec.der.encoder'
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

/* The "_module_pyasn1$codec$der$encoder" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$codec$der$encoder;
PyDictObject *moduledict_pyasn1$codec$der$encoder;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_namedType;
extern PyObject *const_str_digest_cd2534297d582ba3fcbd33cacee81907;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_Set;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_digest_7c8c58049edd248f8b1cb370445e702c;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_5b7e964b97e85704c0d49add3be18091;
extern PyObject *const_str_plain_SetEncoder;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain__componentSortKey;
extern PyObject *const_str_digest_339682c9f90ab4eb0347ec2160c619ad;
extern PyObject *const_str_plain_tagSet;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_univ;
static PyObject *const_str_digest_9059008869351d0dbc9c01bde5ac727d;
extern PyObject *const_str_plain_pyasn1;
extern PyObject *const_tuple_str_plain_univ_tuple;
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_1341560babe2818ae5cd3d2e2f979fea;
extern PyObject *const_str_plain_fixedDefLengthMode;
extern PyObject *const_str_plain_fixedChunkSize;
extern PyObject *const_str_plain_componentAndType;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_Encoder;
static PyObject *const_tuple_str_plain_namedType_str_plain_component_tuple;
extern PyObject *const_str_digest_a40d973ff88a213bee0c6fc98dc34631;
extern PyObject *const_str_plain_encode;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_Choice;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_encoder;
static PyObject *const_str_digest_922453edc4f37e5cfebf496648dceafc;
extern PyObject *const_str_plain_typeId;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_staticmethod;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_tagMap;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_component;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_getComponent;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_tuple_str_plain_encoder_tuple;
extern PyObject *const_str_plain_asn1Spec;
extern PyObject *const_str_plain_componentType;
extern PyObject *const_list_str_plain_encode_list;
extern PyObject *const_str_plain_typeMap;
static PyObject *const_str_digest_fc8b616339128a1af5450c2edc8bd489;
extern PyObject *const_str_digest_24981b14826cf9fa3e8af3791272c33b;
static PyObject *const_tuple_fe87588b30cf737e4ce2a7761cce3274_tuple;
extern PyObject *const_tuple_str_plain_error_tuple;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_names;
extern PyObject *const_str_plain_compType;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_namedTypes;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_PyAsn1Error;
extern PyObject *const_str_plain_error;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_9059008869351d0dbc9c01bde5ac727d = UNSTREAM_STRING_ASCII( &constant_bin[ 2551050 ], 55, 0 );
    const_str_digest_1341560babe2818ae5cd3d2e2f979fea = UNSTREAM_STRING_ASCII( &constant_bin[ 2551105 ], 101, 0 );
    const_tuple_str_plain_namedType_str_plain_component_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_namedType_str_plain_component_tuple, 0, const_str_plain_namedType ); Py_INCREF( const_str_plain_namedType );
    PyTuple_SET_ITEM( const_tuple_str_plain_namedType_str_plain_component_tuple, 1, const_str_plain_component ); Py_INCREF( const_str_plain_component );
    const_str_digest_922453edc4f37e5cfebf496648dceafc = UNSTREAM_STRING_ASCII( &constant_bin[ 2551206 ], 24, 0 );
    const_str_digest_fc8b616339128a1af5450c2edc8bd489 = UNSTREAM_STRING_ASCII( &constant_bin[ 2551230 ], 33, 0 );
    const_tuple_fe87588b30cf737e4ce2a7761cce3274_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_fe87588b30cf737e4ce2a7761cce3274_tuple, 0, const_str_plain_componentAndType ); Py_INCREF( const_str_plain_componentAndType );
    PyTuple_SET_ITEM( const_tuple_fe87588b30cf737e4ce2a7761cce3274_tuple, 1, const_str_plain_component ); Py_INCREF( const_str_plain_component );
    PyTuple_SET_ITEM( const_tuple_fe87588b30cf737e4ce2a7761cce3274_tuple, 2, const_str_plain_asn1Spec ); Py_INCREF( const_str_plain_asn1Spec );
    PyTuple_SET_ITEM( const_tuple_fe87588b30cf737e4ce2a7761cce3274_tuple, 3, const_str_plain_compType ); Py_INCREF( const_str_plain_compType );
    PyTuple_SET_ITEM( const_tuple_fe87588b30cf737e4ce2a7761cce3274_tuple, 4, const_str_plain_names ); Py_INCREF( const_str_plain_names );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyasn1$codec$der$encoder( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c9358d8a33e65c4a7e4886653bf1093a;
static PyCodeObject *codeobj_f5ee41dd0ef827ac8ad7b34d8634acf1;
static PyCodeObject *codeobj_51d4c49fe8f34691abcd06f1fa4c13ea;
static PyCodeObject *codeobj_a21a8e4a5f5c3c3942c9617caf59b430;
static PyCodeObject *codeobj_460e9918a42754ce1e247d01dc9cf7a8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_9059008869351d0dbc9c01bde5ac727d;
    codeobj_c9358d8a33e65c4a7e4886653bf1093a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 33, const_tuple_str_plain_namedType_str_plain_component_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f5ee41dd0ef827ac8ad7b34d8634acf1 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_fc8b616339128a1af5450c2edc8bd489, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_51d4c49fe8f34691abcd06f1fa4c13ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Encoder, 58, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_a21a8e4a5f5c3c3942c9617caf59b430 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SetEncoder, 14, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_460e9918a42754ce1e247d01dc9cf7a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__componentSortKey, 15, const_tuple_fe87588b30cf737e4ce2a7761cce3274_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_pyasn1$codec$der$encoder$$$function_1__componentSortKey(  );


// The module function definitions.
static PyObject *impl_pyasn1$codec$der$encoder$$$function_1__componentSortKey( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_componentAndType = python_pars[ 0 ];
    PyObject *var_component = NULL;
    PyObject *var_asn1Spec = NULL;
    PyObject *var_compType = NULL;
    PyObject *var_names = NULL;
    PyObject *outline_0_var_namedType = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_460e9918a42754ce1e247d01dc9cf7a8;
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
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_c9358d8a33e65c4a7e4886653bf1093a_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_c9358d8a33e65c4a7e4886653bf1093a_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_460e9918a42754ce1e247d01dc9cf7a8 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_460e9918a42754ce1e247d01dc9cf7a8, codeobj_460e9918a42754ce1e247d01dc9cf7a8, module_pyasn1$codec$der$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_460e9918a42754ce1e247d01dc9cf7a8 = cache_frame_460e9918a42754ce1e247d01dc9cf7a8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_460e9918a42754ce1e247d01dc9cf7a8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_460e9918a42754ce1e247d01dc9cf7a8 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_componentAndType );
        tmp_iter_arg_1 = par_componentAndType;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooooo";
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


            type_description_1 = "ooooo";
            exception_lineno = 21;
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


            type_description_1 = "ooooo";
            exception_lineno = 21;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 21;
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

            type_description_1 = "ooooo";
            exception_lineno = 21;
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
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_component == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_component = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_asn1Spec == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_asn1Spec = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_asn1Spec );
        tmp_compexpr_left_1 = var_asn1Spec;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( var_component );
            tmp_assign_source_6 = var_component;
            assert( var_compType == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_compType = tmp_assign_source_6;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( var_asn1Spec );
            tmp_assign_source_7 = var_asn1Spec;
            assert( var_compType == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_compType = tmp_assign_source_7;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_compType );
        tmp_source_name_1 = var_compType;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_typeId );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Choice );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_typeId );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooo";
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
        CHECK_OBJECT( var_compType );
        tmp_source_name_4 = var_compType;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_tagSet );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
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
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( var_asn1Spec );
            tmp_compexpr_left_3 = var_asn1Spec;
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_3 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_source_name_5;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( var_component );
                tmp_called_instance_1 = var_component;
                frame_460e9918a42754ce1e247d01dc9cf7a8->m_frame.f_lineno = 30;
                tmp_source_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getComponent );
                if ( tmp_source_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 30;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tagSet );
                Py_DECREF( tmp_source_name_5 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 30;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_8;
                // Tried code:
                {
                    PyObject *tmp_assign_source_9;
                    PyObject *tmp_iter_arg_2;
                    PyObject *tmp_source_name_6;
                    PyObject *tmp_source_name_7;
                    CHECK_OBJECT( var_asn1Spec );
                    tmp_source_name_7 = var_asn1Spec;
                    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_componentType );
                    if ( tmp_source_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 33;
                        type_description_1 = "ooooo";
                        goto try_except_handler_4;
                    }
                    tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_namedTypes );
                    Py_DECREF( tmp_source_name_6 );
                    if ( tmp_iter_arg_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 33;
                        type_description_1 = "ooooo";
                        goto try_except_handler_4;
                    }
                    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
                    Py_DECREF( tmp_iter_arg_2 );
                    if ( tmp_assign_source_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 33;
                        type_description_1 = "ooooo";
                        goto try_except_handler_4;
                    }
                    assert( tmp_listcomp_1__$0 == NULL );
                    tmp_listcomp_1__$0 = tmp_assign_source_9;
                }
                {
                    PyObject *tmp_assign_source_10;
                    tmp_assign_source_10 = PyList_New( 0 );
                    assert( tmp_listcomp_1__contraction == NULL );
                    tmp_listcomp_1__contraction = tmp_assign_source_10;
                }
                MAKE_OR_REUSE_FRAME( cache_frame_c9358d8a33e65c4a7e4886653bf1093a_2, codeobj_c9358d8a33e65c4a7e4886653bf1093a, module_pyasn1$codec$der$encoder, sizeof(void *)+sizeof(void *) );
                frame_c9358d8a33e65c4a7e4886653bf1093a_2 = cache_frame_c9358d8a33e65c4a7e4886653bf1093a_2;

                // Push the new frame as the currently active one.
                pushFrameStack( frame_c9358d8a33e65c4a7e4886653bf1093a_2 );

                // Mark the frame object as in use, ref count 1 will be up for reuse.
                assert( Py_REFCNT( frame_c9358d8a33e65c4a7e4886653bf1093a_2 ) == 2 ); // Frame stack

                // Framed code:
                // Tried code:
                loop_start_1:;
                {
                    PyObject *tmp_next_source_1;
                    PyObject *tmp_assign_source_11;
                    CHECK_OBJECT( tmp_listcomp_1__$0 );
                    tmp_next_source_1 = tmp_listcomp_1__$0;
                    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_1 );
                    if ( tmp_assign_source_11 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_1;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_2 = "oo";
                            exception_lineno = 33;
                            goto try_except_handler_5;
                        }
                    }

                    {
                        PyObject *old = tmp_listcomp_1__iter_value_0;
                        tmp_listcomp_1__iter_value_0 = tmp_assign_source_11;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_12;
                    CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                    tmp_assign_source_12 = tmp_listcomp_1__iter_value_0;
                    {
                        PyObject *old = outline_0_var_namedType;
                        outline_0_var_namedType = tmp_assign_source_12;
                        Py_INCREF( outline_0_var_namedType );
                        Py_XDECREF( old );
                    }

                }
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_source_name_8;
                    CHECK_OBJECT( outline_0_var_namedType );
                    tmp_source_name_8 = outline_0_var_namedType;
                    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_name );
                    if ( tmp_compexpr_left_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 34;
                        type_description_2 = "oo";
                        goto try_except_handler_5;
                    }
                    CHECK_OBJECT( var_component );
                    tmp_compexpr_right_4 = var_component;
                    tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
                    Py_DECREF( tmp_compexpr_left_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 34;
                        type_description_2 = "oo";
                        goto try_except_handler_5;
                    }
                    tmp_condition_result_4 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_4;
                    }
                    else
                    {
                        goto branch_no_4;
                    }
                    branch_yes_4:;
                    {
                        PyObject *tmp_append_list_1;
                        PyObject *tmp_append_value_1;
                        PyObject *tmp_source_name_9;
                        CHECK_OBJECT( tmp_listcomp_1__contraction );
                        tmp_append_list_1 = tmp_listcomp_1__contraction;
                        CHECK_OBJECT( outline_0_var_namedType );
                        tmp_source_name_9 = outline_0_var_namedType;
                        tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_name );
                        if ( tmp_append_value_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 33;
                            type_description_2 = "oo";
                            goto try_except_handler_5;
                        }
                        assert( PyList_Check( tmp_append_list_1 ) );
                        tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                        Py_DECREF( tmp_append_value_1 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 33;
                            type_description_2 = "oo";
                            goto try_except_handler_5;
                        }
                    }
                    branch_no_4:;
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 33;
                    type_description_2 = "oo";
                    goto try_except_handler_5;
                }
                goto loop_start_1;
                loop_end_1:;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_assign_source_8 = tmp_listcomp_1__contraction;
                Py_INCREF( tmp_assign_source_8 );
                goto try_return_handler_5;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( pyasn1$codec$der$encoder$$$function_1__componentSortKey );
                return NULL;
                // Return handler code:
                try_return_handler_5:;
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
                try_except_handler_5:;
                exception_keeper_type_3 = exception_type;
                exception_keeper_value_3 = exception_value;
                exception_keeper_tb_3 = exception_tb;
                exception_keeper_lineno_3 = exception_lineno;
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
                exception_type = exception_keeper_type_3;
                exception_value = exception_keeper_value_3;
                exception_tb = exception_keeper_tb_3;
                exception_lineno = exception_keeper_lineno_3;

                goto frame_exception_exit_2;
                // End of try:

#if 0
                RESTORE_FRAME_EXCEPTION( frame_c9358d8a33e65c4a7e4886653bf1093a_2 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto frame_no_exception_1;

                frame_return_exit_2:;
#if 0
                RESTORE_FRAME_EXCEPTION( frame_c9358d8a33e65c4a7e4886653bf1093a_2 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto try_return_handler_4;

                frame_exception_exit_2:;

#if 0
                RESTORE_FRAME_EXCEPTION( frame_c9358d8a33e65c4a7e4886653bf1093a_2 );
#endif

                if ( exception_tb == NULL )
                {
                    exception_tb = MAKE_TRACEBACK( frame_c9358d8a33e65c4a7e4886653bf1093a_2, exception_lineno );
                }
                else if ( exception_tb->tb_frame != &frame_c9358d8a33e65c4a7e4886653bf1093a_2->m_frame )
                {
                    exception_tb = ADD_TRACEBACK( exception_tb, frame_c9358d8a33e65c4a7e4886653bf1093a_2, exception_lineno );
                }

                // Attachs locals to frame if any.
                Nuitka_Frame_AttachLocals(
                    (struct Nuitka_FrameObject *)frame_c9358d8a33e65c4a7e4886653bf1093a_2,
                    type_description_2,
                    outline_0_var_namedType,
                    var_component
                );


                // Release cached frame.
                if ( frame_c9358d8a33e65c4a7e4886653bf1093a_2 == cache_frame_c9358d8a33e65c4a7e4886653bf1093a_2 )
                {
                    Py_DECREF( frame_c9358d8a33e65c4a7e4886653bf1093a_2 );
                }
                cache_frame_c9358d8a33e65c4a7e4886653bf1093a_2 = NULL;

                assertFrameObject( frame_c9358d8a33e65c4a7e4886653bf1093a_2 );

                // Put the previous frame back on top.
                popFrameStack();

                // Return the error.
                goto nested_frame_exit_1;

                frame_no_exception_1:;
                goto skip_nested_handling_1;
                nested_frame_exit_1:;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
                skip_nested_handling_1:;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( pyasn1$codec$der$encoder$$$function_1__componentSortKey );
                return NULL;
                // Return handler code:
                try_return_handler_4:;
                Py_XDECREF( outline_0_var_namedType );
                outline_0_var_namedType = NULL;

                goto outline_result_1;
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

                Py_XDECREF( outline_0_var_namedType );
                outline_0_var_namedType = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_4;
                exception_value = exception_keeper_value_4;
                exception_tb = exception_keeper_tb_4;
                exception_lineno = exception_keeper_lineno_4;

                goto outline_exception_1;
                // End of try:
                // Return statement must have exited already.
                NUITKA_CANNOT_GET_HERE( pyasn1$codec$der$encoder$$$function_1__componentSortKey );
                return NULL;
                outline_exception_1:;
                exception_lineno = 33;
                goto frame_exception_exit_1;
                outline_result_1:;
                assert( var_names == NULL );
                var_names = tmp_assign_source_8;
            }
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_len_arg_1;
                CHECK_OBJECT( var_names );
                tmp_len_arg_1 = var_names;
                tmp_compexpr_left_5 = BUILTIN_LEN( tmp_len_arg_1 );
                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 35;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_5 = const_int_pos_1;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                assert( !(tmp_res == -1) );
                tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_5;
                }
                else
                {
                    goto branch_no_5;
                }
                branch_yes_5:;
                {
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_called_name_1;
                    PyObject *tmp_source_name_10;
                    PyObject *tmp_mvar_value_2;
                    PyObject *tmp_args_element_name_1;
                    PyObject *tmp_left_name_1;
                    PyObject *tmp_right_name_1;
                    PyObject *tmp_tuple_element_1;
                    int tmp_or_left_truth_1;
                    PyObject *tmp_or_left_value_1;
                    PyObject *tmp_or_right_value_1;
                    int tmp_and_left_truth_2;
                    PyObject *tmp_and_left_value_2;
                    PyObject *tmp_and_right_value_2;
                    PyObject *tmp_len_arg_2;
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_error );

                    if (unlikely( tmp_mvar_value_2 == NULL ))
                    {
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
                    }

                    if ( tmp_mvar_value_2 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "error" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 36;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_10 = tmp_mvar_value_2;
                    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_PyAsn1Error );
                    if ( tmp_called_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 36;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_left_name_1 = const_str_digest_24981b14826cf9fa3e8af3791272c33b;
                    CHECK_OBJECT( var_names );
                    tmp_len_arg_2 = var_names;
                    tmp_and_left_value_2 = BUILTIN_LEN( tmp_len_arg_2 );
                    if ( tmp_and_left_value_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_1 );

                        exception_lineno = 37;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
                    if ( tmp_and_left_truth_2 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_1 );
                        Py_DECREF( tmp_and_left_value_2 );

                        exception_lineno = 37;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    if ( tmp_and_left_truth_2 == 1 )
                    {
                        goto and_right_2;
                    }
                    else
                    {
                        goto and_left_2;
                    }
                    and_right_2:;
                    Py_DECREF( tmp_and_left_value_2 );
                    tmp_and_right_value_2 = const_str_digest_5b7e964b97e85704c0d49add3be18091;
                    Py_INCREF( tmp_and_right_value_2 );
                    tmp_or_left_value_1 = tmp_and_right_value_2;
                    goto and_end_2;
                    and_left_2:;
                    tmp_or_left_value_1 = tmp_and_left_value_2;
                    and_end_2:;
                    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
                    if ( tmp_or_left_truth_1 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_1 );
                        Py_DECREF( tmp_or_left_value_1 );

                        exception_lineno = 37;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    if ( tmp_or_left_truth_1 == 1 )
                    {
                        goto or_left_1;
                    }
                    else
                    {
                        goto or_right_1;
                    }
                    or_right_1:;
                    Py_DECREF( tmp_or_left_value_1 );
                    tmp_or_right_value_1 = const_str_digest_cd2534297d582ba3fcbd33cacee81907;
                    Py_INCREF( tmp_or_right_value_1 );
                    tmp_tuple_element_1 = tmp_or_right_value_1;
                    goto or_end_1;
                    or_left_1:;
                    tmp_tuple_element_1 = tmp_or_left_value_1;
                    or_end_1:;
                    tmp_right_name_1 = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
                    CHECK_OBJECT( var_component );
                    tmp_tuple_element_1 = var_component;
                    Py_INCREF( tmp_tuple_element_1 );
                    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                    Py_DECREF( tmp_right_name_1 );
                    if ( tmp_args_element_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_1 );

                        exception_lineno = 37;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_460e9918a42754ce1e247d01dc9cf7a8->m_frame.f_lineno = 36;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_1 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                    }

                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_args_element_name_1 );
                    if ( tmp_raise_type_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 36;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 36;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_5:;
            }
            {
                PyObject *tmp_source_name_11;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                CHECK_OBJECT( var_asn1Spec );
                tmp_subscribed_name_1 = var_asn1Spec;
                CHECK_OBJECT( var_names );
                tmp_subscribed_name_2 = var_names;
                tmp_subscript_name_2 = const_int_0;
                tmp_subscript_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
                if ( tmp_subscript_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 40;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_source_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscript_name_1 );
                if ( tmp_source_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 40;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_tagSet );
                Py_DECREF( tmp_source_name_11 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 40;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_source_name_12;
            CHECK_OBJECT( var_compType );
            tmp_source_name_12 = var_compType;
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_tagSet );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_460e9918a42754ce1e247d01dc9cf7a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_460e9918a42754ce1e247d01dc9cf7a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_460e9918a42754ce1e247d01dc9cf7a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_460e9918a42754ce1e247d01dc9cf7a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_460e9918a42754ce1e247d01dc9cf7a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_460e9918a42754ce1e247d01dc9cf7a8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_460e9918a42754ce1e247d01dc9cf7a8,
        type_description_1,
        par_componentAndType,
        var_component,
        var_asn1Spec,
        var_compType,
        var_names
    );


    // Release cached frame.
    if ( frame_460e9918a42754ce1e247d01dc9cf7a8 == cache_frame_460e9918a42754ce1e247d01dc9cf7a8 )
    {
        Py_DECREF( frame_460e9918a42754ce1e247d01dc9cf7a8 );
    }
    cache_frame_460e9918a42754ce1e247d01dc9cf7a8 = NULL;

    assertFrameObject( frame_460e9918a42754ce1e247d01dc9cf7a8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$der$encoder$$$function_1__componentSortKey );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_componentAndType );
    Py_DECREF( par_componentAndType );
    par_componentAndType = NULL;

    CHECK_OBJECT( (PyObject *)var_component );
    Py_DECREF( var_component );
    var_component = NULL;

    CHECK_OBJECT( (PyObject *)var_asn1Spec );
    Py_DECREF( var_asn1Spec );
    var_asn1Spec = NULL;

    CHECK_OBJECT( (PyObject *)var_compType );
    Py_DECREF( var_compType );
    var_compType = NULL;

    Py_XDECREF( var_names );
    var_names = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_componentAndType );
    Py_DECREF( par_componentAndType );
    par_componentAndType = NULL;

    Py_XDECREF( var_component );
    var_component = NULL;

    Py_XDECREF( var_asn1Spec );
    var_asn1Spec = NULL;

    Py_XDECREF( var_compType );
    var_compType = NULL;

    Py_XDECREF( var_names );
    var_names = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$der$encoder$$$function_1__componentSortKey );
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



static PyObject *MAKE_FUNCTION_pyasn1$codec$der$encoder$$$function_1__componentSortKey(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$der$encoder$$$function_1__componentSortKey,
        const_str_plain__componentSortKey,
#if PYTHON_VERSION >= 300
        const_str_digest_339682c9f90ab4eb0347ec2160c619ad,
#endif
        codeobj_460e9918a42754ce1e247d01dc9cf7a8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$der$encoder,
        const_str_digest_1341560babe2818ae5cd3d2e2f979fea,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyasn1$codec$der$encoder =
{
    PyModuleDef_HEAD_INIT,
    "pyasn1.codec.der.encoder",
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
MOD_ENTRY_DECL(pyasn1$codec$der$encoder)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(pyasn1$codec$der$encoder)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyasn1$codec$der$encoder );
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
    puts("pyasn1.codec.der.encoder: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.codec.der.encoder: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.codec.der.encoder: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpyasn1$codec$der$encoder" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyasn1$codec$der$encoder = Py_InitModule4(
        "pyasn1.codec.der.encoder",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pyasn1$codec$der$encoder = PyModule_Create( &mdef_pyasn1$codec$der$encoder );
#endif

    moduledict_pyasn1$codec$der$encoder = MODULE_DICT( module_pyasn1$codec$der$encoder );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_pyasn1$codec$der$encoder,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pyasn1$codec$der$encoder,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$codec$der$encoder,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$codec$der$encoder,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pyasn1$codec$der$encoder );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_922453edc4f37e5cfebf496648dceafc, module_pyasn1$codec$der$encoder );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    struct Nuitka_FrameObject *frame_f5ee41dd0ef827ac8ad7b34d8634acf1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_pyasn1$codec$der$encoder_14 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_a21a8e4a5f5c3c3942c9617caf59b430_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a21a8e4a5f5c3c3942c9617caf59b430_2 = NULL;
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
    PyObject *locals_pyasn1$codec$der$encoder_58 = NULL;
    struct Nuitka_FrameObject *frame_51d4c49fe8f34691abcd06f1fa4c13ea_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_51d4c49fe8f34691abcd06f1fa4c13ea_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_9059008869351d0dbc9c01bde5ac727d;
        UPDATE_STRING_DICT0( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_f5ee41dd0ef827ac8ad7b34d8634acf1 = MAKE_MODULE_FRAME( codeobj_f5ee41dd0ef827ac8ad7b34d8634acf1, module_pyasn1$codec$der$encoder );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f5ee41dd0ef827ac8ad7b34d8634acf1 );
    assert( Py_REFCNT( frame_f5ee41dd0ef827ac8ad7b34d8634acf1 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_9059008869351d0dbc9c01bde5ac727d;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_pyasn1$codec$der$encoder;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_error_tuple;
        tmp_level_name_1 = const_int_0;
        frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame.f_lineno = 7;
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
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_error, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_a40d973ff88a213bee0c6fc98dc34631;
        tmp_globals_name_2 = (PyObject *)moduledict_pyasn1$codec$der$encoder;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_encoder_tuple;
        tmp_level_name_2 = const_int_0;
        frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame.f_lineno = 8;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_encoder );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_encoder, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_7c8c58049edd248f8b1cb370445e702c;
        tmp_globals_name_3 = (PyObject *)moduledict_pyasn1$codec$der$encoder;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_univ_tuple;
        tmp_level_name_3 = const_int_0;
        frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame.f_lineno = 9;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_univ );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_univ, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = LIST_COPY( const_list_str_plain_encode_list );
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 14;

            goto try_except_handler_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SetEncoder );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_1;
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


            exception_lineno = 14;

            goto try_except_handler_1;
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


            exception_lineno = 14;

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


            exception_lineno = 14;

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


            exception_lineno = 14;

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


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

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
        tmp_assign_source_11 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_1;
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


            exception_lineno = 14;

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


            exception_lineno = 14;

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


                exception_lineno = 14;

                goto try_except_handler_1;
            }
            tmp_tuple_element_2 = const_str_plain_SetEncoder;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame.f_lineno = 14;
            tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;

                goto try_except_handler_1;
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


                exception_lineno = 14;

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


                    exception_lineno = 14;

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

                    exception_lineno = 14;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 14;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 14;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
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
            locals_pyasn1$codec$der$encoder_14 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_922453edc4f37e5cfebf496648dceafc;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$der$encoder_14, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_SetEncoder;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$der$encoder_14, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_a21a8e4a5f5c3c3942c9617caf59b430_2, codeobj_a21a8e4a5f5c3c3942c9617caf59b430, module_pyasn1$codec$der$encoder, sizeof(void *) );
        frame_a21a8e4a5f5c3c3942c9617caf59b430_2 = cache_frame_a21a8e4a5f5c3c3942c9617caf59b430_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_a21a8e4a5f5c3c3942c9617caf59b430_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_a21a8e4a5f5c3c3942c9617caf59b430_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_staticmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM( locals_pyasn1$codec$der$encoder_14, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_3;
            }
            else
            {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_2 = PyObject_GetItem( locals_pyasn1$codec$der$encoder_14, const_str_plain_staticmethod );

            if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = MAKE_FUNCTION_pyasn1$codec$der$encoder$$$function_1__componentSortKey(  );



            frame_a21a8e4a5f5c3c3942c9617caf59b430_2->m_frame.f_lineno = 15;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_staticmethod_arg_1 = MAKE_FUNCTION_pyasn1$codec$der$encoder$$$function_1__componentSortKey(  );



            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
            Py_DECREF( tmp_staticmethod_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$der$encoder_14, const_str_plain__componentSortKey, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_a21a8e4a5f5c3c3942c9617caf59b430_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_a21a8e4a5f5c3c3942c9617caf59b430_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_a21a8e4a5f5c3c3942c9617caf59b430_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_a21a8e4a5f5c3c3942c9617caf59b430_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_a21a8e4a5f5c3c3942c9617caf59b430_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_a21a8e4a5f5c3c3942c9617caf59b430_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_a21a8e4a5f5c3c3942c9617caf59b430_2 == cache_frame_a21a8e4a5f5c3c3942c9617caf59b430_2 )
        {
            Py_DECREF( frame_a21a8e4a5f5c3c3942c9617caf59b430_2 );
        }
        cache_frame_a21a8e4a5f5c3c3942c9617caf59b430_2 = NULL;

        assertFrameObject( frame_a21a8e4a5f5c3c3942c9617caf59b430_2 );

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
            nuitka_bool tmp_condition_result_7;
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


                exception_lineno = 14;

                goto try_except_handler_3;
            }
            tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
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
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$der$encoder_14, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_SetEncoder;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_pyasn1$codec$der$encoder_14;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame.f_lineno = 14;
            tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_15;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_14 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_14 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$der$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_pyasn1$codec$der$encoder_14 );
        locals_pyasn1$codec$der$encoder_14 = NULL;
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

        Py_DECREF( locals_pyasn1$codec$der$encoder_14 );
        locals_pyasn1$codec$der$encoder_14 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$der$encoder );
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
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$der$encoder );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 14;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_SetEncoder, tmp_assign_source_14 );
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_4;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tagMap );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame.f_lineno = 45;
        tmp_assign_source_16 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_tagMap, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_tagMap );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tagMap );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_source_name_7 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_update );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_6;
        tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_Set );
        if ( tmp_source_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_tagSet );
        Py_DECREF( tmp_source_name_8 );
        if ( tmp_dict_key_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_SetEncoder );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetEncoder );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_dict_key_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_7;
        frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame.f_lineno = 48;
        tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_dict_key_1 );

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_args_element_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        Py_DECREF( tmp_dict_key_1 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_8;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_typeMap );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame.f_lineno = 51;
        tmp_assign_source_17 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_typeMap, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_typeMap );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeMap );
        }

        CHECK_OBJECT( tmp_mvar_value_9 );
        tmp_source_name_11 = tmp_mvar_value_9;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_update );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_10;
        tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_Set );
        if ( tmp_source_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_typeId );
        Py_DECREF( tmp_source_name_12 );
        if ( tmp_dict_key_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_SetEncoder );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetEncoder );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_dict_key_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_11;
        frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame.f_lineno = 54;
        tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_dict_key_2 );

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        Py_DECREF( tmp_dict_key_2 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 58;

            goto try_except_handler_4;
        }

        tmp_source_name_14 = tmp_mvar_value_12;
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_Encoder );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        tmp_assign_source_18 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_18, 0, tmp_tuple_element_5 );
        assert( tmp_class_creation_2__bases_orig == NULL );
        tmp_class_creation_2__bases_orig = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT( tmp_class_creation_2__bases_orig );
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_19 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_9;
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


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_2 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_5:;
        condexpr_end_4:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_21 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_10;
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


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_source_name_15;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_15 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_15, const_str_plain___prepare__ );
        tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_16;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_16 = tmp_class_creation_2__metaclass;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___prepare__ );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_4;
            }
            tmp_tuple_element_6 = const_str_plain_Encoder;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame.f_lineno = 58;
            tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_22;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_17;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_17 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_17, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_4;
            }
            tmp_condition_result_12 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
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
                PyObject *tmp_source_name_18;
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


                    exception_lineno = 58;

                    goto try_except_handler_4;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_18 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_18 == NULL) );
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_18 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 58;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_7 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 58;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 58;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_23;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyasn1$codec$der$encoder_58 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_922453edc4f37e5cfebf496648dceafc;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$der$encoder_58, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_Encoder;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$der$encoder_58, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_51d4c49fe8f34691abcd06f1fa4c13ea_3, codeobj_51d4c49fe8f34691abcd06f1fa4c13ea, module_pyasn1$codec$der$encoder, sizeof(void *) );
        frame_51d4c49fe8f34691abcd06f1fa4c13ea_3 = cache_frame_51d4c49fe8f34691abcd06f1fa4c13ea_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_51d4c49fe8f34691abcd06f1fa4c13ea_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_51d4c49fe8f34691abcd06f1fa4c13ea_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$der$encoder_58, const_str_plain_fixedDefLengthMode, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = const_int_0;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$der$encoder_58, const_str_plain_fixedChunkSize, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_51d4c49fe8f34691abcd06f1fa4c13ea_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_51d4c49fe8f34691abcd06f1fa4c13ea_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_51d4c49fe8f34691abcd06f1fa4c13ea_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_51d4c49fe8f34691abcd06f1fa4c13ea_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_51d4c49fe8f34691abcd06f1fa4c13ea_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_51d4c49fe8f34691abcd06f1fa4c13ea_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_51d4c49fe8f34691abcd06f1fa4c13ea_3 == cache_frame_51d4c49fe8f34691abcd06f1fa4c13ea_3 )
        {
            Py_DECREF( frame_51d4c49fe8f34691abcd06f1fa4c13ea_3 );
        }
        cache_frame_51d4c49fe8f34691abcd06f1fa4c13ea_3 = NULL;

        assertFrameObject( frame_51d4c49fe8f34691abcd06f1fa4c13ea_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_13;
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


                exception_lineno = 58;

                goto try_except_handler_6;
            }
            tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
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
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$der$encoder_58, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_6;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_9 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = const_str_plain_Encoder;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
            tmp_tuple_element_8 = locals_pyasn1$codec$der$encoder_58;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame.f_lineno = 58;
            tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_6;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_24 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_24 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$der$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_pyasn1$codec$der$encoder_58 );
        locals_pyasn1$codec$der$encoder_58 = NULL;
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

        Py_DECREF( locals_pyasn1$codec$der$encoder_58 );
        locals_pyasn1$codec$der$encoder_58 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$der$encoder );
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
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$der$encoder );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 58;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_Encoder, tmp_assign_source_24 );
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

    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_15;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_Encoder );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Encoder );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_13;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_tagMap );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tagMap );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tagMap" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_14;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_typeMap );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeMap );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "typeMap" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = tmp_mvar_value_15;
        frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
        }

        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$der$encoder, (Nuitka_StringObject *)const_str_plain_encode, tmp_assign_source_26 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5ee41dd0ef827ac8ad7b34d8634acf1 );
#endif
    popFrameStack();

    assertFrameObject( frame_f5ee41dd0ef827ac8ad7b34d8634acf1 );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5ee41dd0ef827ac8ad7b34d8634acf1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f5ee41dd0ef827ac8ad7b34d8634acf1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f5ee41dd0ef827ac8ad7b34d8634acf1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f5ee41dd0ef827ac8ad7b34d8634acf1, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;

    return MOD_RETURN_VALUE( module_pyasn1$codec$der$encoder );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
