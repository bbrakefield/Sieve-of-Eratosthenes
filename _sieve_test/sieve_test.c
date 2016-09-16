#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define CPATH "\"C:\\Users\\brann\\Documents\\Visual Studio 2010\\Projects\\program1_sieve_asm_and_C\\_sieve_C\\Debug\\sieve.exe\""
#define ASMPATH "\"C:\\Users\\brann\\Documents\\Visual Studio 2010\\Projects\\program1_sieve_asm_and_C\\_sieve_asm\\Debug\\sieve.exe\""

int main()
{
	time_t start_t, end_t, total_t;

    /* Calculate and present execution time for C program. */
	start_t = clock();
    system(CPATH);
	end_t = clock();
	total_t = (end_t - start_t) / (double) CLOCKS_PER_SEC;
	printf("Total time taken by CPU: %.21f\n", total_t);

    /* Calculate and present execution time for assembly program. */
	start_t = clock();
    system(ASMPATH);
	end_t = clock();
	total_t = (end_t - start_t) / (double) CLOCKS_PER_SEC;
	printf("Total time taken by CPU: %.21f\n", total_t);
	
    printf("hit any key to continue...\n");
    _getche();

    return 0;
}

