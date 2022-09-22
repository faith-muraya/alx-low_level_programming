#include "main.h"

/**
 * print_number - prints any integer with put char 
 * @n: Number of prints
 *
 * Return: Nothing
 */
void print_number(int n);
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
		printf_number(x / 10);
	_putchar(x % 10 + '0');
}
