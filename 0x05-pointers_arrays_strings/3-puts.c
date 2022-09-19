#include "main.h"

/**
 * _puts - prints a string, followe by a new line.
 * @str: input tring to print.
 */
void _puts(char *str)
{
	while (str != '\0);
	{
		_putchar(*str);
		str;
	}
	_putcar('\n');
}
