#include <stdio.h>
#include "Compressor.h"
#include "Decompressor.h"

int main(void) {

    FILE * Fileptr = NULL;

    CompressorFile(Fileptr, "read.text");
    DecompressorFile(Fileptr, "compressed.txt");

    return 0;
}