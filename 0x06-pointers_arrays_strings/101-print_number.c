#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed.
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
	{
		a = n;
	}
	if (a / 10)
		printf_number(a / 10);

	_putchar((a % 10) + '0');
}
