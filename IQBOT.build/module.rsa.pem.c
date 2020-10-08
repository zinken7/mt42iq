/* Generated code for Python module 'rsa.pem'
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

/* The "_module_rsa$pem" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rsa$pem;
PyDictObject *moduledict_rsa$pem;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_b64;
static PyObject *const_str_plain_standard_b64encode;
extern PyObject *const_tuple_str_plain_ascii_tuple;
static PyObject *const_tuple_bytes_chr_10_bytes_empty_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_digest_865e7095d477d90f1eead964158b0a6f;
static PyObject *const_str_digest_4d40a9f609dcd3dcf20bbb847c7d2d29;
extern PyObject *const_str_digest_10b4a05c1efbc618d78f50cb7defbe0f;
extern PyObject *const_str_plain_range;
static PyObject *const_str_digest_fd21edc8f3998e9bbe46990f377bfa05;
static PyObject *const_str_plain_pem_start;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_is_bytes;
static PyObject *const_bytes_digest_7c92c89984d1c92cfb9320ce2c355a73;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_in_pem_part;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_contents;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_digest_1ae27f820577d02f8b1da91b35d2d70d;
static PyObject *const_str_digest_dcbfff9be241487c57c1b6ba08b537a2;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_bytes_digest_633d87051e496b0d49cba85732307699;
static PyObject *const_str_plain_pem_end;
extern PyObject *const_str_plain_base64;
extern PyObject *const_bytes_chr_58;
extern PyObject *const_str_plain_line;
extern PyObject *const_str_plain_origin;
extern PyObject *const_bytes_chr_10;
static PyObject *const_str_plain__markers;
static PyObject *const_str_plain_pem_marker;
extern PyObject *const_str_plain_pem;
static PyObject *const_str_digest_6076aa123f566a80cd2b8723a6fc699a;
extern PyObject *const_str_plain_block;
static PyObject *const_tuple_str_plain_pem_marker_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_strip;
static PyObject *const_str_plain_standard_b64decode;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_splitlines;
static PyObject *const_tuple_503b190b7961869c453cbaf47e1fd3c8_tuple;
static PyObject *const_str_plain_block_start;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_ascii;
static PyObject *const_str_digest_36d0614b5ed8c8b80b7a1708ce98fa75;
extern PyObject *const_str_plain_join;
static PyObject *const_tuple_str_plain_is_bytes_str_plain_range_tuple;
static PyObject *const_bytes_digest_e5c4c468e50020313bb30ada024b7456;
extern PyObject *const_bytes_empty;
extern PyObject *const_str_plain_load_pem;
static PyObject *const_str_plain_pem_lines;
static PyObject *const_tuple_b45ddc9be041faf2ffed8d107f6788df_tuple;
static PyObject *const_str_digest_b309b7d009a7ecf053669a2a08af6c5a;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_39a2d280ffa9e33e3937658f88ba4e89;
extern PyObject *const_str_plain_save_pem;
extern PyObject *const_tuple_bytes_empty_tuple;
static PyObject *const_str_digest_6760aa06ace4d6f16e365542f0798739;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_b64 = UNSTREAM_STRING_ASCII( &constant_bin[ 2417981 ], 3, 1 );
    const_str_plain_standard_b64encode = UNSTREAM_STRING_ASCII( &constant_bin[ 2734178 ], 18, 1 );
    const_tuple_bytes_chr_10_bytes_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_10_bytes_empty_tuple, 0, const_bytes_chr_10 ); Py_INCREF( const_bytes_chr_10 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_10_bytes_empty_tuple, 1, const_bytes_empty ); Py_INCREF( const_bytes_empty );
    const_str_digest_4d40a9f609dcd3dcf20bbb847c7d2d29 = UNSTREAM_STRING_ASCII( &constant_bin[ 2734196 ], 48, 0 );
    const_str_digest_fd21edc8f3998e9bbe46990f377bfa05 = UNSTREAM_STRING_ASCII( &constant_bin[ 2734244 ], 362, 0 );
    const_str_plain_pem_start = UNSTREAM_STRING_ASCII( &constant_bin[ 2734606 ], 9, 1 );
    const_bytes_digest_7c92c89984d1c92cfb9320ce2c355a73 = UNSTREAM_BYTES( &constant_bin[ 2428758 ], 9 );
    const_str_plain_in_pem_part = UNSTREAM_STRING_ASCII( &constant_bin[ 2734615 ], 11, 1 );
    const_str_digest_1ae27f820577d02f8b1da91b35d2d70d = UNSTREAM_STRING_ASCII( &constant_bin[ 2734626 ], 28, 0 );
    const_str_digest_dcbfff9be241487c57c1b6ba08b537a2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2734654 ], 465, 0 );
    const_str_plain_pem_end = UNSTREAM_STRING_ASCII( &constant_bin[ 2735119 ], 7, 1 );
    const_str_plain__markers = UNSTREAM_STRING_ASCII( &constant_bin[ 2735126 ], 8, 1 );
    const_str_plain_pem_marker = UNSTREAM_STRING_ASCII( &constant_bin[ 2734332 ], 10, 1 );
    const_str_digest_6076aa123f566a80cd2b8723a6fc699a = UNSTREAM_STRING_ASCII( &constant_bin[ 2735134 ], 58, 0 );
    const_tuple_str_plain_pem_marker_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_pem_marker_tuple, 0, const_str_plain_pem_marker ); Py_INCREF( const_str_plain_pem_marker );
    const_str_plain_standard_b64decode = UNSTREAM_STRING_ASCII( &constant_bin[ 2722687 ], 18, 1 );
    const_tuple_503b190b7961869c453cbaf47e1fd3c8_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_503b190b7961869c453cbaf47e1fd3c8_tuple, 0, const_str_plain_contents ); Py_INCREF( const_str_plain_contents );
    PyTuple_SET_ITEM( const_tuple_503b190b7961869c453cbaf47e1fd3c8_tuple, 1, const_str_plain_pem_marker ); Py_INCREF( const_str_plain_pem_marker );
    PyTuple_SET_ITEM( const_tuple_503b190b7961869c453cbaf47e1fd3c8_tuple, 2, const_str_plain_pem_start ); Py_INCREF( const_str_plain_pem_start );
    PyTuple_SET_ITEM( const_tuple_503b190b7961869c453cbaf47e1fd3c8_tuple, 3, const_str_plain_pem_end ); Py_INCREF( const_str_plain_pem_end );
    const_str_plain_pem_lines = UNSTREAM_STRING_ASCII( &constant_bin[ 2735192 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_503b190b7961869c453cbaf47e1fd3c8_tuple, 4, const_str_plain_pem_lines ); Py_INCREF( const_str_plain_pem_lines );
    PyTuple_SET_ITEM( const_tuple_503b190b7961869c453cbaf47e1fd3c8_tuple, 5, const_str_plain_in_pem_part ); Py_INCREF( const_str_plain_in_pem_part );
    PyTuple_SET_ITEM( const_tuple_503b190b7961869c453cbaf47e1fd3c8_tuple, 6, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_503b190b7961869c453cbaf47e1fd3c8_tuple, 7, const_str_plain_pem ); Py_INCREF( const_str_plain_pem );
    const_str_plain_block_start = UNSTREAM_STRING_ASCII( &constant_bin[ 2735201 ], 11, 1 );
    const_str_digest_36d0614b5ed8c8b80b7a1708ce98fa75 = UNSTREAM_STRING_ASCII( &constant_bin[ 2735212 ], 28, 0 );
    const_tuple_str_plain_is_bytes_str_plain_range_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_is_bytes_str_plain_range_tuple, 0, const_str_plain_is_bytes ); Py_INCREF( const_str_plain_is_bytes );
    PyTuple_SET_ITEM( const_tuple_str_plain_is_bytes_str_plain_range_tuple, 1, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    const_bytes_digest_e5c4c468e50020313bb30ada024b7456 = UNSTREAM_BYTES( &constant_bin[ 734999 ], 5 );
    const_tuple_b45ddc9be041faf2ffed8d107f6788df_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_b45ddc9be041faf2ffed8d107f6788df_tuple, 0, const_str_plain_contents ); Py_INCREF( const_str_plain_contents );
    PyTuple_SET_ITEM( const_tuple_b45ddc9be041faf2ffed8d107f6788df_tuple, 1, const_str_plain_pem_marker ); Py_INCREF( const_str_plain_pem_marker );
    PyTuple_SET_ITEM( const_tuple_b45ddc9be041faf2ffed8d107f6788df_tuple, 2, const_str_plain_pem_start ); Py_INCREF( const_str_plain_pem_start );
    PyTuple_SET_ITEM( const_tuple_b45ddc9be041faf2ffed8d107f6788df_tuple, 3, const_str_plain_pem_end ); Py_INCREF( const_str_plain_pem_end );
    PyTuple_SET_ITEM( const_tuple_b45ddc9be041faf2ffed8d107f6788df_tuple, 4, const_str_plain_b64 ); Py_INCREF( const_str_plain_b64 );
    PyTuple_SET_ITEM( const_tuple_b45ddc9be041faf2ffed8d107f6788df_tuple, 5, const_str_plain_pem_lines ); Py_INCREF( const_str_plain_pem_lines );
    PyTuple_SET_ITEM( const_tuple_b45ddc9be041faf2ffed8d107f6788df_tuple, 6, const_str_plain_block_start ); Py_INCREF( const_str_plain_block_start );
    PyTuple_SET_ITEM( const_tuple_b45ddc9be041faf2ffed8d107f6788df_tuple, 7, const_str_plain_block ); Py_INCREF( const_str_plain_block );
    const_str_digest_b309b7d009a7ecf053669a2a08af6c5a = UNSTREAM_STRING_ASCII( &constant_bin[ 2735240 ], 30, 0 );
    const_str_digest_39a2d280ffa9e33e3937658f88ba4e89 = UNSTREAM_STRING_ASCII( &constant_bin[ 2735270 ], 38, 0 );
    const_str_digest_6760aa06ace4d6f16e365542f0798739 = UNSTREAM_STRING_ASCII( &constant_bin[ 2735308 ], 16, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_rsa$pem( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d9efeab88250c859978649e4c75ef57d;
static PyCodeObject *codeobj_d48e4ab7b674735c90196766fc842a74;
static PyCodeObject *codeobj_55c49f1dbaf8371a9fc4c2ab6b0df1fb;
static PyCodeObject *codeobj_4423956cfdc79ca744d3699f3fde0530;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_39a2d280ffa9e33e3937658f88ba4e89;
    codeobj_d9efeab88250c859978649e4c75ef57d = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6760aa06ace4d6f16e365542f0798739, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d48e4ab7b674735c90196766fc842a74 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__markers, 24, const_tuple_str_plain_pem_marker_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_55c49f1dbaf8371a9fc4c2ab6b0df1fb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_pem, 36, const_tuple_503b190b7961869c453cbaf47e1fd3c8_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4423956cfdc79ca744d3699f3fde0530 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_save_pem, 102, const_tuple_b45ddc9be041faf2ffed8d107f6788df_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_rsa$pem$$$function_1__markers(  );


static PyObject *MAKE_FUNCTION_rsa$pem$$$function_2_load_pem(  );


static PyObject *MAKE_FUNCTION_rsa$pem$$$function_3_save_pem(  );


// The module function definitions.
static PyObject *impl_rsa$pem$$$function_1__markers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pem_marker = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d48e4ab7b674735c90196766fc842a74;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d48e4ab7b674735c90196766fc842a74 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d48e4ab7b674735c90196766fc842a74, codeobj_d48e4ab7b674735c90196766fc842a74, module_rsa$pem, sizeof(void *) );
    frame_d48e4ab7b674735c90196766fc842a74 = cache_frame_d48e4ab7b674735c90196766fc842a74;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d48e4ab7b674735c90196766fc842a74 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d48e4ab7b674735c90196766fc842a74 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain_is_bytes );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_bytes );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_pem_marker );
        tmp_args_element_name_1 = par_pem_marker;
        frame_d48e4ab7b674735c90196766fc842a74->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_pem_marker );
            tmp_called_instance_1 = par_pem_marker;
            frame_d48e4ab7b674735c90196766fc842a74->m_frame.f_lineno = 30;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_pem_marker;
                assert( old != NULL );
                par_pem_marker = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        tmp_left_name_2 = const_bytes_digest_633d87051e496b0d49cba85732307699;
        CHECK_OBJECT( par_pem_marker );
        tmp_right_name_1 = par_pem_marker;
        tmp_left_name_1 = BINARY_OPERATION_ADD_BYTES_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_bytes_digest_e5c4c468e50020313bb30ada024b7456;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_BYTES( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        tmp_left_name_4 = const_bytes_digest_7c92c89984d1c92cfb9320ce2c355a73;
        CHECK_OBJECT( par_pem_marker );
        tmp_right_name_3 = par_pem_marker;
        tmp_left_name_3 = BINARY_OPERATION_ADD_BYTES_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_bytes_digest_e5c4c468e50020313bb30ada024b7456;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_BYTES( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d48e4ab7b674735c90196766fc842a74 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d48e4ab7b674735c90196766fc842a74 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d48e4ab7b674735c90196766fc842a74 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d48e4ab7b674735c90196766fc842a74, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d48e4ab7b674735c90196766fc842a74->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d48e4ab7b674735c90196766fc842a74, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d48e4ab7b674735c90196766fc842a74,
        type_description_1,
        par_pem_marker
    );


    // Release cached frame.
    if ( frame_d48e4ab7b674735c90196766fc842a74 == cache_frame_d48e4ab7b674735c90196766fc842a74 )
    {
        Py_DECREF( frame_d48e4ab7b674735c90196766fc842a74 );
    }
    cache_frame_d48e4ab7b674735c90196766fc842a74 = NULL;

    assertFrameObject( frame_d48e4ab7b674735c90196766fc842a74 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pem$$$function_1__markers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pem_marker );
    Py_DECREF( par_pem_marker );
    par_pem_marker = NULL;

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

    Py_XDECREF( par_pem_marker );
    par_pem_marker = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$pem$$$function_1__markers );
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


static PyObject *impl_rsa$pem$$$function_2_load_pem( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_contents = python_pars[ 0 ];
    PyObject *par_pem_marker = python_pars[ 1 ];
    PyObject *var_pem_start = NULL;
    PyObject *var_pem_end = NULL;
    PyObject *var_pem_lines = NULL;
    PyObject *var_in_pem_part = NULL;
    PyObject *var_line = NULL;
    PyObject *var_pem = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb, codeobj_55c49f1dbaf8371a9fc4c2ab6b0df1fb, module_rsa$pem, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb = cache_frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain_is_bytes );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_bytes );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_contents );
        tmp_args_element_name_1 = par_contents;
        frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_contents );
            tmp_called_instance_1 = par_contents;
            frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb->m_frame.f_lineno = 53;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_contents;
                assert( old != NULL );
                par_contents = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain__markers );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__markers );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_markers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_pem_marker );
        tmp_args_element_name_2 = par_pem_marker;
        frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooooooo";
            exception_lineno = 55;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_4 == NULL )
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


            type_description_1 = "oooooooo";
            exception_lineno = 55;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "oooooooo";
                    exception_lineno = 55;
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

            type_description_1 = "oooooooo";
            exception_lineno = 55;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert( var_pem_start == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_pem_start = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_pem_end == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_pem_end = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = PyList_New( 0 );
        assert( var_pem_lines == NULL );
        var_pem_lines = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_False;
        assert( var_in_pem_part == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_in_pem_part = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_contents );
        tmp_called_instance_2 = par_contents;
        frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb->m_frame.f_lineno = 60;
        tmp_iter_arg_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_splitlines );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                exception_lineno = 60;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_11 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_11;
            Py_INCREF( var_line );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_line );
        tmp_called_instance_3 = var_line;
        frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb->m_frame.f_lineno = 61;
        tmp_assign_source_12 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_strip );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_line;
            assert( old != NULL );
            var_line = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_line );
        tmp_operand_name_2 = var_line;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
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
        goto loop_start_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_line );
        tmp_compexpr_left_1 = var_line;
        CHECK_OBJECT( var_pem_start );
        tmp_compexpr_right_1 = var_pem_start;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
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
            nuitka_bool tmp_condition_result_4;
            int tmp_truth_name_1;
            CHECK_OBJECT( var_in_pem_part );
            tmp_truth_name_1 = CHECK_IF_TRUE( var_in_pem_part );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_left_name_1 = const_str_digest_36d0614b5ed8c8b80b7a1708ce98fa75;
                CHECK_OBJECT( var_pem_start );
                tmp_right_name_1 = var_pem_start;
                tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_make_exception_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb->m_frame.f_lineno = 70;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_1 );
                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 70;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = Py_True;
            {
                PyObject *old = var_in_pem_part;
                assert( old != NULL );
                var_in_pem_part = tmp_assign_source_13;
                Py_INCREF( var_in_pem_part );
                Py_DECREF( old );
            }

        }
        goto loop_start_1;
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT( var_in_pem_part );
        tmp_operand_name_3 = var_in_pem_part;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        goto loop_start_1;
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_in_pem_part );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_in_pem_part );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_line );
        tmp_compexpr_left_2 = var_line;
        CHECK_OBJECT( var_pem_end );
        tmp_compexpr_right_2 = var_pem_end;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = Py_False;
            {
                PyObject *old = var_in_pem_part;
                assert( old != NULL );
                var_in_pem_part = tmp_assign_source_14;
                Py_INCREF( var_in_pem_part );
                Py_DECREF( old );
            }

        }
        goto loop_end_1;
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = const_bytes_chr_58;
        CHECK_OBJECT( var_line );
        tmp_compexpr_right_3 = var_line;
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_7 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        goto loop_start_1;
        branch_no_7:;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( var_pem_lines );
        tmp_called_instance_4 = var_pem_lines;
        CHECK_OBJECT( var_line );
        tmp_args_element_name_3 = var_line;
        frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_append, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT( var_pem_lines );
        tmp_operand_name_4 = var_pem_lines;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
        assert( !(tmp_res == -1) );
        tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_left_name_2 = const_str_digest_b309b7d009a7ecf053669a2a08af6c5a;
            CHECK_OBJECT( var_pem_start );
            tmp_right_name_2 = var_pem_start;
            tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb->m_frame.f_lineno = 92;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 92;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        if ( var_in_pem_part == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "in_pem_part" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE( var_in_pem_part );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_left_name_3 = const_str_digest_1ae27f820577d02f8b1da91b35d2d70d;
            CHECK_OBJECT( var_pem_end );
            tmp_right_name_3 = var_pem_end;
            tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_make_exception_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb->m_frame.f_lineno = 95;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_3 );
            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 95;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_9:;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_4;
        tmp_called_instance_5 = const_bytes_empty;
        CHECK_OBJECT( var_pem_lines );
        tmp_args_element_name_4 = var_pem_lines;
        frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_join, call_args );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pem == NULL );
        var_pem = tmp_assign_source_15;
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain_base64 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_3;
        CHECK_OBJECT( var_pem );
        tmp_args_element_name_5 = var_pem;
        frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_standard_b64decode, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb,
        type_description_1,
        par_contents,
        par_pem_marker,
        var_pem_start,
        var_pem_end,
        var_pem_lines,
        var_in_pem_part,
        var_line,
        var_pem
    );


    // Release cached frame.
    if ( frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb == cache_frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb )
    {
        Py_DECREF( frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb );
    }
    cache_frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb = NULL;

    assertFrameObject( frame_55c49f1dbaf8371a9fc4c2ab6b0df1fb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pem$$$function_2_load_pem );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_contents );
    Py_DECREF( par_contents );
    par_contents = NULL;

    CHECK_OBJECT( (PyObject *)par_pem_marker );
    Py_DECREF( par_pem_marker );
    par_pem_marker = NULL;

    CHECK_OBJECT( (PyObject *)var_pem_start );
    Py_DECREF( var_pem_start );
    var_pem_start = NULL;

    CHECK_OBJECT( (PyObject *)var_pem_end );
    Py_DECREF( var_pem_end );
    var_pem_end = NULL;

    CHECK_OBJECT( (PyObject *)var_pem_lines );
    Py_DECREF( var_pem_lines );
    var_pem_lines = NULL;

    Py_XDECREF( var_in_pem_part );
    var_in_pem_part = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    CHECK_OBJECT( (PyObject *)var_pem );
    Py_DECREF( var_pem );
    var_pem = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_contents );
    par_contents = NULL;

    CHECK_OBJECT( (PyObject *)par_pem_marker );
    Py_DECREF( par_pem_marker );
    par_pem_marker = NULL;

    Py_XDECREF( var_pem_start );
    var_pem_start = NULL;

    Py_XDECREF( var_pem_end );
    var_pem_end = NULL;

    Py_XDECREF( var_pem_lines );
    var_pem_lines = NULL;

    Py_XDECREF( var_in_pem_part );
    var_in_pem_part = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_pem );
    var_pem = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$pem$$$function_2_load_pem );
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


static PyObject *impl_rsa$pem$$$function_3_save_pem( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_contents = python_pars[ 0 ];
    PyObject *par_pem_marker = python_pars[ 1 ];
    PyObject *var_pem_start = NULL;
    PyObject *var_pem_end = NULL;
    PyObject *var_b64 = NULL;
    PyObject *var_pem_lines = NULL;
    PyObject *var_block_start = NULL;
    PyObject *var_block = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4423956cfdc79ca744d3699f3fde0530;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4423956cfdc79ca744d3699f3fde0530 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4423956cfdc79ca744d3699f3fde0530, codeobj_4423956cfdc79ca744d3699f3fde0530, module_rsa$pem, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4423956cfdc79ca744d3699f3fde0530 = cache_frame_4423956cfdc79ca744d3699f3fde0530;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4423956cfdc79ca744d3699f3fde0530 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4423956cfdc79ca744d3699f3fde0530 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain__markers );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__markers );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_markers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_pem_marker );
        tmp_args_element_name_1 = par_pem_marker;
        frame_4423956cfdc79ca744d3699f3fde0530->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooooooo";
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


            type_description_1 = "oooooooo";
            exception_lineno = 114;
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


            type_description_1 = "oooooooo";
            exception_lineno = 114;
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

                    type_description_1 = "oooooooo";
                    exception_lineno = 114;
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

            type_description_1 = "oooooooo";
            exception_lineno = 114;
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
        assert( var_pem_start == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_pem_start = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_pem_end == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_pem_end = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain_base64 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_contents );
        tmp_args_element_name_2 = par_contents;
        frame_4423956cfdc79ca744d3699f3fde0530->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_standard_b64encode, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4423956cfdc79ca744d3699f3fde0530->m_frame.f_lineno = 116;
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_bytes_chr_10_bytes_empty_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_b64 == NULL );
        var_b64 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT( var_pem_start );
        tmp_list_element_1 = var_pem_start;
        tmp_assign_source_7 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_assign_source_7, 0, tmp_list_element_1 );
        assert( var_pem_lines == NULL );
        var_pem_lines = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain_range );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_range );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "range" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 119;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        tmp_args_element_name_3 = const_int_0;
        CHECK_OBJECT( var_b64 );
        tmp_len_arg_1 = var_b64;
        tmp_args_element_name_4 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = const_int_pos_64;
        frame_4423956cfdc79ca744d3699f3fde0530->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                exception_lineno = 119;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_block_start;
            var_block_start = tmp_assign_source_10;
            Py_INCREF( var_block_start );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( var_b64 );
        tmp_subscribed_name_1 = var_b64;
        CHECK_OBJECT( var_block_start );
        tmp_start_name_1 = var_block_start;
        CHECK_OBJECT( var_block_start );
        tmp_left_name_1 = var_block_start;
        tmp_right_name_1 = const_int_pos_64;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_block;
            var_block = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( var_pem_lines );
        tmp_called_instance_3 = var_pem_lines;
        CHECK_OBJECT( var_block );
        tmp_args_element_name_6 = var_block;
        frame_4423956cfdc79ca744d3699f3fde0530->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_append, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_pem_lines );
        tmp_called_instance_4 = var_pem_lines;
        CHECK_OBJECT( var_pem_end );
        tmp_args_element_name_7 = var_pem_end;
        frame_4423956cfdc79ca744d3699f3fde0530->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_append, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT( var_pem_lines );
        tmp_called_instance_5 = var_pem_lines;
        frame_4423956cfdc79ca744d3699f3fde0530->m_frame.f_lineno = 124;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_bytes_empty_tuple, 0 ) );

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_8;
        tmp_called_instance_6 = const_bytes_chr_10;
        CHECK_OBJECT( var_pem_lines );
        tmp_args_element_name_8 = var_pem_lines;
        frame_4423956cfdc79ca744d3699f3fde0530->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_join, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4423956cfdc79ca744d3699f3fde0530 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4423956cfdc79ca744d3699f3fde0530 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4423956cfdc79ca744d3699f3fde0530 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4423956cfdc79ca744d3699f3fde0530, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4423956cfdc79ca744d3699f3fde0530->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4423956cfdc79ca744d3699f3fde0530, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4423956cfdc79ca744d3699f3fde0530,
        type_description_1,
        par_contents,
        par_pem_marker,
        var_pem_start,
        var_pem_end,
        var_b64,
        var_pem_lines,
        var_block_start,
        var_block
    );


    // Release cached frame.
    if ( frame_4423956cfdc79ca744d3699f3fde0530 == cache_frame_4423956cfdc79ca744d3699f3fde0530 )
    {
        Py_DECREF( frame_4423956cfdc79ca744d3699f3fde0530 );
    }
    cache_frame_4423956cfdc79ca744d3699f3fde0530 = NULL;

    assertFrameObject( frame_4423956cfdc79ca744d3699f3fde0530 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pem$$$function_3_save_pem );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_contents );
    Py_DECREF( par_contents );
    par_contents = NULL;

    CHECK_OBJECT( (PyObject *)par_pem_marker );
    Py_DECREF( par_pem_marker );
    par_pem_marker = NULL;

    CHECK_OBJECT( (PyObject *)var_pem_start );
    Py_DECREF( var_pem_start );
    var_pem_start = NULL;

    CHECK_OBJECT( (PyObject *)var_pem_end );
    Py_DECREF( var_pem_end );
    var_pem_end = NULL;

    CHECK_OBJECT( (PyObject *)var_b64 );
    Py_DECREF( var_b64 );
    var_b64 = NULL;

    CHECK_OBJECT( (PyObject *)var_pem_lines );
    Py_DECREF( var_pem_lines );
    var_pem_lines = NULL;

    Py_XDECREF( var_block_start );
    var_block_start = NULL;

    Py_XDECREF( var_block );
    var_block = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_contents );
    Py_DECREF( par_contents );
    par_contents = NULL;

    CHECK_OBJECT( (PyObject *)par_pem_marker );
    Py_DECREF( par_pem_marker );
    par_pem_marker = NULL;

    Py_XDECREF( var_pem_start );
    var_pem_start = NULL;

    Py_XDECREF( var_pem_end );
    var_pem_end = NULL;

    Py_XDECREF( var_b64 );
    var_b64 = NULL;

    Py_XDECREF( var_pem_lines );
    var_pem_lines = NULL;

    Py_XDECREF( var_block_start );
    var_block_start = NULL;

    Py_XDECREF( var_block );
    var_block = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$pem$$$function_3_save_pem );
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



static PyObject *MAKE_FUNCTION_rsa$pem$$$function_1__markers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pem$$$function_1__markers,
        const_str_plain__markers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d48e4ab7b674735c90196766fc842a74,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$pem,
        const_str_digest_6076aa123f566a80cd2b8723a6fc699a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pem$$$function_2_load_pem(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pem$$$function_2_load_pem,
        const_str_plain_load_pem,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_55c49f1dbaf8371a9fc4c2ab6b0df1fb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$pem,
        const_str_digest_dcbfff9be241487c57c1b6ba08b537a2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pem$$$function_3_save_pem(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pem$$$function_3_save_pem,
        const_str_plain_save_pem,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4423956cfdc79ca744d3699f3fde0530,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$pem,
        const_str_digest_fd21edc8f3998e9bbe46990f377bfa05,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_rsa$pem =
{
    PyModuleDef_HEAD_INIT,
    "rsa.pem",
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
MOD_ENTRY_DECL(rsa$pem)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(rsa$pem)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_rsa$pem );
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
    puts("rsa.pem: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.pem: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.pem: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrsa$pem" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_rsa$pem = Py_InitModule4(
        "rsa.pem",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_rsa$pem = PyModule_Create( &mdef_rsa$pem );
#endif

    moduledict_rsa$pem = MODULE_DICT( module_rsa$pem );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_rsa$pem,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_rsa$pem,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$pem,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$pem,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_rsa$pem );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_10b4a05c1efbc618d78f50cb7defbe0f, module_rsa$pem );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_d9efeab88250c859978649e4c75ef57d;
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
        tmp_assign_source_1 = const_str_digest_4d40a9f609dcd3dcf20bbb847c7d2d29;
        UPDATE_STRING_DICT0( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_39a2d280ffa9e33e3937658f88ba4e89;
        UPDATE_STRING_DICT0( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_d9efeab88250c859978649e4c75ef57d = MAKE_MODULE_FRAME( codeobj_d9efeab88250c859978649e4c75ef57d, module_rsa$pem );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d9efeab88250c859978649e4c75ef57d );
    assert( Py_REFCNT( frame_d9efeab88250c859978649e4c75ef57d ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_39a2d280ffa9e33e3937658f88ba4e89;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_base64;
        tmp_globals_name_1 = (PyObject *)moduledict_rsa$pem;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_d9efeab88250c859978649e4c75ef57d->m_frame.f_lineno = 19;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain_base64, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_865e7095d477d90f1eead964158b0a6f;
        tmp_globals_name_2 = (PyObject *)moduledict_rsa$pem;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_is_bytes_str_plain_range_tuple;
        tmp_level_name_2 = const_int_0;
        frame_d9efeab88250c859978649e4c75ef57d->m_frame.f_lineno = 21;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

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
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_is_bytes );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain_is_bytes, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_range );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_7 );
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
    RESTORE_FRAME_EXCEPTION( frame_d9efeab88250c859978649e4c75ef57d );
#endif
    popFrameStack();

    assertFrameObject( frame_d9efeab88250c859978649e4c75ef57d );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9efeab88250c859978649e4c75ef57d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9efeab88250c859978649e4c75ef57d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9efeab88250c859978649e4c75ef57d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9efeab88250c859978649e4c75ef57d, exception_lineno );
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
        tmp_assign_source_8 = MAKE_FUNCTION_rsa$pem$$$function_1__markers(  );



        UPDATE_STRING_DICT1( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain__markers, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_rsa$pem$$$function_2_load_pem(  );



        UPDATE_STRING_DICT1( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain_load_pem, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_rsa$pem$$$function_3_save_pem(  );



        UPDATE_STRING_DICT1( moduledict_rsa$pem, (Nuitka_StringObject *)const_str_plain_save_pem, tmp_assign_source_10 );
    }

    return MOD_RETURN_VALUE( module_rsa$pem );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
