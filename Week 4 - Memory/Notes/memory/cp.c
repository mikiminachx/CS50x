#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    FILE *src = fopen(argv[1], "rb");
    FILE *dst = fopen(argv[2], "wb");

    BYTE b;

    // Cannot read "b" the value, it has to be the reference of b.
    while (fread(&b, sizeof(b), 1, src) != 0) // The address of b is where I want to put 1 byte of the file at a time.
    // If it reads the documentation, it tells you how many bytes were successfully read.
    // Logically, it should be either 1 was read or 0 was read.
    // Since I asked it to read 1 at a time, so it's either succeed or fail.
    // It's gonna succeed until it get to the end of the file and there's no mroe byte to read.
    // At which point, it will return 0.
    {
        fwrite(&b, sizeof(b), dst);
    }

    fclose(dst);
    fclose(src);
}

Notes:
Why not using string *argv but char *argv?
Because we are not use <cs50.h>. If we want a command line, we use char *argv.
rb = read in binary
wb = write in binary
