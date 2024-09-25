
#include "monolithic_examples.h"

// define a name for the monolith
#define USAGE_NAME   "openjpeg_tools"

// load the monolithic definitions which you need for the dispatch table:
#include "monolithic_main_internal_defs.h"

// declare your own monolith dispatch table:
MONOLITHIC_CMD_TABLE_START()

{ "bench_dwt", { .fa = opj_bench_dwt_main } },
{ "compress", { .fa = opj_compress_tool_main } },
{ "dec_server", { .fa = opj_dec_server_tool_main } },
{ "decompress", { .fa = opj_decompress_tool_main } },
{ "detect_avx2", { .fa = opj_detect_avx2_tool_main } },
{ "dump", { .fa = opj_dump_tool_main } },
{ "generate_t1_luts", { .fa = opj_generate_t1_luts_main } },
{ "jpip_addxml", { .fa = opj_jpip_addxml_tool_main } },
{ "jpip_transcode", { .fa = opj_jpip_transcode_tool_main } },
{ "compare_dump_files", { .fa = opj_test_compare_dump_files_main } },
{ "compare_images", { .fa = opj_test_compare_images_main } },
{ "compare_raw_files", { .fa = opj_test_compare_raw_files_main } },
{ "test_decode_area", { .fa = opj_test_decode_area_main } },
{ "test_empty0", { .fa = opj_test_empty0_main } },
{ "test_empty1", { .fa = opj_test_empty1_main } },
{ "test_empty2", { .fa = opj_test_empty2_main } },
{ "test_include_openjpeg", { .fa = opj_test_include_openjpeg_main } },
{ "test_j2k_random_file_access", { .fa = opj_test_j2k_random_file_access_main } },
{ "test_jp2", { .fa = opj_test_jp2_main } },
{ "test_jpip", { .fa = opj_test_jpip_main } },
{ "test_pdf2jp2", { .fa = opj_test_pdf2jp2_main } },
{ "test_ppm2rbg3", { .fa = opj_test_ppm2rbg3_main } },
{ "test_sparse_array", { .fa = opj_test_sparse_array_main } },
{ "test_tile_decoder", { .fa = opj_test_tile_decoder_main } },
{ "test_tile_encoder", { .fa = opj_test_tile_encoder_main } },

MONOLITHIC_CMD_TABLE_END();

// load the monolithic core dispatcher
#include "monolithic_main_tpl.h"
