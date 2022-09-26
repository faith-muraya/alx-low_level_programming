#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: address to memory block
 * @n: char to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1 ] = b;
		n --;
	}
	return (s);
}
