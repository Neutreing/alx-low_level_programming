#include "main.h"

/**
 * swap_int - the function that swaps the values of two integers.
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
