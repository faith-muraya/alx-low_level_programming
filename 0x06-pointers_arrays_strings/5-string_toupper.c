#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: address tp the string
 */
char *string_toupper(char *)
{
	int index = 0;

	while ([index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
