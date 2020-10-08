// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

#include "nuitka/constants_blob.h"

// Blob from which modules are unstreamed.
#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    ssize_t start;
    int size;
};

void copyFrozenModulesTo( struct _frozen *destination )
{
    struct frozen_desc frozen_modules[] = {
        { "_collections_abc", 6211187, 28903 },
        { "_compression", 6240090, 4085 },
        { "_weakrefset", 6244175, 7423 },
        { "abc", 6251598, 6412 },
        { "base64", 6258010, 16949 },
        { "bz2", 6274959, 11142 },
        { "codecs", 6286101, 34036 },
        { "collections", 6320137, -47037 },
        { "collections.abc", 6211187, 28903 },
        { "copyreg", 6367174, 4205 },
        { "dis", 6371379, 15166 },
        { "encodings", 6386545, -3908 },
        { "encodings.aliases", 6390453, 6257 },
        { "encodings.ascii", 6396710, 1845 },
        { "encodings.base64_codec", 6398555, 2384 },
        { "encodings.big5", 6400939, 1405 },
        { "encodings.big5hkscs", 6402344, 1415 },
        { "encodings.bz2_codec", 6403759, 3246 },
        { "encodings.charmap", 6407005, 2898 },
        { "encodings.cp037", 6409903, 2390 },
        { "encodings.cp1006", 6412293, 2466 },
        { "encodings.cp1026", 6414759, 2394 },
        { "encodings.cp1125", 6417153, 8087 },
        { "encodings.cp1140", 6425240, 2380 },
        { "encodings.cp1250", 6427620, 2417 },
        { "encodings.cp1251", 6430037, 2414 },
        { "encodings.cp1252", 6432451, 2417 },
        { "encodings.cp1253", 6434868, 2430 },
        { "encodings.cp1254", 6437298, 2419 },
        { "encodings.cp1255", 6439717, 2438 },
        { "encodings.cp1256", 6442155, 2416 },
        { "encodings.cp1257", 6444571, 2424 },
        { "encodings.cp1258", 6446995, 2422 },
        { "encodings.cp273", 6449417, 2376 },
        { "encodings.cp424", 6451793, 2420 },
        { "encodings.cp437", 6454213, 7804 },
        { "encodings.cp500", 6462017, 2390 },
        { "encodings.cp65001", 6464407, 1644 },
        { "encodings.cp720", 6466051, 2487 },
        { "encodings.cp737", 6468538, 8126 },
        { "encodings.cp775", 6476664, 7834 },
        { "encodings.cp850", 6484498, 7465 },
        { "encodings.cp852", 6491963, 7842 },
        { "encodings.cp855", 6499805, 8095 },
        { "encodings.cp856", 6507900, 2452 },
        { "encodings.cp857", 6510352, 7447 },
        { "encodings.cp858", 6517799, 7435 },
        { "encodings.cp860", 6525234, 7783 },
        { "encodings.cp861", 6533017, 7798 },
        { "encodings.cp862", 6540815, 7987 },
        { "encodings.cp863", 6548802, 7798 },
        { "encodings.cp864", 6556600, 7944 },
        { "encodings.cp865", 6564544, 7798 },
        { "encodings.cp866", 6572342, 8131 },
        { "encodings.cp869", 6580473, 7824 },
        { "encodings.cp874", 6588297, 2518 },
        { "encodings.cp875", 6590815, 2387 },
        { "encodings.cp932", 6593202, 1407 },
        { "encodings.cp949", 6594609, 1407 },
        { "encodings.cp950", 6596016, 1407 },
        { "encodings.euc_jis_2004", 6597423, 1421 },
        { "encodings.euc_jisx0213", 6598844, 1421 },
        { "encodings.euc_jp", 6600265, 1409 },
        { "encodings.euc_kr", 6601674, 1409 },
        { "encodings.gb18030", 6603083, 1411 },
        { "encodings.gb2312", 6604494, 1409 },
        { "encodings.gbk", 6605903, 1403 },
        { "encodings.hex_codec", 6607306, 2371 },
        { "encodings.hp_roman8", 6609677, 2591 },
        { "encodings.hz", 6612268, 1401 },
        { "encodings.idna", 6613669, 5685 },
        { "encodings.iso2022_jp", 6619354, 1422 },
        { "encodings.iso2022_jp_1", 6620776, 1426 },
        { "encodings.iso2022_jp_2", 6622202, 1426 },
        { "encodings.iso2022_jp_2004", 6623628, 1432 },
        { "encodings.iso2022_jp_3", 6625060, 1426 },
        { "encodings.iso2022_jp_ext", 6626486, 1430 },
        { "encodings.iso2022_kr", 6627916, 1422 },
        { "encodings.iso8859_1", 6629338, 2389 },
        { "encodings.iso8859_10", 6631727, 2394 },
        { "encodings.iso8859_11", 6634121, 2488 },
        { "encodings.iso8859_13", 6636609, 2397 },
        { "encodings.iso8859_14", 6639006, 2415 },
        { "encodings.iso8859_15", 6641421, 2394 },
        { "encodings.iso8859_16", 6643815, 2396 },
        { "encodings.iso8859_2", 6646211, 2389 },
        { "encodings.iso8859_3", 6648600, 2396 },
        { "encodings.iso8859_4", 6650996, 2389 },
        { "encodings.iso8859_5", 6653385, 2390 },
        { "encodings.iso8859_6", 6655775, 2434 },
        { "encodings.iso8859_7", 6658209, 2397 },
        { "encodings.iso8859_8", 6660606, 2428 },
        { "encodings.iso8859_9", 6663034, 2389 },
        { "encodings.johab", 6665423, 1407 },
        { "encodings.koi8_r", 6666830, 2441 },
        { "encodings.koi8_t", 6669271, 2352 },
        { "encodings.koi8_u", 6671623, 2427 },
        { "encodings.kz1048", 6674050, 2404 },
        { "encodings.latin_1", 6676454, 1857 },
        { "encodings.mac_arabic", 6678311, 7698 },
        { "encodings.mac_centeuro", 6686009, 2428 },
        { "encodings.mac_croatian", 6688437, 2436 },
        { "encodings.mac_cyrillic", 6690873, 2426 },
        { "encodings.mac_farsi", 6693299, 2370 },
        { "encodings.mac_greek", 6695669, 2410 },
        { "encodings.mac_iceland", 6698079, 2429 },
        { "encodings.mac_latin2", 6700508, 2570 },
        { "encodings.mac_roman", 6703078, 2427 },
        { "encodings.mac_romanian", 6705505, 2437 },
        { "encodings.mac_turkish", 6707942, 2430 },
        { "encodings.mbcs", 6710372, 1656 },
        { "encodings.oem", 6712028, 1469 },
        { "encodings.palmos", 6713497, 2417 },
        { "encodings.ptcp154", 6715914, 2511 },
        { "encodings.punycode", 6718425, 6378 },
        { "encodings.quopri_codec", 6724803, 2404 },
        { "encodings.raw_unicode_escape", 6727207, 1730 },
        { "encodings.rot_13", 6728937, 2990 },
        { "encodings.shift_jis", 6731927, 1415 },
        { "encodings.shift_jis_2004", 6733342, 1425 },
        { "encodings.shift_jisx0213", 6734767, 1425 },
        { "encodings.tis_620", 6736192, 2479 },
        { "encodings.undefined", 6738671, 2124 },
        { "encodings.unicode_escape", 6740795, 1710 },
        { "encodings.unicode_internal", 6742505, 1720 },
        { "encodings.utf_16", 6744225, 4794 },
        { "encodings.utf_16_be", 6749019, 1595 },
        { "encodings.utf_16_le", 6750614, 1595 },
        { "encodings.utf_32", 6752209, 4687 },
        { "encodings.utf_32_be", 6756896, 1488 },
        { "encodings.utf_32_le", 6758384, 1488 },
        { "encodings.utf_7", 6759872, 1516 },
        { "encodings.utf_8", 6761388, 1575 },
        { "encodings.utf_8_sig", 6762963, 4477 },
        { "encodings.uu_codec", 6767440, 3186 },
        { "encodings.zlib_codec", 6770626, 3084 },
        { "enum", 6773710, 24232 },
        { "functools", 6797942, 24176 },
        { "genericpath", 6822118, 3709 },
        { "heapq", 6825827, 14323 },
        { "importlib", 6840150, -3693 },
        { "importlib._bootstrap", 6843843, 29139 },
        { "importlib._bootstrap_external", 6872982, 41779 },
        { "importlib.machinery", 6914761, 933 },
        { "inspect", 6915694, 79998 },
        { "io", 6995692, 3370 },
        { "keyword", 6999062, 1770 },
        { "linecache", 7000832, 3750 },
        { "locale", 7004582, 34516 },
        { "ntpath", 7039098, 12965 },
        { "opcode", 7052063, 5339 },
        { "operator", 7057402, 13861 },
        { "os", 480, 29654 },
        { "quopri", 7071263, 5732 },
        { "re", 7076995, 13765 },
        { "reprlib", 7090760, 5311 },
        { "sre_compile", 7096071, 15164 },
        { "sre_constants", 7111235, 6252 },
        { "sre_parse", 7117487, 21318 },
        { "stat", 7138805, 3834 },
        { "stringprep", 7142639, 9993 },
        { "struct", 7152632, 295 },
        { "threading", 7152927, 37863 },
        { "token", 7190790, 3560 },
        { "tokenize", 7194350, 17792 },
        { "traceback", 7212142, 19584 },
        { "types", 43245, 8937 },
        { "warnings", 7231726, 13901 },
        { NULL, 0, 0 }
    };

    struct frozen_desc *current = frozen_modules;

    for(;;)
    {
        destination->name = (char *)current->name;
        destination->code = (unsigned char *)&constant_bin[ current->start ];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}
