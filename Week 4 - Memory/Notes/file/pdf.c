#include <cs50.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, string argv[])
{
    string filename = argv[1];
    FILE *f = fopen(filename, "r"); // Create a file pointer for keep tracking the pointer to this file

    // Make an array for the pdf
    uint8_t buffer[4]; // Store 4 types integers (PDF has 4 bytes), u = unsigned
    fread(buffer, 1, 4, f);
    // Read into the buffer
    // how long is a chunk? 1 byte long
    // how many chunk to read all at once? 4
    // Read from file pointer

    // Read from buffer by using for loop
    for (int = i; i < 4; i++)
    {
        printf("%i\n", buffer[i]);
    }
    fclose(f);
}

// Notes:
// Step 1: Open the file
// Step 2: Create a buffer
// Step 3: Using fread to read 4 individual bytes from that file
// Step 4: Print it out

// Use uint8_t is because it is a single byte big, but int is 4 bytes big.
