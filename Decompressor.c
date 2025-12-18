//
// Created by USER1 on 2025-12-18.
//

#include <stdio.h>

void DecompressorFile ( FILE *FilePtr, const char *Name) {

    FilePtr = fopen(Name, "r");


    int currentChar;
    int count;

    while ((currentChar = fgetc(FilePtr)) != EOF) {
        // read the number after the character
        if (fscanf(FilePtr, "%d", &count) != 1) {
            printf("Invalid compressed format\n");
            break;
        }

        // print character count times
        for (int i = 0; i < count; i++) {
            printf("%c", currentChar);
        }
    }

    printf("\n");
    fclose(FilePtr);


}
