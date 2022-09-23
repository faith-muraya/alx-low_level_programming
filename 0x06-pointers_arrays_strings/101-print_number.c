#include "main.h"

/**
 * print_number - prints any integer with put char 
 * @n: Number of prints
 *
 * Return: Nothing
 */
void print_number(int n);
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		n = -num;
	}

	if ((num / 10) > 0)
		printf_number(num / 10);

	_putchar(num % 10 + '0');
}
