# File Compressor (C)

A simple vile compression and decompression system written in C, using Run-Length Encoding (RLE).
This project demonstrate file handling, structs, arrays, and basic compression algorithms.

## Features

- Compress text files using Run-Length Encoding (RLE)
- Decompress compressed files back to readable text
- Handles:
    - Letters
    - Numbers
    - Spaces
    - Newlines
    - Symbols
- Written in standard C (GCC compatible)

## Technologies Used

- Language: **C**
- Compiler: **GCC**
- Concepts:
    - File I/O (`fopen`, `fgetc`, `fprintf`)
    - Structs
    - Arrays
    - Loops and conditionals

### Requirements
- GCC compiler
- C IDE or terminal (CLion, VS Code, Code::Blocks)

### Compile
```bash
gcc main.c compressed.c -o filecompressor
```

### Usage
1. Place the input file named "read.txt" in the project directory
2. Run the program:
```bash
./filecompressor
```
3. The program will
- Read the input file
- Compress it using RLE
- Save the result to compressed.txt
- Optionally decompress and print out to the terminal

### Example
Input:
```bash
AAAAABBBBBCCCCDDDDDDDD
```
Compressed Output
```bash
A5B5C4B8
```

### Project Structure

FileCompressor/    
main.c     
Compressor.c    
Compressor.h    
Decompressor.c   
Decompressor.h   
read.txt   
compressed.txt   
README.md

### Limitations
- Run-Length Encoding is not efficient for regular English Text
- Compression is best with repeated characters
- Designed for Educations purposes

## Author
Felipe Viana   
Computer Science Student   
C Programming & System Development
