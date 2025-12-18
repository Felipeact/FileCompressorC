//
// Created by USER1 on 2025-12-18.
//

#include <stdio.h>

typedef struct {
    int ch;
    int count;
} Run;

void CompressorFile ( FILE *FilePtr, const char *Name ) {

    int previousChar;
    int currentChar;
    int count = 0;
    Run Store[200];

    FilePtr = fopen(Name, "r");

    if (FilePtr == NULL) {
        printf("No file found, please try again !!\n");
        return;
    }

    previousChar = fgetc(FilePtr);
    if ( previousChar == EOF ) {
        fclose(FilePtr);
    }


    count = 1;

    int index = 0;
    while ( (currentChar = fgetc(FilePtr)) != EOF ) {

        if ( currentChar == previousChar) {
            count++;
        }

        else {
            Store[index].ch = previousChar;
            Store[index].count = count;
            index++;



            previousChar = currentChar;
            count = 1;
        }
    }

    Store[index].ch = previousChar;
    Store[index].count = count;
    index++;


    fclose(FilePtr);

    FilePtr = fopen("compressed.txt", "w");

    for (int i = 0; i < index; i++) {
        fprintf(FilePtr, "%c%d", Store[i].ch , Store[i].count);
    }
    printf("File Compressed!");

    fclose(FilePtr);
}