#include "main.h"

/**
 * rev_string - reverse a string
 * @s: The string to be modified
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char aux;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		aux = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = aux;
	}
}
