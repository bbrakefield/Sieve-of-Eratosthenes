#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
    time_t start_t, end_t;

    /* Calculate and present execution time for C program. */
    printf("Running C program...\n");
    start_t = clock();
    system("..\\_sieve_C\\Debug\\sieve.exe");
    end_t = clock();
    printf("Time for C program: %f\n\n", (double) ((end_t - start_t ) / CLOCKS_PER_SEC));

    /* Calculate and present execution time for assembly program. */
    printf("Running ASM program...\n");
    start_t = clock();
    system("..\\_sieve_asm\\Debug\\sieve.exe");
    end_t = clock();
    printf("Time for ASM program: %f\n\n", (double) ((end_t - start_t ) / CLOCKS_PER_SEC));

    printf("hit any key to continue...\n");
    _getche();

    return 0;
}

