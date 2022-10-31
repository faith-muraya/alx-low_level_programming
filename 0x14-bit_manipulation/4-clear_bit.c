#include "main.h"

/**
 * clear_bit - sets a bit to 0 at index
 * @n: number to chnage
 * @index: index where to change
 *  Return: 1 if success, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
