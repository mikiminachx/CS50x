#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Treating it as an array
    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x);
}

// Notes:
// ==3524== 12 bytes in 1 blocks are definitely lost in loss record 1 of 1
// ==3524==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
// ==3524==    by 0x109151: main (memory.c:7)
// ==3524==
// ==3524== LEAK SUMMARY:
// ==3524==    definitely lost: 12 bytes in 1 blocks
// Because it didn't free the memory, there will be memory leak.
