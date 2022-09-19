#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string, followe by a new line.
 * @str: input tring to print.
 * Description: prints a string
 * On success: return no error
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
