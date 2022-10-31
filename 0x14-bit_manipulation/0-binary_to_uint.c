#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i;

	if (!b)
		return (0);

	for (i = 0; *(b + i); i++)
	{
		n = n << 1;
		if (*(b + i) == '1')
			n = n | 1;
		else if (*(b + i) != '0')
			return (0);
	}
	return (n);
}
