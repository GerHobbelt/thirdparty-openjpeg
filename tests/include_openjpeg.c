#include <openjpeg.h>

#include "monolithic_examples.h"

#if defined(BUILD_MONOLITHIC)
#define main   opj_test_include_openjpeg_main
#endif

int main(int argc, const char **argv)
{
	(void)argc;
	(void)argv;
	
	return 0;
}
