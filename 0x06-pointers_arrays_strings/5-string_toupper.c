#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: parameter
 * Return: returns a character
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
