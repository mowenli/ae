/* Generated by configure */
#include <cstdio>
#include <cstring>
extern "C" {
    #include <jpeglib.h>
}
int main(int argc, char **argv)
{
    (void)argc; (void)argv;
    /* BEGIN TEST: */
    JDIMENSION dummy;
    jpeg_crop_scanline(nullptr, &dummy, &dummy);
    jpeg_skip_scanlines(nullptr, dummy);
    /* END TEST */
    return 0;
}
