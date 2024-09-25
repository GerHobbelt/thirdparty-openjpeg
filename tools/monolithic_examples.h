
#pragma once

#if defined(BUILD_MONOLITHIC)

#ifdef __cplusplus
extern "C" {
#endif

int opj_test_sparse_array_main(int argc, const char** argv);
int opj_bench_dwt_main(int argc, const char** argv);
int opj_compress_tool_main(int argc, const char** argv);
int opj_dec_server_tool_main(int argc, const char** argv);
int opj_decompress_tool_main(int argc, const char** argv);
int opj_detect_avx2_tool_main(int argc, const char** argv);
int opj_dump_tool_main(int argc, const char** argv);
int opj_generate_t1_luts_main(int argc, const char** argv);
int opj_jpip_addxml_tool_main(int argc, const char** argv);
int opj_jpip_transcode_tool_main(int argc, const char** argv);
int opj_test_compare_dump_files_main(int argc, const char** argv);
int opj_test_compare_images_main(int argc, const char** argv);
int opj_test_compare_raw_files_main(int argc, const char** argv);
int opj_test_decode_area_main(int argc, const char** argv);
int opj_test_empty0_main(int argc, const char** argv);
int opj_test_empty1_main(int argc, const char** argv);
int opj_test_empty2_main(int argc, const char** argv);
int opj_test_include_openjpeg_main(int argc, const char** argv);
int opj_test_j2k_random_file_access_main(int argc, const char** argv);
int opj_test_jp2_main(int argc, const char** argv);
int opj_test_jpip_main(int argc, const char** argv);
int opj_test_pdf2jp2_main(int argc, const char** argv);
int opj_test_ppm2rbg3_main(int argc, const char** argv);
int opj_test_tile_decoder_main(int argc, const char** argv);
int opj_test_tile_encoder_main(int argc, const char** argv);

#ifdef __cplusplus
}
#endif

#endif
