/* Generated code for Python module 'rsa.transform'
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

/* The "_module_rsa$transform" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rsa$transform;
PyDictObject *moduledict_rsa$transform;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_zero_leading;
static PyObject *const_str_digest_d50084330df1ec53b2e0a37732abf8a3;
extern PyObject *const_str_digest_865e7095d477d90f1eead964158b0a6f;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_padding_size;
static PyObject *const_str_plain_word_bits;
static PyObject *const_str_plain_machine_size;
static PyObject *const_str_plain__byte;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_10a64caf697948d4705873cbb536ecb6;
extern PyObject *const_str_plain_struct;
extern PyObject *const_str_plain_num;
extern PyObject *const_tuple_bytes_chr_0_tuple;
static PyObject *const_str_plain_needle;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_a80f27759fd5462c6fefb7fb44c55228;
static PyObject *const_str_digest_d20f213a9562efc5642e6fb1a6ae1e42;
static PyObject *const_tuple_str_plain_byte_str_plain_is_integer_tuple;
extern PyObject *const_str_plain_hexlify;
static PyObject *const_str_digest_1a55325e9a58ab6c26a808e1d19f6778;
extern PyObject *const_str_plain_rsa;
extern PyObject *const_tuple_str_plain_raw_bytes_tuple;
extern PyObject *const_str_plain_rjust;
extern PyObject *const_str_plain_join;
static PyObject *const_str_plain_leading;
extern PyObject *const_int_pos_16;
static PyObject *const_tuple_5b85b2629df38c4c1d26bef8dcf77e9c_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_7562f3c2ef4e8e348671d755caa9ae88;
extern PyObject *const_str_plain_padding;
static PyObject *const_list_bytes_chr_0_list;
static PyObject *const_str_plain__int2bytes;
extern PyObject *const_str_plain_needed_bytes;
static PyObject *const_str_plain_block_size;
extern PyObject *const_str_plain_insert;
static PyObject *const_str_digest_8c7106014d998e21224f86b1805d8098;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_raw_bytes;
static PyObject *const_str_plain_pack_format;
static PyObject *const_tuple_1c77fb74b4d3a840877f69aff1ea4de4_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_fill_size;
static PyObject *const_str_plain_overflow;
static PyObject *const_str_digest_1567fb9194b9b87f7ee318cdd9e7565c;
static PyObject *const_str_plain_bytes_leading;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_pack;
extern PyObject *const_int_0;
static PyObject *const_str_digest_d447853896acaac00e5480311dd83e77;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_length;
static PyObject *const_str_plain_pack_type;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_get_word_alignment;
extern PyObject *const_str_plain_int2bytes;
extern PyObject *const_bytes_empty;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_max_uint;
extern PyObject *const_str_plain__;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_is_integer;
extern PyObject *const_str_plain_binascii;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_116374ae7c17a14a5d898e3ce7bcbbac;
static PyObject *const_str_digest_3e3eefb473062f550ab7477b6fbe62b2;
extern PyObject *const_str_plain_byte_size;
extern PyObject *const_tuple_str_plain_pack_tuple;
static PyObject *const_str_digest_96cb89071dd92e0c0f4c5875175fbb91;
extern PyObject *const_str_plain_remainder;
extern PyObject *const_str_plain_bytes2int;
extern PyObject *const_int_pos_255;
extern PyObject *const_str_plain_byte;
static PyObject *const_tuple_str_plain_common_str_plain_machine_size_tuple;
extern PyObject *const_tuple_none_none_false_tuple;
static PyObject *const_str_digest_cee9bb4f17d2d1fd57286f83d01c01bf;
extern PyObject *const_str_plain_chunk_size;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_bytes_chr_0;
static PyObject *const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple;
static PyObject *const_str_digest_b8992b41afd23288116c9422d768c7dc;
extern PyObject *const_str_plain_common;
extern PyObject *const_str_plain_number;
static PyObject *const_str_digest_bcb166c7698035d12c835e3a820d37fa;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_zero_leading = UNSTREAM_STRING_ASCII( &constant_bin[ 2745205 ], 12, 1 );
    const_str_digest_d50084330df1ec53b2e0a37732abf8a3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2745217 ], 1321, 0 );
    const_str_plain_padding_size = UNSTREAM_STRING_ASCII( &constant_bin[ 2746538 ], 12, 1 );
    const_str_plain_word_bits = UNSTREAM_STRING_ASCII( &constant_bin[ 2746550 ], 9, 1 );
    const_str_plain_machine_size = UNSTREAM_STRING_ASCII( &constant_bin[ 2733497 ], 12, 1 );
    const_str_plain__byte = UNSTREAM_STRING_ASCII( &constant_bin[ 63029 ], 5, 1 );
    const_str_digest_10a64caf697948d4705873cbb536ecb6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2746559 ], 845, 0 );
    const_str_plain_needle = UNSTREAM_STRING_ASCII( &constant_bin[ 878496 ], 6, 1 );
    const_str_digest_a80f27759fd5462c6fefb7fb44c55228 = UNSTREAM_STRING_ASCII( &constant_bin[ 75229 ], 3, 0 );
    const_str_digest_d20f213a9562efc5642e6fb1a6ae1e42 = UNSTREAM_STRING_ASCII( &constant_bin[ 2747404 ], 47, 0 );
    const_tuple_str_plain_byte_str_plain_is_integer_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_byte_str_plain_is_integer_tuple, 0, const_str_plain_byte ); Py_INCREF( const_str_plain_byte );
    PyTuple_SET_ITEM( const_tuple_str_plain_byte_str_plain_is_integer_tuple, 1, const_str_plain_is_integer ); Py_INCREF( const_str_plain_is_integer );
    const_str_digest_1a55325e9a58ab6c26a808e1d19f6778 = UNSTREAM_STRING_ASCII( &constant_bin[ 2747451 ], 277, 0 );
    const_str_plain_leading = UNSTREAM_STRING_ASCII( &constant_bin[ 27189 ], 7, 1 );
    const_tuple_5b85b2629df38c4c1d26bef8dcf77e9c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_5b85b2629df38c4c1d26bef8dcf77e9c_tuple, 0, const_str_plain_raw_bytes ); Py_INCREF( const_str_plain_raw_bytes );
    PyTuple_SET_ITEM( const_tuple_5b85b2629df38c4c1d26bef8dcf77e9c_tuple, 1, const_str_plain_needle ); Py_INCREF( const_str_plain_needle );
    PyTuple_SET_ITEM( const_tuple_5b85b2629df38c4c1d26bef8dcf77e9c_tuple, 2, const_str_plain_leading ); Py_INCREF( const_str_plain_leading );
    PyTuple_SET_ITEM( const_tuple_5b85b2629df38c4c1d26bef8dcf77e9c_tuple, 3, const_str_plain__byte ); Py_INCREF( const_str_plain__byte );
    PyTuple_SET_ITEM( const_tuple_5b85b2629df38c4c1d26bef8dcf77e9c_tuple, 4, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_digest_7562f3c2ef4e8e348671d755caa9ae88 = UNSTREAM_STRING_ASCII( &constant_bin[ 2747728 ], 45, 0 );
    const_list_bytes_chr_0_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_bytes_chr_0_list, 0, const_bytes_chr_0 ); Py_INCREF( const_bytes_chr_0 );
    const_str_plain__int2bytes = UNSTREAM_STRING_ASCII( &constant_bin[ 2746625 ], 10, 1 );
    const_str_plain_block_size = UNSTREAM_STRING_ASCII( &constant_bin[ 2747090 ], 10, 1 );
    const_str_digest_8c7106014d998e21224f86b1805d8098 = UNSTREAM_STRING_ASCII( &constant_bin[ 2747773 ], 44, 0 );
    const_str_plain_pack_format = UNSTREAM_STRING_ASCII( &constant_bin[ 2747817 ], 11, 1 );
    const_tuple_1c77fb74b4d3a840877f69aff1ea4de4_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_1c77fb74b4d3a840877f69aff1ea4de4_tuple, 0, const_str_plain_number ); Py_INCREF( const_str_plain_number );
    PyTuple_SET_ITEM( const_tuple_1c77fb74b4d3a840877f69aff1ea4de4_tuple, 1, const_str_plain_block_size ); Py_INCREF( const_str_plain_block_size );
    PyTuple_SET_ITEM( const_tuple_1c77fb74b4d3a840877f69aff1ea4de4_tuple, 2, const_str_plain_needed_bytes ); Py_INCREF( const_str_plain_needed_bytes );
    PyTuple_SET_ITEM( const_tuple_1c77fb74b4d3a840877f69aff1ea4de4_tuple, 3, const_str_plain_raw_bytes ); Py_INCREF( const_str_plain_raw_bytes );
    PyTuple_SET_ITEM( const_tuple_1c77fb74b4d3a840877f69aff1ea4de4_tuple, 4, const_str_plain_padding ); Py_INCREF( const_str_plain_padding );
    const_str_plain_fill_size = UNSTREAM_STRING_ASCII( &constant_bin[ 2745424 ], 9, 1 );
    const_str_plain_overflow = UNSTREAM_STRING_ASCII( &constant_bin[ 806784 ], 8, 1 );
    const_str_digest_1567fb9194b9b87f7ee318cdd9e7565c = UNSTREAM_STRING_ASCII( &constant_bin[ 2747828 ], 238, 0 );
    const_str_plain_bytes_leading = UNSTREAM_STRING_ASCII( &constant_bin[ 2748066 ], 13, 1 );
    const_str_digest_d447853896acaac00e5480311dd83e77 = UNSTREAM_STRING_ASCII( &constant_bin[ 2748079 ], 35, 0 );
    const_str_plain_pack_type = UNSTREAM_STRING_ASCII( &constant_bin[ 2748114 ], 9, 1 );
    const_str_plain_max_uint = UNSTREAM_STRING_ASCII( &constant_bin[ 2748123 ], 8, 1 );
    const_str_digest_116374ae7c17a14a5d898e3ce7bcbbac = UNSTREAM_STRING_ASCII( &constant_bin[ 2748131 ], 78, 0 );
    const_str_digest_3e3eefb473062f550ab7477b6fbe62b2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2748209 ], 13, 0 );
    const_str_digest_96cb89071dd92e0c0f4c5875175fbb91 = UNSTREAM_STRING_ASCII( &constant_bin[ 2748222 ], 38, 0 );
    const_tuple_str_plain_common_str_plain_machine_size_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_common_str_plain_machine_size_tuple, 0, const_str_plain_common ); Py_INCREF( const_str_plain_common );
    PyTuple_SET_ITEM( const_tuple_str_plain_common_str_plain_machine_size_tuple, 1, const_str_plain_machine_size ); Py_INCREF( const_str_plain_machine_size );
    const_str_digest_cee9bb4f17d2d1fd57286f83d01c01bf = UNSTREAM_STRING_ASCII( &constant_bin[ 2748260 ], 22, 0 );
    const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 0, const_str_plain_number ); Py_INCREF( const_str_plain_number );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 1, const_str_plain_fill_size ); Py_INCREF( const_str_plain_fill_size );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 2, const_str_plain_chunk_size ); Py_INCREF( const_str_plain_chunk_size );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 3, const_str_plain_overflow ); Py_INCREF( const_str_plain_overflow );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 4, const_str_plain_raw_bytes ); Py_INCREF( const_str_plain_raw_bytes );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 5, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 6, const_str_plain_word_bits ); Py_INCREF( const_str_plain_word_bits );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 7, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 8, const_str_plain_max_uint ); Py_INCREF( const_str_plain_max_uint );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 9, const_str_plain_pack_type ); Py_INCREF( const_str_plain_pack_type );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 10, const_str_plain_pack_format ); Py_INCREF( const_str_plain_pack_format );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 11, const_str_plain_zero_leading ); Py_INCREF( const_str_plain_zero_leading );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 12, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 13, const_str_plain_remainder ); Py_INCREF( const_str_plain_remainder );
    PyTuple_SET_ITEM( const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 14, const_str_plain_padding_size ); Py_INCREF( const_str_plain_padding_size );
    const_str_digest_b8992b41afd23288116c9422d768c7dc = UNSTREAM_STRING_ASCII( &constant_bin[ 2748282 ], 45, 0 );
    const_str_digest_bcb166c7698035d12c835e3a820d37fa = UNSTREAM_STRING_ASCII( &constant_bin[ 2748327 ], 48, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_rsa$transform( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_57be0e988d636c893f78f4254c4bab9f;
static PyCodeObject *codeobj_e16629fe806c99f87f25de4c4caa471e;
static PyCodeObject *codeobj_61b88195c667701a88152a0798e72b6d;
static PyCodeObject *codeobj_5d66e6de9948d5e119b77be70ddb9805;
static PyCodeObject *codeobj_259c475015e23122df765a838237dfc7;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_8c7106014d998e21224f86b1805d8098;
    codeobj_57be0e988d636c893f78f4254c4bab9f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_cee9bb4f17d2d1fd57286f83d01c01bf, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e16629fe806c99f87f25de4c4caa471e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__int2bytes, 46, const_tuple_1c77fb74b4d3a840877f69aff1ea4de4_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_61b88195c667701a88152a0798e72b6d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bytes2int, 31, const_tuple_str_plain_raw_bytes_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5d66e6de9948d5e119b77be70ddb9805 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bytes_leading, 111, const_tuple_5b85b2629df38c4c1d26bef8dcf77e9c_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_259c475015e23122df765a838237dfc7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_int2bytes, 136, const_tuple_13044d94e7d3567ea9464b0806508ecd_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_rsa$transform$$$function_1_bytes2int(  );


static PyObject *MAKE_FUNCTION_rsa$transform$$$function_2__int2bytes( PyObject *defaults );


static PyObject *MAKE_FUNCTION_rsa$transform$$$function_3_bytes_leading( PyObject *defaults );


static PyObject *MAKE_FUNCTION_rsa$transform$$$function_4_int2bytes( PyObject *defaults );


// The module function definitions.
static PyObject *impl_rsa$transform$$$function_1_bytes2int( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_raw_bytes = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_61b88195c667701a88152a0798e72b6d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_61b88195c667701a88152a0798e72b6d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_61b88195c667701a88152a0798e72b6d, codeobj_61b88195c667701a88152a0798e72b6d, module_rsa$transform, sizeof(void *) );
    frame_61b88195c667701a88152a0798e72b6d = cache_frame_61b88195c667701a88152a0798e72b6d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_61b88195c667701a88152a0798e72b6d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_61b88195c667701a88152a0798e72b6d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_value_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_base_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_binascii );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_binascii );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "binascii" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_raw_bytes );
        tmp_args_element_name_1 = par_raw_bytes;
        frame_61b88195c667701a88152a0798e72b6d->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_value_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_hexlify, call_args );
        }

        if ( tmp_value_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_base_name_1 = const_int_pos_16;
        tmp_return_value = BUILTIN_INT2( tmp_value_name_1, tmp_base_name_1 );
        Py_DECREF( tmp_value_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61b88195c667701a88152a0798e72b6d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_61b88195c667701a88152a0798e72b6d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61b88195c667701a88152a0798e72b6d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_61b88195c667701a88152a0798e72b6d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_61b88195c667701a88152a0798e72b6d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_61b88195c667701a88152a0798e72b6d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_61b88195c667701a88152a0798e72b6d,
        type_description_1,
        par_raw_bytes
    );


    // Release cached frame.
    if ( frame_61b88195c667701a88152a0798e72b6d == cache_frame_61b88195c667701a88152a0798e72b6d )
    {
        Py_DECREF( frame_61b88195c667701a88152a0798e72b6d );
    }
    cache_frame_61b88195c667701a88152a0798e72b6d = NULL;

    assertFrameObject( frame_61b88195c667701a88152a0798e72b6d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$transform$$$function_1_bytes2int );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_raw_bytes );
    Py_DECREF( par_raw_bytes );
    par_raw_bytes = NULL;

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

    CHECK_OBJECT( (PyObject *)par_raw_bytes );
    Py_DECREF( par_raw_bytes );
    par_raw_bytes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$transform$$$function_1_bytes2int );
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


static PyObject *impl_rsa$transform$$$function_2__int2bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_number = python_pars[ 0 ];
    PyObject *par_block_size = python_pars[ 1 ];
    PyObject *var_needed_bytes = NULL;
    PyObject *var_raw_bytes = NULL;
    PyObject *var_padding = NULL;
    struct Nuitka_FrameObject *frame_e16629fe806c99f87f25de4c4caa471e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e16629fe806c99f87f25de4c4caa471e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e16629fe806c99f87f25de4c4caa471e, codeobj_e16629fe806c99f87f25de4c4caa471e, module_rsa$transform, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e16629fe806c99f87f25de4c4caa471e = cache_frame_e16629fe806c99f87f25de4c4caa471e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e16629fe806c99f87f25de4c4caa471e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e16629fe806c99f87f25de4c4caa471e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_is_integer );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_integer );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_integer" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_number );
        tmp_args_element_name_1 = par_number;
        frame_e16629fe806c99f87f25de4c4caa471e->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooooo";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_source_name_1;
            tmp_left_name_1 = const_str_digest_b8992b41afd23288116c9422d768c7dc;
            CHECK_OBJECT( par_number );
            tmp_source_name_1 = par_number;
            tmp_right_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_e16629fe806c99f87f25de4c4caa471e->m_frame.f_lineno = 77;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 77;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_number );
        tmp_compexpr_left_1 = par_number;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "ooooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_left_name_2 = const_str_digest_d447853896acaac00e5480311dd83e77;
            CHECK_OBJECT( par_number );
            tmp_right_name_2 = par_number;
            tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 81;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_e16629fe806c99f87f25de4c4caa471e->m_frame.f_lineno = 81;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 81;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_number );
        tmp_compexpr_left_2 = par_number;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = const_int_pos_1;
            assert( var_needed_bytes == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_needed_bytes = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = LIST_COPY( const_list_bytes_chr_0_list );
            assert( var_raw_bytes == NULL );
            var_raw_bytes = tmp_assign_source_2;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_common );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_common );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "common" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 88;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_number );
            tmp_args_element_name_2 = par_number;
            frame_e16629fe806c99f87f25de4c4caa471e->m_frame.f_lineno = 88;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_byte_size, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_needed_bytes == NULL );
            var_needed_bytes = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = PyList_New( 0 );
            assert( var_raw_bytes == NULL );
            var_raw_bytes = tmp_assign_source_4;
        }
        branch_end_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_block_size );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_block_size );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_block_size );
        tmp_compexpr_left_3 = par_block_size;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
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
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_needed_bytes );
            tmp_compexpr_left_4 = var_needed_bytes;
            CHECK_OBJECT( par_block_size );
            tmp_compexpr_right_4 = par_block_size;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_1;
                tmp_left_name_3 = const_str_digest_bcb166c7698035d12c835e3a820d37fa;
                CHECK_OBJECT( var_needed_bytes );
                tmp_tuple_element_1 = var_needed_bytes;
                tmp_right_name_3 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( par_block_size );
                tmp_tuple_element_1 = par_block_size;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_1 );
                tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_make_exception_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 94;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                frame_e16629fe806c99f87f25de4c4caa471e->m_frame.f_lineno = 94;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_OverflowError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_3 );
                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 94;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            branch_no_5:;
        }
        branch_no_4:;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_number );
        tmp_compexpr_left_5 = par_number;
        tmp_compexpr_right_5 = const_int_0;
        tmp_operand_name_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        goto loop_end_1;
        branch_no_6:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_raw_bytes );
        tmp_source_name_2 = var_raw_bytes;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_insert );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_int_0;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_byte );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_number );
        tmp_left_name_4 = par_number;
        tmp_right_name_4 = const_int_pos_255;
        tmp_args_element_name_5 = BINARY_OPERATION( PyNumber_And, tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_e16629fe806c99f87f25de4c4caa471e->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_e16629fe806c99f87f25de4c4caa471e->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_number );
        tmp_left_name_5 = par_number;
        tmp_right_name_5 = const_int_pos_8;
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceRshift, &tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_left_name_5;
        par_number = tmp_assign_source_5;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_block_size );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_block_size );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_block_size );
        tmp_compexpr_left_6 = par_block_size;
        tmp_compexpr_right_6 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_7 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_7 = tmp_and_left_value_2;
        and_end_2:;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_6;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_6;
            PyObject *tmp_right_name_7;
            CHECK_OBJECT( par_block_size );
            tmp_left_name_7 = par_block_size;
            CHECK_OBJECT( var_needed_bytes );
            tmp_right_name_6 = var_needed_bytes;
            tmp_left_name_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_6 );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_7 = const_bytes_chr_0;
            tmp_assign_source_6 = BINARY_OPERATION_MUL_OBJECT_BYTES( tmp_left_name_6, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_6 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_padding == NULL );
            var_padding = tmp_assign_source_6;
        }
        goto branch_end_7;
        branch_no_7:;
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_bytes_empty;
            assert( var_padding == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_padding = tmp_assign_source_7;
        }
        branch_end_7:;
    }
    {
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( var_padding );
        tmp_left_name_8 = var_padding;
        tmp_called_instance_2 = const_bytes_empty;
        CHECK_OBJECT( var_raw_bytes );
        tmp_args_element_name_6 = var_raw_bytes;
        frame_e16629fe806c99f87f25de4c4caa471e->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_right_name_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_join, call_args );
        }

        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e16629fe806c99f87f25de4c4caa471e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e16629fe806c99f87f25de4c4caa471e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e16629fe806c99f87f25de4c4caa471e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e16629fe806c99f87f25de4c4caa471e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e16629fe806c99f87f25de4c4caa471e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e16629fe806c99f87f25de4c4caa471e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e16629fe806c99f87f25de4c4caa471e,
        type_description_1,
        par_number,
        par_block_size,
        var_needed_bytes,
        var_raw_bytes,
        var_padding
    );


    // Release cached frame.
    if ( frame_e16629fe806c99f87f25de4c4caa471e == cache_frame_e16629fe806c99f87f25de4c4caa471e )
    {
        Py_DECREF( frame_e16629fe806c99f87f25de4c4caa471e );
    }
    cache_frame_e16629fe806c99f87f25de4c4caa471e = NULL;

    assertFrameObject( frame_e16629fe806c99f87f25de4c4caa471e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$transform$$$function_2__int2bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_number );
    Py_DECREF( par_number );
    par_number = NULL;

    CHECK_OBJECT( (PyObject *)par_block_size );
    Py_DECREF( par_block_size );
    par_block_size = NULL;

    CHECK_OBJECT( (PyObject *)var_needed_bytes );
    Py_DECREF( var_needed_bytes );
    var_needed_bytes = NULL;

    CHECK_OBJECT( (PyObject *)var_raw_bytes );
    Py_DECREF( var_raw_bytes );
    var_raw_bytes = NULL;

    CHECK_OBJECT( (PyObject *)var_padding );
    Py_DECREF( var_padding );
    var_padding = NULL;

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

    Py_XDECREF( par_number );
    par_number = NULL;

    CHECK_OBJECT( (PyObject *)par_block_size );
    Py_DECREF( par_block_size );
    par_block_size = NULL;

    Py_XDECREF( var_needed_bytes );
    var_needed_bytes = NULL;

    Py_XDECREF( var_raw_bytes );
    var_raw_bytes = NULL;

    Py_XDECREF( var_padding );
    var_padding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$transform$$$function_2__int2bytes );
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


static PyObject *impl_rsa$transform$$$function_3_bytes_leading( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_raw_bytes = python_pars[ 0 ];
    PyObject *par_needle = python_pars[ 1 ];
    PyObject *var_leading = NULL;
    PyObject *var__byte = NULL;
    PyObject *var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_5d66e6de9948d5e119b77be70ddb9805;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5d66e6de9948d5e119b77be70ddb9805 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert( var_leading == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_leading = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5d66e6de9948d5e119b77be70ddb9805, codeobj_5d66e6de9948d5e119b77be70ddb9805, module_rsa$transform, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5d66e6de9948d5e119b77be70ddb9805 = cache_frame_5d66e6de9948d5e119b77be70ddb9805;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5d66e6de9948d5e119b77be70ddb9805 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5d66e6de9948d5e119b77be70ddb9805 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_needle );
        tmp_subscribed_name_1 = par_needle;
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var__byte == NULL );
        var__byte = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_raw_bytes );
        tmp_iter_arg_1 = par_raw_bytes;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                exception_lineno = 128;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_5;
            Py_INCREF( var_x );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_x );
        tmp_compexpr_left_1 = var_x;
        CHECK_OBJECT( var__byte );
        tmp_compexpr_right_1 = var__byte;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            if ( var_leading == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "leading" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 130;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }

            tmp_left_name_1 = var_leading;
            tmp_right_name_1 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 130;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = tmp_left_name_1;
            var_leading = tmp_assign_source_6;

        }
        goto branch_end_1;
        branch_no_1:;
        goto loop_end_1;
        branch_end_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
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
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    if ( var_leading == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "leading" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_leading;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d66e6de9948d5e119b77be70ddb9805 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d66e6de9948d5e119b77be70ddb9805 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d66e6de9948d5e119b77be70ddb9805 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5d66e6de9948d5e119b77be70ddb9805, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5d66e6de9948d5e119b77be70ddb9805->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5d66e6de9948d5e119b77be70ddb9805, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5d66e6de9948d5e119b77be70ddb9805,
        type_description_1,
        par_raw_bytes,
        par_needle,
        var_leading,
        var__byte,
        var_x
    );


    // Release cached frame.
    if ( frame_5d66e6de9948d5e119b77be70ddb9805 == cache_frame_5d66e6de9948d5e119b77be70ddb9805 )
    {
        Py_DECREF( frame_5d66e6de9948d5e119b77be70ddb9805 );
    }
    cache_frame_5d66e6de9948d5e119b77be70ddb9805 = NULL;

    assertFrameObject( frame_5d66e6de9948d5e119b77be70ddb9805 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$transform$$$function_3_bytes_leading );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_raw_bytes );
    Py_DECREF( par_raw_bytes );
    par_raw_bytes = NULL;

    CHECK_OBJECT( (PyObject *)par_needle );
    Py_DECREF( par_needle );
    par_needle = NULL;

    Py_XDECREF( var_leading );
    var_leading = NULL;

    CHECK_OBJECT( (PyObject *)var__byte );
    Py_DECREF( var__byte );
    var__byte = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_raw_bytes );
    Py_DECREF( par_raw_bytes );
    par_raw_bytes = NULL;

    CHECK_OBJECT( (PyObject *)par_needle );
    Py_DECREF( par_needle );
    par_needle = NULL;

    Py_XDECREF( var_leading );
    var_leading = NULL;

    Py_XDECREF( var__byte );
    var__byte = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$transform$$$function_3_bytes_leading );
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


static PyObject *impl_rsa$transform$$$function_4_int2bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_number = python_pars[ 0 ];
    PyObject *par_fill_size = python_pars[ 1 ];
    PyObject *par_chunk_size = python_pars[ 2 ];
    PyObject *par_overflow = python_pars[ 3 ];
    PyObject *var_raw_bytes = NULL;
    PyObject *var_num = NULL;
    PyObject *var_word_bits = NULL;
    PyObject *var__ = NULL;
    PyObject *var_max_uint = NULL;
    PyObject *var_pack_type = NULL;
    PyObject *var_pack_format = NULL;
    PyObject *var_zero_leading = NULL;
    PyObject *var_length = NULL;
    PyObject *var_remainder = NULL;
    PyObject *var_padding_size = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_259c475015e23122df765a838237dfc7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_259c475015e23122df765a838237dfc7 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_259c475015e23122df765a838237dfc7, codeobj_259c475015e23122df765a838237dfc7, module_rsa$transform, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_259c475015e23122df765a838237dfc7 = cache_frame_259c475015e23122df765a838237dfc7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_259c475015e23122df765a838237dfc7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_259c475015e23122df765a838237dfc7 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_number );
        tmp_compexpr_left_1 = par_number;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_96cb89071dd92e0c0f4c5875175fbb91;
            CHECK_OBJECT( par_number );
            tmp_right_name_1 = par_number;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 172;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_259c475015e23122df765a838237dfc7->m_frame.f_lineno = 172;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 172;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_fill_size );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_fill_size );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_chunk_size );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_chunk_size );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_d20f213a9562efc5642e6fb1a6ae1e42;
            frame_259c475015e23122df765a838237dfc7->m_frame.f_lineno = 175;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 175;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_op_bitand_res_1;
        CHECK_OBJECT( par_number );
        tmp_left_name_2 = par_number;
        tmp_right_name_2 = const_int_pos_1;
        tmp_op_bitand_res_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_op_bitand_res_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_op_bitand_res_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_bytes_empty;
        assert( var_raw_bytes == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_raw_bytes = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( par_number );
        tmp_assign_source_2 = par_number;
        assert( var_num == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_num = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_machine_size );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_machine_size );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "machine_size" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 184;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_num );
        tmp_args_element_name_1 = var_num;
        frame_259c475015e23122df765a838237dfc7->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_word_alignment, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 4 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 184;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 4 );
        if ( tmp_assign_source_5 == NULL )
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 184;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_3, 2, 4 );
        if ( tmp_assign_source_6 == NULL )
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 184;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_4, 3, 4 );
        if ( tmp_assign_source_7 == NULL )
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 184;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_7;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 184;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 184;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert( var_word_bits == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_word_bits = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert( var__ == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var__ = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
        assert( var_max_uint == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_max_uint = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;
        assert( var_pack_type == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_pack_type = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_left_name_3 = const_str_digest_a80f27759fd5462c6fefb7fb44c55228;
        CHECK_OBJECT( var_pack_type );
        tmp_right_name_3 = var_pack_type;
        tmp_assign_source_12 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pack_format == NULL );
        var_pack_format = tmp_assign_source_12;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_num );
        tmp_compexpr_left_2 = var_num;
        tmp_compexpr_right_2 = const_int_0;
        tmp_operand_name_1 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        goto loop_end_1;
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_pack );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pack );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pack" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_pack_format );
        tmp_args_element_name_2 = var_pack_format;
        CHECK_OBJECT( var_num );
        tmp_left_name_5 = var_num;
        CHECK_OBJECT( var_max_uint );
        tmp_right_name_4 = var_max_uint;
        tmp_args_element_name_3 = BINARY_OPERATION( PyNumber_And, tmp_left_name_5, tmp_right_name_4 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_259c475015e23122df765a838237dfc7->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_raw_bytes );
        tmp_right_name_5 = var_raw_bytes;
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_raw_bytes;
            assert( old != NULL );
            var_raw_bytes = tmp_assign_source_13;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_num );
        tmp_left_name_6 = var_num;
        CHECK_OBJECT( var_word_bits );
        tmp_right_name_6 = var_word_bits;
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceRshift, &tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = tmp_left_name_6;
        var_num = tmp_assign_source_14;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_bytes_leading );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes_leading );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes_leading" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 190;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_raw_bytes );
        tmp_args_element_name_4 = var_raw_bytes;
        frame_259c475015e23122df765a838237dfc7->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_zero_leading == NULL );
        var_zero_leading = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_number );
        tmp_compexpr_left_3 = par_number;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = const_bytes_chr_0;
            {
                PyObject *old = var_raw_bytes;
                assert( old != NULL );
                var_raw_bytes = tmp_assign_source_16;
                Py_INCREF( var_raw_bytes );
                Py_DECREF( old );
            }

        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        if ( var_raw_bytes == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "raw_bytes" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 194;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = var_raw_bytes;
        CHECK_OBJECT( var_zero_leading );
        tmp_start_name_1 = var_zero_leading;
        tmp_stop_name_1 = Py_None;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_raw_bytes;
            var_raw_bytes = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_raw_bytes );
        tmp_len_arg_1 = var_raw_bytes;
        tmp_assign_source_18 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_length == NULL );
        var_length = tmp_assign_source_18;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_fill_size );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_fill_size );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_fill_size );
        tmp_compexpr_left_4 = par_fill_size;
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_5 = tmp_and_left_value_2;
        and_end_2:;
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
            nuitka_bool tmp_condition_result_6;
            int tmp_and_left_truth_3;
            nuitka_bool tmp_and_left_value_3;
            nuitka_bool tmp_and_right_value_3;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( par_overflow );
            tmp_operand_name_2 = par_overflow;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 198;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_3 == 1 )
            {
                goto and_right_3;
            }
            else
            {
                goto and_left_3;
            }
            and_right_3:;
            CHECK_OBJECT( var_length );
            tmp_compexpr_left_5 = var_length;
            CHECK_OBJECT( par_fill_size );
            tmp_compexpr_right_5 = par_fill_size;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 198;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_6 = tmp_and_right_value_3;
            goto and_end_3;
            and_left_3:;
            tmp_condition_result_6 = tmp_and_left_value_3;
            and_end_3:;
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                PyObject *tmp_tuple_element_1;
                tmp_left_name_7 = const_str_digest_7562f3c2ef4e8e348671d755caa9ae88;
                CHECK_OBJECT( var_length );
                tmp_tuple_element_1 = var_length;
                tmp_right_name_7 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( par_fill_size );
                tmp_tuple_element_1 = par_fill_size;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_right_name_7, 1, tmp_tuple_element_1 );
                tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_right_name_7 );
                if ( tmp_make_exception_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 200;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_259c475015e23122df765a838237dfc7->m_frame.f_lineno = 199;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_OverflowError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_3 );
                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 199;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_6:;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( var_raw_bytes );
            tmp_called_instance_2 = var_raw_bytes;
            CHECK_OBJECT( par_fill_size );
            tmp_args_element_name_5 = par_fill_size;
            tmp_args_element_name_6 = const_bytes_chr_0;
            frame_259c475015e23122df765a838237dfc7->m_frame.f_lineno = 203;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_assign_source_19 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_rjust, call_args );
            }

            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_raw_bytes;
                assert( old != NULL );
                var_raw_bytes = tmp_assign_source_19;
                Py_DECREF( old );
            }

        }
        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_7;
            int tmp_and_left_truth_4;
            nuitka_bool tmp_and_left_value_4;
            nuitka_bool tmp_and_right_value_4;
            int tmp_truth_name_4;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( par_chunk_size );
            tmp_truth_name_4 = CHECK_IF_TRUE( par_chunk_size );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_4 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_4 == 1 )
            {
                goto and_right_4;
            }
            else
            {
                goto and_left_4;
            }
            and_right_4:;
            CHECK_OBJECT( par_chunk_size );
            tmp_compexpr_left_6 = par_chunk_size;
            tmp_compexpr_right_6 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_7 = tmp_and_right_value_4;
            goto and_end_4;
            and_left_4:;
            tmp_condition_result_7 = tmp_and_left_value_4;
            and_end_4:;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_7;
            }
            else
            {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_assign_source_20;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_8;
                CHECK_OBJECT( var_length );
                tmp_left_name_8 = var_length;
                CHECK_OBJECT( par_chunk_size );
                tmp_right_name_8 = par_chunk_size;
                tmp_assign_source_20 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
                if ( tmp_assign_source_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_remainder == NULL );
                var_remainder = tmp_assign_source_20;
            }
            {
                nuitka_bool tmp_condition_result_8;
                int tmp_truth_name_5;
                CHECK_OBJECT( var_remainder );
                tmp_truth_name_5 = CHECK_IF_TRUE( var_remainder );
                if ( tmp_truth_name_5 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 206;
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_8 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_21;
                    PyObject *tmp_left_name_9;
                    PyObject *tmp_right_name_9;
                    CHECK_OBJECT( par_chunk_size );
                    tmp_left_name_9 = par_chunk_size;
                    CHECK_OBJECT( var_remainder );
                    tmp_right_name_9 = var_remainder;
                    tmp_assign_source_21 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
                    if ( tmp_assign_source_21 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 207;
                        type_description_1 = "ooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_padding_size == NULL );
                    var_padding_size = tmp_assign_source_21;
                }
                {
                    PyObject *tmp_assign_source_22;
                    PyObject *tmp_called_name_3;
                    PyObject *tmp_source_name_1;
                    PyObject *tmp_args_element_name_7;
                    PyObject *tmp_left_name_10;
                    PyObject *tmp_right_name_10;
                    PyObject *tmp_args_element_name_8;
                    CHECK_OBJECT( var_raw_bytes );
                    tmp_source_name_1 = var_raw_bytes;
                    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rjust );
                    if ( tmp_called_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 208;
                        type_description_1 = "ooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_length );
                    tmp_left_name_10 = var_length;
                    CHECK_OBJECT( var_padding_size );
                    tmp_right_name_10 = var_padding_size;
                    tmp_args_element_name_7 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_10, tmp_right_name_10 );
                    if ( tmp_args_element_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_3 );

                        exception_lineno = 208;
                        type_description_1 = "ooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_8 = const_bytes_chr_0;
                    frame_259c475015e23122df765a838237dfc7->m_frame.f_lineno = 208;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                    }

                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_element_name_7 );
                    if ( tmp_assign_source_22 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 208;
                        type_description_1 = "ooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_raw_bytes;
                        assert( old != NULL );
                        var_raw_bytes = tmp_assign_source_22;
                        Py_DECREF( old );
                    }

                }
                branch_no_8:;
            }
            branch_no_7:;
        }
        branch_end_5:;
    }
    if ( var_raw_bytes == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "raw_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_raw_bytes;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_259c475015e23122df765a838237dfc7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_259c475015e23122df765a838237dfc7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_259c475015e23122df765a838237dfc7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_259c475015e23122df765a838237dfc7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_259c475015e23122df765a838237dfc7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_259c475015e23122df765a838237dfc7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_259c475015e23122df765a838237dfc7,
        type_description_1,
        par_number,
        par_fill_size,
        par_chunk_size,
        par_overflow,
        var_raw_bytes,
        var_num,
        var_word_bits,
        var__,
        var_max_uint,
        var_pack_type,
        var_pack_format,
        var_zero_leading,
        var_length,
        var_remainder,
        var_padding_size
    );


    // Release cached frame.
    if ( frame_259c475015e23122df765a838237dfc7 == cache_frame_259c475015e23122df765a838237dfc7 )
    {
        Py_DECREF( frame_259c475015e23122df765a838237dfc7 );
    }
    cache_frame_259c475015e23122df765a838237dfc7 = NULL;

    assertFrameObject( frame_259c475015e23122df765a838237dfc7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$transform$$$function_4_int2bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_number );
    Py_DECREF( par_number );
    par_number = NULL;

    CHECK_OBJECT( (PyObject *)par_fill_size );
    Py_DECREF( par_fill_size );
    par_fill_size = NULL;

    CHECK_OBJECT( (PyObject *)par_chunk_size );
    Py_DECREF( par_chunk_size );
    par_chunk_size = NULL;

    CHECK_OBJECT( (PyObject *)par_overflow );
    Py_DECREF( par_overflow );
    par_overflow = NULL;

    Py_XDECREF( var_raw_bytes );
    var_raw_bytes = NULL;

    CHECK_OBJECT( (PyObject *)var_num );
    Py_DECREF( var_num );
    var_num = NULL;

    CHECK_OBJECT( (PyObject *)var_word_bits );
    Py_DECREF( var_word_bits );
    var_word_bits = NULL;

    CHECK_OBJECT( (PyObject *)var__ );
    Py_DECREF( var__ );
    var__ = NULL;

    CHECK_OBJECT( (PyObject *)var_max_uint );
    Py_DECREF( var_max_uint );
    var_max_uint = NULL;

    CHECK_OBJECT( (PyObject *)var_pack_type );
    Py_DECREF( var_pack_type );
    var_pack_type = NULL;

    CHECK_OBJECT( (PyObject *)var_pack_format );
    Py_DECREF( var_pack_format );
    var_pack_format = NULL;

    CHECK_OBJECT( (PyObject *)var_zero_leading );
    Py_DECREF( var_zero_leading );
    var_zero_leading = NULL;

    CHECK_OBJECT( (PyObject *)var_length );
    Py_DECREF( var_length );
    var_length = NULL;

    Py_XDECREF( var_remainder );
    var_remainder = NULL;

    Py_XDECREF( var_padding_size );
    var_padding_size = NULL;

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

    CHECK_OBJECT( (PyObject *)par_number );
    Py_DECREF( par_number );
    par_number = NULL;

    CHECK_OBJECT( (PyObject *)par_fill_size );
    Py_DECREF( par_fill_size );
    par_fill_size = NULL;

    CHECK_OBJECT( (PyObject *)par_chunk_size );
    Py_DECREF( par_chunk_size );
    par_chunk_size = NULL;

    CHECK_OBJECT( (PyObject *)par_overflow );
    Py_DECREF( par_overflow );
    par_overflow = NULL;

    Py_XDECREF( var_raw_bytes );
    var_raw_bytes = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_word_bits );
    var_word_bits = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_max_uint );
    var_max_uint = NULL;

    Py_XDECREF( var_pack_type );
    var_pack_type = NULL;

    Py_XDECREF( var_pack_format );
    var_pack_format = NULL;

    Py_XDECREF( var_zero_leading );
    var_zero_leading = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    Py_XDECREF( var_remainder );
    var_remainder = NULL;

    Py_XDECREF( var_padding_size );
    var_padding_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$transform$$$function_4_int2bytes );
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



static PyObject *MAKE_FUNCTION_rsa$transform$$$function_1_bytes2int(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$transform$$$function_1_bytes2int,
        const_str_plain_bytes2int,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_61b88195c667701a88152a0798e72b6d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$transform,
        const_str_digest_1567fb9194b9b87f7ee318cdd9e7565c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$transform$$$function_2__int2bytes( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$transform$$$function_2__int2bytes,
        const_str_plain__int2bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e16629fe806c99f87f25de4c4caa471e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$transform,
        const_str_digest_10a64caf697948d4705873cbb536ecb6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$transform$$$function_3_bytes_leading( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$transform$$$function_3_bytes_leading,
        const_str_plain_bytes_leading,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5d66e6de9948d5e119b77be70ddb9805,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$transform,
        const_str_digest_1a55325e9a58ab6c26a808e1d19f6778,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$transform$$$function_4_int2bytes( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$transform$$$function_4_int2bytes,
        const_str_plain_int2bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_259c475015e23122df765a838237dfc7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$transform,
        const_str_digest_d50084330df1ec53b2e0a37732abf8a3,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_rsa$transform =
{
    PyModuleDef_HEAD_INIT,
    "rsa.transform",
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
MOD_ENTRY_DECL(rsa$transform)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(rsa$transform)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_rsa$transform );
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
    puts("rsa.transform: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.transform: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.transform: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrsa$transform" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_rsa$transform = Py_InitModule4(
        "rsa.transform",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_rsa$transform = PyModule_Create( &mdef_rsa$transform );
#endif

    moduledict_rsa$transform = MODULE_DICT( module_rsa$transform );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_rsa$transform,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_rsa$transform,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$transform,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$transform,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_rsa$transform );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_3e3eefb473062f550ab7477b6fbe62b2, module_rsa$transform );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_57be0e988d636c893f78f4254c4bab9f;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_116374ae7c17a14a5d898e3ce7bcbbac;
        UPDATE_STRING_DICT0( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_8c7106014d998e21224f86b1805d8098;
        UPDATE_STRING_DICT0( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_57be0e988d636c893f78f4254c4bab9f = MAKE_MODULE_FRAME( codeobj_57be0e988d636c893f78f4254c4bab9f, module_rsa$transform );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_57be0e988d636c893f78f4254c4bab9f );
    assert( Py_REFCNT( frame_57be0e988d636c893f78f4254c4bab9f ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_8c7106014d998e21224f86b1805d8098;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_57be0e988d636c893f78f4254c4bab9f->m_frame.f_lineno = 22;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_binascii;
        tmp_globals_name_1 = (PyObject *)moduledict_rsa$transform;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_57be0e988d636c893f78f4254c4bab9f->m_frame.f_lineno = 24;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_binascii, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_struct;
        tmp_globals_name_2 = (PyObject *)moduledict_rsa$transform;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_pack_tuple;
        tmp_level_name_2 = const_int_0;
        frame_57be0e988d636c893f78f4254c4bab9f->m_frame.f_lineno = 25;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_pack );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_pack, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_865e7095d477d90f1eead964158b0a6f;
        tmp_globals_name_3 = (PyObject *)moduledict_rsa$transform;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_byte_str_plain_is_integer_tuple;
        tmp_level_name_3 = const_int_0;
        frame_57be0e988d636c893f78f4254c4bab9f->m_frame.f_lineno = 27;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_byte );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_byte, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_is_integer );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_is_integer, tmp_assign_source_9 );
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_rsa;
        tmp_globals_name_4 = (PyObject *)moduledict_rsa$transform;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_common_str_plain_machine_size_tuple;
        tmp_level_name_4 = const_int_0;
        frame_57be0e988d636c893f78f4254c4bab9f->m_frame.f_lineno = 28;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_common );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_common, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_machine_size );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_machine_size, tmp_assign_source_12 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_57be0e988d636c893f78f4254c4bab9f );
#endif
    popFrameStack();

    assertFrameObject( frame_57be0e988d636c893f78f4254c4bab9f );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_57be0e988d636c893f78f4254c4bab9f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_57be0e988d636c893f78f4254c4bab9f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_57be0e988d636c893f78f4254c4bab9f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_57be0e988d636c893f78f4254c4bab9f, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_rsa$transform$$$function_1_bytes2int(  );



        UPDATE_STRING_DICT1( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_bytes2int, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_14 = MAKE_FUNCTION_rsa$transform$$$function_2__int2bytes( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain__int2bytes, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_bytes_chr_0_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_15 = MAKE_FUNCTION_rsa$transform$$$function_3_bytes_leading( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_bytes_leading, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_none_false_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_16 = MAKE_FUNCTION_rsa$transform$$$function_4_int2bytes( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_rsa$transform, (Nuitka_StringObject *)const_str_plain_int2bytes, tmp_assign_source_16 );
    }

    return MOD_RETURN_VALUE( module_rsa$transform );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
