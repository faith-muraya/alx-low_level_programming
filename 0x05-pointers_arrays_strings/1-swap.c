#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to be swaped.
 * @b: The second integer to be swaped.
 */
void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
