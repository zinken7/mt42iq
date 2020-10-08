/* Generated code for Python module 'pluggy._tracing'
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

/* The "_module_pluggy$_tracing" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pluggy$_tracing;
PyDictObject *moduledict_pluggy$_tracing;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_tuple_str_plain_self_str_plain_args_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_str_plain_self_str_plain_tags_str_plain_processor_tuple;
extern PyObject *const_str_plain_dict;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_digest_ae68d00ba7f3e57416298649e2191fc4;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_d5b8e3b30c90e0ce1cd1283b2c829cdd;
extern PyObject *const_str_plain_items;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_None;
extern PyObject *const_tuple_str_chr_58_tuple;
extern PyObject *const_str_plain_join;
static PyObject *const_str_digest_7f3d8162f362caace081f223b9545d0a;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_root;
static PyObject *const_tuple_str_plain_self_str_plain_writer_tuple;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_tags;
static PyObject *const_str_digest_51ace267dadb083f8a6b6f49309d7d45;
static PyObject *const_str_digest_60f30856edc9721696e34e53b730bb4d;
extern PyObject *const_str_plain_TagTracer;
extern PyObject *const_str_plain_value;
static PyObject *const_tuple_str_plain_self_str_plain_root_str_plain_tags_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_07132e2e7d5378f60f3c7d65458db0df;
extern PyObject *const_str_plain_indent;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_4201840bc39ab31eb4f05f616c9ea767;
extern PyObject *const_str_space;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_setwriter;
extern PyObject *const_str_plain_writer;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_TagTracerSub;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_map;
static PyObject *const_str_digest_caa46cd98946aca8c614d3acd95d10ae;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_tuple_65681d29e309a9122918a45b418203df_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_content;
extern PyObject *const_str_plain_extra;
static PyObject *const_str_digest_756e2102b2d74ff7fc3be85dcdd51975;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
static PyObject *const_str_digest_f83146efed9a981d9f9b44255d26da78;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_digest_c6dd83d2896bf1b0610e7451938fd235;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_digest_b8872718382dd39ffa4013e303d20ce5;
static PyObject *const_str_digest_cbd22e3bada4efd9af131f0dfc905dc4;
static PyObject *const_str_digest_68b3e44c13bf10981a05751f34d6b9ac;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_81f7bdb80224bb811d20d18468aaf5db;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_setprocessor;
static PyObject *const_str_plain__tags2proc;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_slice_none_int_neg_1_none;
static PyObject *const_str_plain__processmessage;
extern PyObject *const_str_plain_tuple;
static PyObject *const_str_plain__format_message;
static PyObject *const_str_plain_processor;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_lines;
extern PyObject *const_str_plain___call__;
static PyObject *const_str_digest_3648aa7049e0c01522cfe26a79b26a10;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain__writer;
extern PyObject *const_str_empty;
static PyObject *const_tuple_8690f2188aa7054a4dae7e0a680b1c0d_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_self_str_plain_tags_str_plain_processor_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tags_str_plain_processor_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_tags = UNSTREAM_STRING_ASCII( &constant_bin[ 2525227 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tags_str_plain_processor_tuple, 1, const_str_plain_tags ); Py_INCREF( const_str_plain_tags );
    const_str_plain_processor = UNSTREAM_STRING_ASCII( &constant_bin[ 2525231 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tags_str_plain_processor_tuple, 2, const_str_plain_processor ); Py_INCREF( const_str_plain_processor );
    const_str_digest_ae68d00ba7f3e57416298649e2191fc4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2525240 ], 19, 0 );
    const_str_digest_d5b8e3b30c90e0ce1cd1283b2c829cdd = UNSTREAM_STRING_ASCII( &constant_bin[ 2525259 ], 25, 0 );
    const_str_digest_7f3d8162f362caace081f223b9545d0a = UNSTREAM_STRING_ASCII( &constant_bin[ 2525284 ], 18, 0 );
    const_tuple_str_plain_self_str_plain_writer_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_writer_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_writer_tuple, 1, const_str_plain_writer ); Py_INCREF( const_str_plain_writer );
    const_str_digest_51ace267dadb083f8a6b6f49309d7d45 = UNSTREAM_STRING_ASCII( &constant_bin[ 2525302 ], 15, 0 );
    const_str_digest_60f30856edc9721696e34e53b730bb4d = UNSTREAM_STRING_ASCII( &constant_bin[ 2525317 ], 21, 0 );
    const_tuple_str_plain_self_str_plain_root_str_plain_tags_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_root_str_plain_tags_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_root_str_plain_tags_tuple, 1, const_str_plain_root ); Py_INCREF( const_str_plain_root );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_root_str_plain_tags_tuple, 2, const_str_plain_tags ); Py_INCREF( const_str_plain_tags );
    const_str_digest_07132e2e7d5378f60f3c7d65458db0df = UNSTREAM_STRING_ASCII( &constant_bin[ 2525338 ], 46, 0 );
    const_str_digest_4201840bc39ab31eb4f05f616c9ea767 = UNSTREAM_STRING_ASCII( &constant_bin[ 2525384 ], 15, 0 );
    const_str_plain_setwriter = UNSTREAM_STRING_ASCII( &constant_bin[ 2525250 ], 9, 1 );
    const_str_plain_TagTracerSub = UNSTREAM_STRING_ASCII( &constant_bin[ 2525317 ], 12, 1 );
    const_str_digest_caa46cd98946aca8c614d3acd95d10ae = UNSTREAM_STRING_ASCII( &constant_bin[ 2525399 ], 16, 0 );
    const_tuple_65681d29e309a9122918a45b418203df_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_65681d29e309a9122918a45b418203df_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_65681d29e309a9122918a45b418203df_tuple, 1, const_str_plain_tags ); Py_INCREF( const_str_plain_tags );
    PyTuple_SET_ITEM( const_tuple_65681d29e309a9122918a45b418203df_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_65681d29e309a9122918a45b418203df_tuple, 3, const_str_plain_processor ); Py_INCREF( const_str_plain_processor );
    const_str_digest_756e2102b2d74ff7fc3be85dcdd51975 = UNSTREAM_STRING_ASCII( &constant_bin[ 2525415 ], 13, 0 );
    const_str_digest_f83146efed9a981d9f9b44255d26da78 = UNSTREAM_STRING_ASCII( &constant_bin[ 2525428 ], 25, 0 );
    const_str_digest_c6dd83d2896bf1b0610e7451938fd235 = UNSTREAM_STRING_ASCII( &constant_bin[ 2525453 ], 22, 0 );
    const_str_digest_cbd22e3bada4efd9af131f0dfc905dc4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2525475 ], 24, 0 );
    const_str_digest_68b3e44c13bf10981a05751f34d6b9ac = UNSTREAM_STRING_ASCII( &constant_bin[ 2525499 ], 21, 0 );
    const_str_digest_81f7bdb80224bb811d20d18468aaf5db = UNSTREAM_STRING_ASCII( &constant_bin[ 2525520 ], 13, 0 );
    const_str_plain_setprocessor = UNSTREAM_STRING_ASCII( &constant_bin[ 2525463 ], 12, 1 );
    const_str_plain__tags2proc = UNSTREAM_STRING_ASCII( &constant_bin[ 2525533 ], 10, 1 );
    const_str_plain__processmessage = UNSTREAM_STRING_ASCII( &constant_bin[ 2525269 ], 15, 1 );
    const_str_plain__format_message = UNSTREAM_STRING_ASCII( &constant_bin[ 2525438 ], 15, 1 );
    const_str_digest_3648aa7049e0c01522cfe26a79b26a10 = UNSTREAM_STRING_ASCII( &constant_bin[ 2525543 ], 10, 0 );
    const_str_plain__writer = UNSTREAM_STRING_ASCII( &constant_bin[ 2525553 ], 7, 1 );
    const_tuple_8690f2188aa7054a4dae7e0a680b1c0d_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_8690f2188aa7054a4dae7e0a680b1c0d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8690f2188aa7054a4dae7e0a680b1c0d_tuple, 1, const_str_plain_tags ); Py_INCREF( const_str_plain_tags );
    PyTuple_SET_ITEM( const_tuple_8690f2188aa7054a4dae7e0a680b1c0d_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_8690f2188aa7054a4dae7e0a680b1c0d_tuple, 3, const_str_plain_extra ); Py_INCREF( const_str_plain_extra );
    PyTuple_SET_ITEM( const_tuple_8690f2188aa7054a4dae7e0a680b1c0d_tuple, 4, const_str_plain_content ); Py_INCREF( const_str_plain_content );
    PyTuple_SET_ITEM( const_tuple_8690f2188aa7054a4dae7e0a680b1c0d_tuple, 5, const_str_plain_indent ); Py_INCREF( const_str_plain_indent );
    PyTuple_SET_ITEM( const_tuple_8690f2188aa7054a4dae7e0a680b1c0d_tuple, 6, const_str_plain_lines ); Py_INCREF( const_str_plain_lines );
    PyTuple_SET_ITEM( const_tuple_8690f2188aa7054a4dae7e0a680b1c0d_tuple, 7, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_8690f2188aa7054a4dae7e0a680b1c0d_tuple, 8, const_str_plain_value ); Py_INCREF( const_str_plain_value );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pluggy$_tracing( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_01febc47e1d8e0ccdd62b7dfb7f18c4b;
static PyCodeObject *codeobj_f6ff27bcecaa78f113ca8418ec390f9d;
static PyCodeObject *codeobj_67130dcd1b3010ceea8e2b5ddf8cf24c;
static PyCodeObject *codeobj_f957bab1497ca1d8e7b1be5529f4c617;
static PyCodeObject *codeobj_173fc8f0c56a456038aca98a571add2b;
static PyCodeObject *codeobj_7ad26d6556eeb8afadba6a4b419e0ce2;
static PyCodeObject *codeobj_b5be533fe8aa26262708059d75da7f60;
static PyCodeObject *codeobj_401296bf9adef9bd3756b91bd8d19642;
static PyCodeObject *codeobj_772d7d958d10068b055960728de50479;
static PyCodeObject *codeobj_cc649a6b80e79a3a2128a3b61f95a024;
static PyCodeObject *codeobj_5abb58ec2302e774027e93f1ac76e3d0;
static PyCodeObject *codeobj_cd00f9c6c1c8bb1bc3b2513267828904;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_07132e2e7d5378f60f3c7d65458db0df;
    codeobj_01febc47e1d8e0ccdd62b7dfb7f18c4b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_cbd22e3bada4efd9af131f0dfc905dc4, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_f6ff27bcecaa78f113ca8418ec390f9d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TagTracer, 6, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_67130dcd1b3010ceea8e2b5ddf8cf24c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TagTracerSub, 53, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_f957bab1497ca1d8e7b1be5529f4c617 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 58, const_tuple_str_plain_self_str_plain_args_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_173fc8f0c56a456038aca98a571add2b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 7, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7ad26d6556eeb8afadba6a4b419e0ce2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 54, const_tuple_str_plain_self_str_plain_root_str_plain_tags_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b5be533fe8aa26262708059d75da7f60 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__format_message, 15, const_tuple_8690f2188aa7054a4dae7e0a680b1c0d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_401296bf9adef9bd3756b91bd8d19642 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__processmessage, 32, const_tuple_65681d29e309a9122918a45b418203df_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_772d7d958d10068b055960728de50479 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get, 12, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cc649a6b80e79a3a2128a3b61f95a024 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get, 61, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5abb58ec2302e774027e93f1ac76e3d0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setprocessor, 45, const_tuple_str_plain_self_str_plain_tags_str_plain_processor_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cd00f9c6c1c8bb1bc3b2513267828904 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setwriter, 42, const_tuple_str_plain_self_str_plain_writer_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_2_get(  );


static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_3__format_message(  );


static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_4__processmessage(  );


static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_5_setwriter(  );


static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_6_setprocessor(  );


static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_7___init__(  );


static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_8___call__(  );


static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_9_get(  );


// The module function definitions.
static PyObject *impl_pluggy$_tracing$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_173fc8f0c56a456038aca98a571add2b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_173fc8f0c56a456038aca98a571add2b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_173fc8f0c56a456038aca98a571add2b, codeobj_173fc8f0c56a456038aca98a571add2b, module_pluggy$_tracing, sizeof(void *) );
    frame_173fc8f0c56a456038aca98a571add2b = cache_frame_173fc8f0c56a456038aca98a571add2b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_173fc8f0c56a456038aca98a571add2b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_173fc8f0c56a456038aca98a571add2b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = PyDict_New();
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__tags2proc, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__writer, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_indent, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_173fc8f0c56a456038aca98a571add2b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_173fc8f0c56a456038aca98a571add2b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_173fc8f0c56a456038aca98a571add2b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_173fc8f0c56a456038aca98a571add2b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_173fc8f0c56a456038aca98a571add2b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_173fc8f0c56a456038aca98a571add2b,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_173fc8f0c56a456038aca98a571add2b == cache_frame_173fc8f0c56a456038aca98a571add2b )
    {
        Py_DECREF( frame_173fc8f0c56a456038aca98a571add2b );
    }
    cache_frame_173fc8f0c56a456038aca98a571add2b = NULL;

    assertFrameObject( frame_173fc8f0c56a456038aca98a571add2b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_1___init__ );
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


static PyObject *impl_pluggy$_tracing$$$function_2_get( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_772d7d958d10068b055960728de50479;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_772d7d958d10068b055960728de50479 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_772d7d958d10068b055960728de50479, codeobj_772d7d958d10068b055960728de50479, module_pluggy$_tracing, sizeof(void *)+sizeof(void *) );
    frame_772d7d958d10068b055960728de50479 = cache_frame_772d7d958d10068b055960728de50479;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_772d7d958d10068b055960728de50479 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_772d7d958d10068b055960728de50479 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_tuple_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain_TagTracerSub );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TagTracerSub );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TagTracerSub" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 13;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_name );
        tmp_tuple_element_1 = par_name;
        tmp_args_element_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
        frame_772d7d958d10068b055960728de50479->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_772d7d958d10068b055960728de50479 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_772d7d958d10068b055960728de50479 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_772d7d958d10068b055960728de50479 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_772d7d958d10068b055960728de50479, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_772d7d958d10068b055960728de50479->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_772d7d958d10068b055960728de50479, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_772d7d958d10068b055960728de50479,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_772d7d958d10068b055960728de50479 == cache_frame_772d7d958d10068b055960728de50479 )
    {
        Py_DECREF( frame_772d7d958d10068b055960728de50479 );
    }
    cache_frame_772d7d958d10068b055960728de50479 = NULL;

    assertFrameObject( frame_772d7d958d10068b055960728de50479 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_2_get );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_2_get );
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


static PyObject *impl_pluggy$_tracing$$$function_3__format_message( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tags = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *var_extra = NULL;
    PyObject *var_content = NULL;
    PyObject *var_indent = NULL;
    PyObject *var_lines = NULL;
    PyObject *var_name = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b5be533fe8aa26262708059d75da7f60;
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
    static struct Nuitka_FrameObject *cache_frame_b5be533fe8aa26262708059d75da7f60 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b5be533fe8aa26262708059d75da7f60, codeobj_b5be533fe8aa26262708059d75da7f60, module_pluggy$_tracing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b5be533fe8aa26262708059d75da7f60 = cache_frame_b5be533fe8aa26262708059d75da7f60;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b5be533fe8aa26262708059d75da7f60 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b5be533fe8aa26262708059d75da7f60 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_args );
        tmp_subscribed_name_1 = par_args;
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
        if ( tmp_isinstance_inst_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_inst_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_args );
            tmp_subscribed_name_2 = par_args;
            tmp_subscript_name_2 = const_int_neg_1;
            tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_extra == NULL );
            var_extra = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( par_args );
            tmp_subscribed_name_3 = par_args;
            tmp_subscript_name_3 = const_slice_none_int_neg_1_none;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_args;
                assert( old != NULL );
                par_args = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyDict_New();
            assert( var_extra == NULL );
            var_extra = tmp_assign_source_3;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_source_name_1 = const_str_space;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
        assert( !(tmp_called_name_1 == NULL) );
        tmp_called_name_2 = (PyObject *)&PyMap_Type;
        tmp_args_element_name_2 = (PyObject *)&PyUnicode_Type;
        CHECK_OBJECT( par_args );
        tmp_args_element_name_3 = par_args;
        frame_b5be533fe8aa26262708059d75da7f60->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 22;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b5be533fe8aa26262708059d75da7f60->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_content == NULL );
        var_content = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_2;
        tmp_left_name_1 = const_str_digest_b8872718382dd39ffa4013e303d20ce5;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_indent );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_MUL_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_indent == NULL );
        var_indent = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_list_element_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_4;
        tmp_left_name_2 = const_str_digest_3648aa7049e0c01522cfe26a79b26a10;
        CHECK_OBJECT( var_indent );
        tmp_tuple_element_1 = var_indent;
        tmp_right_name_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_content );
        tmp_tuple_element_1 = var_content;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
        tmp_called_instance_1 = const_str_chr_58;
        CHECK_OBJECT( par_tags );
        tmp_args_element_name_4 = par_tags;
        frame_b5be533fe8aa26262708059d75da7f60->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_join, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_2 );

            exception_lineno = 25;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_2, 2, tmp_tuple_element_1 );
        tmp_list_element_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = PyList_New( 1 );
        PyList_SET_ITEM( tmp_assign_source_6, 0, tmp_list_element_1 );
        assert( var_lines == NULL );
        var_lines = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_extra );
        tmp_called_instance_2 = var_extra;
        frame_b5be533fe8aa26262708059d75da7f60->m_frame.f_lineno = 27;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_items );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooo";
                exception_lineno = 27;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_10 == NULL )
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


            type_description_1 = "ooooooooo";
            exception_lineno = 27;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_11 == NULL )
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


            type_description_1 = "ooooooooo";
            exception_lineno = 27;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
            Py_XDECREF( old );
        }

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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 27;
                    goto try_except_handler_4;
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

            type_description_1 = "ooooooooo";
            exception_lineno = 27;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_12;
            Py_INCREF( var_name );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_13;
            Py_INCREF( var_value );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( var_lines );
        tmp_source_name_3 = var_lines;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_3 = const_str_digest_81f7bdb80224bb811d20d18468aaf5db;
        CHECK_OBJECT( var_indent );
        tmp_tuple_element_2 = var_indent;
        tmp_right_name_3 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_name );
        tmp_tuple_element_2 = var_name;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_value );
        tmp_tuple_element_2 = var_value;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_right_name_3, 2, tmp_tuple_element_2 );
        tmp_args_element_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 28;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_b5be533fe8aa26262708059d75da7f60->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_6;
        tmp_called_instance_3 = const_str_empty;
        CHECK_OBJECT( var_lines );
        tmp_args_element_name_6 = var_lines;
        frame_b5be533fe8aa26262708059d75da7f60->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_join, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5be533fe8aa26262708059d75da7f60 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5be533fe8aa26262708059d75da7f60 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5be533fe8aa26262708059d75da7f60 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b5be533fe8aa26262708059d75da7f60, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b5be533fe8aa26262708059d75da7f60->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b5be533fe8aa26262708059d75da7f60, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b5be533fe8aa26262708059d75da7f60,
        type_description_1,
        par_self,
        par_tags,
        par_args,
        var_extra,
        var_content,
        var_indent,
        var_lines,
        var_name,
        var_value
    );


    // Release cached frame.
    if ( frame_b5be533fe8aa26262708059d75da7f60 == cache_frame_b5be533fe8aa26262708059d75da7f60 )
    {
        Py_DECREF( frame_b5be533fe8aa26262708059d75da7f60 );
    }
    cache_frame_b5be533fe8aa26262708059d75da7f60 = NULL;

    assertFrameObject( frame_b5be533fe8aa26262708059d75da7f60 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_3__format_message );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tags );
    Py_DECREF( par_tags );
    par_tags = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_extra );
    Py_DECREF( var_extra );
    var_extra = NULL;

    CHECK_OBJECT( (PyObject *)var_content );
    Py_DECREF( var_content );
    var_content = NULL;

    CHECK_OBJECT( (PyObject *)var_indent );
    Py_DECREF( var_indent );
    var_indent = NULL;

    CHECK_OBJECT( (PyObject *)var_lines );
    Py_DECREF( var_lines );
    var_lines = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tags );
    Py_DECREF( par_tags );
    par_tags = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_extra );
    var_extra = NULL;

    Py_XDECREF( var_content );
    var_content = NULL;

    Py_XDECREF( var_indent );
    var_indent = NULL;

    Py_XDECREF( var_lines );
    var_lines = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_3__format_message );
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


static PyObject *impl_pluggy$_tracing$$$function_4__processmessage( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tags = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *var_processor = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_401296bf9adef9bd3756b91bd8d19642;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_401296bf9adef9bd3756b91bd8d19642 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_401296bf9adef9bd3756b91bd8d19642, codeobj_401296bf9adef9bd3756b91bd8d19642, module_pluggy$_tracing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_401296bf9adef9bd3756b91bd8d19642 = cache_frame_401296bf9adef9bd3756b91bd8d19642;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_401296bf9adef9bd3756b91bd8d19642 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_401296bf9adef9bd3756b91bd8d19642 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__writer );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
        CHECK_OBJECT( par_args );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_args );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__writer );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT( par_tags );
            tmp_args_element_name_2 = par_tags;
            CHECK_OBJECT( par_args );
            tmp_args_element_name_3 = par_args;
            frame_401296bf9adef9bd3756b91bd8d19642->m_frame.f_lineno = 34;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__format_message, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 34;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_401296bf9adef9bd3756b91bd8d19642->m_frame.f_lineno = 34;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_assign_source_1;
        tmp_assign_source_1 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__tags2proc );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_tags );
        tmp_subscript_name_1 = par_tags;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        assert( var_processor == NULL );
        var_processor = tmp_assign_source_2;
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

    {
        nuitka_bool tmp_assign_source_3;
        tmp_assign_source_3 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
    }
    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_401296bf9adef9bd3756b91bd8d19642, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_401296bf9adef9bd3756b91bd8d19642, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "oooo";
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
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 35;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_401296bf9adef9bd3756b91bd8d19642->m_frame) frame_401296bf9adef9bd3756b91bd8d19642->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooo";
        goto try_except_handler_4;
        branch_no_2:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_4__processmessage );
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            if ( var_processor == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "processor" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 40;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }

            tmp_called_name_2 = var_processor;
            CHECK_OBJECT( par_tags );
            tmp_args_element_name_4 = par_tags;
            CHECK_OBJECT( par_args );
            tmp_args_element_name_5 = par_args;
            frame_401296bf9adef9bd3756b91bd8d19642->m_frame.f_lineno = 40;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_3:;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_401296bf9adef9bd3756b91bd8d19642 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_401296bf9adef9bd3756b91bd8d19642 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_401296bf9adef9bd3756b91bd8d19642, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_401296bf9adef9bd3756b91bd8d19642->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_401296bf9adef9bd3756b91bd8d19642, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_401296bf9adef9bd3756b91bd8d19642,
        type_description_1,
        par_self,
        par_tags,
        par_args,
        var_processor
    );


    // Release cached frame.
    if ( frame_401296bf9adef9bd3756b91bd8d19642 == cache_frame_401296bf9adef9bd3756b91bd8d19642 )
    {
        Py_DECREF( frame_401296bf9adef9bd3756b91bd8d19642 );
    }
    cache_frame_401296bf9adef9bd3756b91bd8d19642 = NULL;

    assertFrameObject( frame_401296bf9adef9bd3756b91bd8d19642 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_4__processmessage );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tags );
    Py_DECREF( par_tags );
    par_tags = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_processor );
    var_processor = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tags );
    Py_DECREF( par_tags );
    par_tags = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_processor );
    var_processor = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_4__processmessage );
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


static PyObject *impl_pluggy$_tracing$$$function_5_setwriter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_writer = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_cd00f9c6c1c8bb1bc3b2513267828904;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cd00f9c6c1c8bb1bc3b2513267828904 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cd00f9c6c1c8bb1bc3b2513267828904, codeobj_cd00f9c6c1c8bb1bc3b2513267828904, module_pluggy$_tracing, sizeof(void *)+sizeof(void *) );
    frame_cd00f9c6c1c8bb1bc3b2513267828904 = cache_frame_cd00f9c6c1c8bb1bc3b2513267828904;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cd00f9c6c1c8bb1bc3b2513267828904 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cd00f9c6c1c8bb1bc3b2513267828904 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_writer );
        tmp_assattr_name_1 = par_writer;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__writer, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd00f9c6c1c8bb1bc3b2513267828904 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd00f9c6c1c8bb1bc3b2513267828904 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cd00f9c6c1c8bb1bc3b2513267828904, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cd00f9c6c1c8bb1bc3b2513267828904->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cd00f9c6c1c8bb1bc3b2513267828904, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cd00f9c6c1c8bb1bc3b2513267828904,
        type_description_1,
        par_self,
        par_writer
    );


    // Release cached frame.
    if ( frame_cd00f9c6c1c8bb1bc3b2513267828904 == cache_frame_cd00f9c6c1c8bb1bc3b2513267828904 )
    {
        Py_DECREF( frame_cd00f9c6c1c8bb1bc3b2513267828904 );
    }
    cache_frame_cd00f9c6c1c8bb1bc3b2513267828904 = NULL;

    assertFrameObject( frame_cd00f9c6c1c8bb1bc3b2513267828904 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_5_setwriter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_writer );
    Py_DECREF( par_writer );
    par_writer = NULL;

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

    CHECK_OBJECT( (PyObject *)par_writer );
    Py_DECREF( par_writer );
    par_writer = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_5_setwriter );
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


static PyObject *impl_pluggy$_tracing$$$function_6_setprocessor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tags = python_pars[ 1 ];
    PyObject *par_processor = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_5abb58ec2302e774027e93f1ac76e3d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5abb58ec2302e774027e93f1ac76e3d0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5abb58ec2302e774027e93f1ac76e3d0, codeobj_5abb58ec2302e774027e93f1ac76e3d0, module_pluggy$_tracing, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5abb58ec2302e774027e93f1ac76e3d0 = cache_frame_5abb58ec2302e774027e93f1ac76e3d0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5abb58ec2302e774027e93f1ac76e3d0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5abb58ec2302e774027e93f1ac76e3d0 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_tags );
        tmp_isinstance_inst_1 = par_tags;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_tuple_arg_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_tags );
            tmp_called_instance_1 = par_tags;
            frame_5abb58ec2302e774027e93f1ac76e3d0->m_frame.f_lineno = 47;
            tmp_tuple_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

            if ( tmp_tuple_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = PySequence_Tuple( tmp_tuple_arg_1 );
            Py_DECREF( tmp_tuple_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_tags;
                assert( old != NULL );
                par_tags = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            CHECK_OBJECT( par_tags );
            tmp_isinstance_inst_2 = par_tags;
            tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
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
            {
                PyObject *tmp_raise_type_1;
                tmp_raise_type_1 = PyExc_AssertionError;
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_lineno = 49;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_processor );
        tmp_ass_subvalue_1 = par_processor;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__tags2proc );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tags );
        tmp_ass_subscript_1 = par_tags;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5abb58ec2302e774027e93f1ac76e3d0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5abb58ec2302e774027e93f1ac76e3d0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5abb58ec2302e774027e93f1ac76e3d0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5abb58ec2302e774027e93f1ac76e3d0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5abb58ec2302e774027e93f1ac76e3d0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5abb58ec2302e774027e93f1ac76e3d0,
        type_description_1,
        par_self,
        par_tags,
        par_processor
    );


    // Release cached frame.
    if ( frame_5abb58ec2302e774027e93f1ac76e3d0 == cache_frame_5abb58ec2302e774027e93f1ac76e3d0 )
    {
        Py_DECREF( frame_5abb58ec2302e774027e93f1ac76e3d0 );
    }
    cache_frame_5abb58ec2302e774027e93f1ac76e3d0 = NULL;

    assertFrameObject( frame_5abb58ec2302e774027e93f1ac76e3d0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_6_setprocessor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tags );
    Py_DECREF( par_tags );
    par_tags = NULL;

    CHECK_OBJECT( (PyObject *)par_processor );
    Py_DECREF( par_processor );
    par_processor = NULL;

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

    Py_XDECREF( par_tags );
    par_tags = NULL;

    CHECK_OBJECT( (PyObject *)par_processor );
    Py_DECREF( par_processor );
    par_processor = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_6_setprocessor );
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


static PyObject *impl_pluggy$_tracing$$$function_7___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_root = python_pars[ 1 ];
    PyObject *par_tags = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_7ad26d6556eeb8afadba6a4b419e0ce2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7ad26d6556eeb8afadba6a4b419e0ce2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7ad26d6556eeb8afadba6a4b419e0ce2, codeobj_7ad26d6556eeb8afadba6a4b419e0ce2, module_pluggy$_tracing, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7ad26d6556eeb8afadba6a4b419e0ce2 = cache_frame_7ad26d6556eeb8afadba6a4b419e0ce2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7ad26d6556eeb8afadba6a4b419e0ce2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7ad26d6556eeb8afadba6a4b419e0ce2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_root );
        tmp_assattr_name_1 = par_root;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_root, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_tags );
        tmp_assattr_name_2 = par_tags;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_tags, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ad26d6556eeb8afadba6a4b419e0ce2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ad26d6556eeb8afadba6a4b419e0ce2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7ad26d6556eeb8afadba6a4b419e0ce2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7ad26d6556eeb8afadba6a4b419e0ce2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7ad26d6556eeb8afadba6a4b419e0ce2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7ad26d6556eeb8afadba6a4b419e0ce2,
        type_description_1,
        par_self,
        par_root,
        par_tags
    );


    // Release cached frame.
    if ( frame_7ad26d6556eeb8afadba6a4b419e0ce2 == cache_frame_7ad26d6556eeb8afadba6a4b419e0ce2 )
    {
        Py_DECREF( frame_7ad26d6556eeb8afadba6a4b419e0ce2 );
    }
    cache_frame_7ad26d6556eeb8afadba6a4b419e0ce2 = NULL;

    assertFrameObject( frame_7ad26d6556eeb8afadba6a4b419e0ce2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_7___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_root );
    Py_DECREF( par_root );
    par_root = NULL;

    CHECK_OBJECT( (PyObject *)par_tags );
    Py_DECREF( par_tags );
    par_tags = NULL;

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

    CHECK_OBJECT( (PyObject *)par_root );
    Py_DECREF( par_root );
    par_root = NULL;

    CHECK_OBJECT( (PyObject *)par_tags );
    Py_DECREF( par_tags );
    par_tags = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_7___init__ );
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


static PyObject *impl_pluggy$_tracing$$$function_8___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_f957bab1497ca1d8e7b1be5529f4c617;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f957bab1497ca1d8e7b1be5529f4c617 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f957bab1497ca1d8e7b1be5529f4c617, codeobj_f957bab1497ca1d8e7b1be5529f4c617, module_pluggy$_tracing, sizeof(void *)+sizeof(void *) );
    frame_f957bab1497ca1d8e7b1be5529f4c617 = cache_frame_f957bab1497ca1d8e7b1be5529f4c617;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f957bab1497ca1d8e7b1be5529f4c617 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f957bab1497ca1d8e7b1be5529f4c617 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_root );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__processmessage );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_tags );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_args );
        tmp_args_element_name_2 = par_args;
        frame_f957bab1497ca1d8e7b1be5529f4c617->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f957bab1497ca1d8e7b1be5529f4c617 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f957bab1497ca1d8e7b1be5529f4c617 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f957bab1497ca1d8e7b1be5529f4c617, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f957bab1497ca1d8e7b1be5529f4c617->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f957bab1497ca1d8e7b1be5529f4c617, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f957bab1497ca1d8e7b1be5529f4c617,
        type_description_1,
        par_self,
        par_args
    );


    // Release cached frame.
    if ( frame_f957bab1497ca1d8e7b1be5529f4c617 == cache_frame_f957bab1497ca1d8e7b1be5529f4c617 )
    {
        Py_DECREF( frame_f957bab1497ca1d8e7b1be5529f4c617 );
    }
    cache_frame_f957bab1497ca1d8e7b1be5529f4c617 = NULL;

    assertFrameObject( frame_f957bab1497ca1d8e7b1be5529f4c617 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_8___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_8___call__ );
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


static PyObject *impl_pluggy$_tracing$$$function_9_get( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_cc649a6b80e79a3a2128a3b61f95a024;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cc649a6b80e79a3a2128a3b61f95a024 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cc649a6b80e79a3a2128a3b61f95a024, codeobj_cc649a6b80e79a3a2128a3b61f95a024, module_pluggy$_tracing, sizeof(void *)+sizeof(void *) );
    frame_cc649a6b80e79a3a2128a3b61f95a024 = cache_frame_cc649a6b80e79a3a2128a3b61f95a024;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cc649a6b80e79a3a2128a3b61f95a024 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cc649a6b80e79a3a2128a3b61f95a024 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_root );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_tags );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_name );
        tmp_tuple_element_1 = par_name;
        tmp_right_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_cc649a6b80e79a3a2128a3b61f95a024->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc649a6b80e79a3a2128a3b61f95a024 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc649a6b80e79a3a2128a3b61f95a024 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc649a6b80e79a3a2128a3b61f95a024 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cc649a6b80e79a3a2128a3b61f95a024, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cc649a6b80e79a3a2128a3b61f95a024->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cc649a6b80e79a3a2128a3b61f95a024, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cc649a6b80e79a3a2128a3b61f95a024,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_cc649a6b80e79a3a2128a3b61f95a024 == cache_frame_cc649a6b80e79a3a2128a3b61f95a024 )
    {
        Py_DECREF( frame_cc649a6b80e79a3a2128a3b61f95a024 );
    }
    cache_frame_cc649a6b80e79a3a2128a3b61f95a024 = NULL;

    assertFrameObject( frame_cc649a6b80e79a3a2128a3b61f95a024 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_9_get );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pluggy$_tracing$$$function_9_get );
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



static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pluggy$_tracing$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_7f3d8162f362caace081f223b9545d0a,
#endif
        codeobj_173fc8f0c56a456038aca98a571add2b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pluggy$_tracing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_2_get(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pluggy$_tracing$$$function_2_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 300
        const_str_digest_756e2102b2d74ff7fc3be85dcdd51975,
#endif
        codeobj_772d7d958d10068b055960728de50479,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pluggy$_tracing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_3__format_message(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pluggy$_tracing$$$function_3__format_message,
        const_str_plain__format_message,
#if PYTHON_VERSION >= 300
        const_str_digest_f83146efed9a981d9f9b44255d26da78,
#endif
        codeobj_b5be533fe8aa26262708059d75da7f60,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pluggy$_tracing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_4__processmessage(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pluggy$_tracing$$$function_4__processmessage,
        const_str_plain__processmessage,
#if PYTHON_VERSION >= 300
        const_str_digest_d5b8e3b30c90e0ce1cd1283b2c829cdd,
#endif
        codeobj_401296bf9adef9bd3756b91bd8d19642,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pluggy$_tracing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_5_setwriter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pluggy$_tracing$$$function_5_setwriter,
        const_str_plain_setwriter,
#if PYTHON_VERSION >= 300
        const_str_digest_ae68d00ba7f3e57416298649e2191fc4,
#endif
        codeobj_cd00f9c6c1c8bb1bc3b2513267828904,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pluggy$_tracing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_6_setprocessor(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pluggy$_tracing$$$function_6_setprocessor,
        const_str_plain_setprocessor,
#if PYTHON_VERSION >= 300
        const_str_digest_c6dd83d2896bf1b0610e7451938fd235,
#endif
        codeobj_5abb58ec2302e774027e93f1ac76e3d0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pluggy$_tracing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_7___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pluggy$_tracing$$$function_7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_68b3e44c13bf10981a05751f34d6b9ac,
#endif
        codeobj_7ad26d6556eeb8afadba6a4b419e0ce2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pluggy$_tracing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_8___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pluggy$_tracing$$$function_8___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_60f30856edc9721696e34e53b730bb4d,
#endif
        codeobj_f957bab1497ca1d8e7b1be5529f4c617,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pluggy$_tracing,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pluggy$_tracing$$$function_9_get(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pluggy$_tracing$$$function_9_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 300
        const_str_digest_caa46cd98946aca8c614d3acd95d10ae,
#endif
        codeobj_cc649a6b80e79a3a2128a3b61f95a024,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pluggy$_tracing,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pluggy$_tracing =
{
    PyModuleDef_HEAD_INIT,
    "pluggy._tracing",
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
MOD_ENTRY_DECL(pluggy$_tracing)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(pluggy$_tracing)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pluggy$_tracing );
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
    puts("pluggy._tracing: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pluggy._tracing: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pluggy._tracing: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpluggy$_tracing" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pluggy$_tracing = Py_InitModule4(
        "pluggy._tracing",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pluggy$_tracing = PyModule_Create( &mdef_pluggy$_tracing );
#endif

    moduledict_pluggy$_tracing = MODULE_DICT( module_pluggy$_tracing );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_pluggy$_tracing,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pluggy$_tracing,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pluggy$_tracing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pluggy$_tracing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pluggy$_tracing );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_4201840bc39ab31eb4f05f616c9ea767, module_pluggy$_tracing );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    struct Nuitka_FrameObject *frame_01febc47e1d8e0ccdd62b7dfb7f18c4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_pluggy$_tracing_6 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_f6ff27bcecaa78f113ca8418ec390f9d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f6ff27bcecaa78f113ca8418ec390f9d_2 = NULL;
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
    PyObject *locals_pluggy$_tracing_53 = NULL;
    struct Nuitka_FrameObject *frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3 = NULL;
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
        tmp_assign_source_1 = const_str_digest_51ace267dadb083f8a6b6f49309d7d45;
        UPDATE_STRING_DICT0( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_07132e2e7d5378f60f3c7d65458db0df;
        UPDATE_STRING_DICT0( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_01febc47e1d8e0ccdd62b7dfb7f18c4b = MAKE_MODULE_FRAME( codeobj_01febc47e1d8e0ccdd62b7dfb7f18c4b, module_pluggy$_tracing );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_01febc47e1d8e0ccdd62b7dfb7f18c4b );
    assert( Py_REFCNT( frame_01febc47e1d8e0ccdd62b7dfb7f18c4b ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_07132e2e7d5378f60f3c7d65458db0df;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_4 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

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


            exception_lineno = 6;

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


            exception_lineno = 6;

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


            exception_lineno = 6;

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


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

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


            exception_lineno = 6;

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


            exception_lineno = 6;

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


            exception_lineno = 6;

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


                exception_lineno = 6;

                goto try_except_handler_1;
            }
            tmp_tuple_element_1 = const_str_plain_TagTracer;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_01febc47e1d8e0ccdd62b7dfb7f18c4b->m_frame.f_lineno = 6;
            tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 6;

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


                exception_lineno = 6;

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


                    exception_lineno = 6;

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

                    exception_lineno = 6;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 6;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 6;
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
            locals_pluggy$_tracing_6 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4201840bc39ab31eb4f05f616c9ea767;
        tmp_res = PyObject_SetItem( locals_pluggy$_tracing_6, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_TagTracer;
        tmp_res = PyObject_SetItem( locals_pluggy$_tracing_6, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_f6ff27bcecaa78f113ca8418ec390f9d_2, codeobj_f6ff27bcecaa78f113ca8418ec390f9d, module_pluggy$_tracing, sizeof(void *) );
        frame_f6ff27bcecaa78f113ca8418ec390f9d_2 = cache_frame_f6ff27bcecaa78f113ca8418ec390f9d_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_f6ff27bcecaa78f113ca8418ec390f9d_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_f6ff27bcecaa78f113ca8418ec390f9d_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_pluggy$_tracing$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_pluggy$_tracing_6, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_pluggy$_tracing$$$function_2_get(  );



        tmp_res = PyObject_SetItem( locals_pluggy$_tracing_6, const_str_plain_get, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_pluggy$_tracing$$$function_3__format_message(  );



        tmp_res = PyObject_SetItem( locals_pluggy$_tracing_6, const_str_plain__format_message, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_pluggy$_tracing$$$function_4__processmessage(  );



        tmp_res = PyObject_SetItem( locals_pluggy$_tracing_6, const_str_plain__processmessage, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_pluggy$_tracing$$$function_5_setwriter(  );



        tmp_res = PyObject_SetItem( locals_pluggy$_tracing_6, const_str_plain_setwriter, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_pluggy$_tracing$$$function_6_setprocessor(  );



        tmp_res = PyObject_SetItem( locals_pluggy$_tracing_6, const_str_plain_setprocessor, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_f6ff27bcecaa78f113ca8418ec390f9d_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_f6ff27bcecaa78f113ca8418ec390f9d_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_f6ff27bcecaa78f113ca8418ec390f9d_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_f6ff27bcecaa78f113ca8418ec390f9d_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_f6ff27bcecaa78f113ca8418ec390f9d_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_f6ff27bcecaa78f113ca8418ec390f9d_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_f6ff27bcecaa78f113ca8418ec390f9d_2 == cache_frame_f6ff27bcecaa78f113ca8418ec390f9d_2 )
        {
            Py_DECREF( frame_f6ff27bcecaa78f113ca8418ec390f9d_2 );
        }
        cache_frame_f6ff27bcecaa78f113ca8418ec390f9d_2 = NULL;

        assertFrameObject( frame_f6ff27bcecaa78f113ca8418ec390f9d_2 );

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
            tmp_compexpr_right_1 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 6;

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
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_pluggy$_tracing_6, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 6;

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
            tmp_tuple_element_3 = const_str_plain_TagTracer;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_pluggy$_tracing_6;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_01febc47e1d8e0ccdd62b7dfb7f18c4b->m_frame.f_lineno = 6;
            tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 6;

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
        NUITKA_CANNOT_GET_HERE( pluggy$_tracing );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_pluggy$_tracing_6 );
        locals_pluggy$_tracing_6 = NULL;
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

        Py_DECREF( locals_pluggy$_tracing_6 );
        locals_pluggy$_tracing_6 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pluggy$_tracing );
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
        NUITKA_CANNOT_GET_HERE( pluggy$_tracing );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 6;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain_TagTracer, tmp_assign_source_9 );
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
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_11 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
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


            exception_lineno = 53;

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


            exception_lineno = 53;

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


            exception_lineno = 53;

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


            exception_lineno = 53;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

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
        tmp_assign_source_13 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_13;
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


            exception_lineno = 53;

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


            exception_lineno = 53;

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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;

                goto try_except_handler_4;
            }
            tmp_tuple_element_4 = const_str_plain_TagTracerSub;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_4 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_01febc47e1d8e0ccdd62b7dfb7f18c4b->m_frame.f_lineno = 53;
            tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_14;
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


                exception_lineno = 53;

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
                PyObject *tmp_tuple_element_5;
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
                tmp_tuple_element_5 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 53;

                    goto try_except_handler_4;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_8 == NULL) );
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 53;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_5 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 53;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 53;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_15;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pluggy$_tracing_53 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4201840bc39ab31eb4f05f616c9ea767;
        tmp_res = PyObject_SetItem( locals_pluggy$_tracing_53, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_TagTracerSub;
        tmp_res = PyObject_SetItem( locals_pluggy$_tracing_53, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3, codeobj_67130dcd1b3010ceea8e2b5ddf8cf24c, module_pluggy$_tracing, sizeof(void *) );
        frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3 = cache_frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_pluggy$_tracing$$$function_7___init__(  );



        tmp_res = PyObject_SetItem( locals_pluggy$_tracing_53, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_pluggy$_tracing$$$function_8___call__(  );



        tmp_res = PyObject_SetItem( locals_pluggy$_tracing_53, const_str_plain___call__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_pluggy$_tracing$$$function_9_get(  );



        tmp_res = PyObject_SetItem( locals_pluggy$_tracing_53, const_str_plain_get, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3 == cache_frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3 )
        {
            Py_DECREF( frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3 );
        }
        cache_frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3 = NULL;

        assertFrameObject( frame_67130dcd1b3010ceea8e2b5ddf8cf24c_3 );

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
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            tmp_compexpr_right_2 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;

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
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_pluggy$_tracing_53, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;

                goto try_except_handler_6;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = const_str_plain_TagTracerSub;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = locals_pluggy$_tracing_53;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_01febc47e1d8e0ccdd62b7dfb7f18c4b->m_frame.f_lineno = 53;
            tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;

                goto try_except_handler_6;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_17;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_16 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_16 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pluggy$_tracing );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_pluggy$_tracing_53 );
        locals_pluggy$_tracing_53 = NULL;
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

        Py_DECREF( locals_pluggy$_tracing_53 );
        locals_pluggy$_tracing_53 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pluggy$_tracing );
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
        NUITKA_CANNOT_GET_HERE( pluggy$_tracing );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 53;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_pluggy$_tracing, (Nuitka_StringObject *)const_str_plain_TagTracerSub, tmp_assign_source_16 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_01febc47e1d8e0ccdd62b7dfb7f18c4b );
#endif
    popFrameStack();

    assertFrameObject( frame_01febc47e1d8e0ccdd62b7dfb7f18c4b );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_01febc47e1d8e0ccdd62b7dfb7f18c4b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_01febc47e1d8e0ccdd62b7dfb7f18c4b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_01febc47e1d8e0ccdd62b7dfb7f18c4b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_01febc47e1d8e0ccdd62b7dfb7f18c4b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
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


    return MOD_RETURN_VALUE( module_pluggy$_tracing );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
