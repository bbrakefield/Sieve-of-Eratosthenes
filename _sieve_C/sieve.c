#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 

#define LIMIT 10000

int main()
{
    int i, j, k;
    int primeArray[LIMIT];
	for (k = 0; k < LIMIT; k++) {

		// fill array with 0 (true)
		for (i = 2; i < LIMIT; i++) {
			primeArray[i] = 0;
		}

		/* sieve algoirithm */
		for (i = 2; i < LIMIT; i++) { 
			if (!primeArray[i]) { // check if index is prime.
				for (j = 2; i * j < LIMIT; j++) {
					primeArray[i * j] = 1; // set non prime indexes to one
				}
			}
		}
	}
    return 0;
}

