#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print-alphabet - prints the alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int n;

for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}

_putchar('\n');
}
