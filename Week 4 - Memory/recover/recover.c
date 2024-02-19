#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;
const int BLOCK_SIZE = 512;

int main(int argc, char *argv[])
{
    // Accept a single command-line argument
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

    // Open the memory card
    FILE *card = fopen(argv[1], "r");
    if (card == NULL)
    {
        printf("Can't open the file: %s\n", argv[1]);
        return 1;
    }

    // Create a buffer
    BYTE buffer[BLOCK_SIZE];

    // Count image
    int count = 0;

    // Allocate memory for the name of the file
    char cardname[8];

    // Output file
    FILE *out = NULL;

    // Read through every block into buffer
    while (fread(buffer, 1, BLOCK_SIZE, card) == BLOCK_SIZE)
    {
        // if start of a new jpg
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // if this is the first jpg
            if (count == 0)
            {
                // Write a new jpg
                sprintf(cardname, "%03i.jpg", count);
                out = fopen(cardname, "w");
                if (out == NULL)
                {
                    printf("jpeg cannot be opened\n");
                    return 2;
                }

                fwrite(buffer, sizeof(BYTE), BLOCK_SIZE, out);
                count++;
            }

            // if there's jpg(s) already
            else if (count > 0)
            {
                // Close the current file and write a new one
                fclose(out);
                sprintf(cardname, "%03i.jpg", count);
                out = fopen(cardname, "w");
                if (out == NULL)
                {
                    printf("jpg cannot be opened\n");
                    return 2;
                }
                fwrite(buffer, sizeof(BYTE), BLOCK_SIZE, out);
                count++;
            }
        }

        // If not, start of a new jpg
        else if (count > 0)
            {
                fwrite(buffer, sizeof(BYTE), BLOCK_SIZE, out);
            }
    }

    fclose(out);
    fclose(card);
}
