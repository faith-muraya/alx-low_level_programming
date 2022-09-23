#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char *lookup;

	lookup = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	while (str[i] != '\0')
	{
		j = 0;
		while (lookup[j] != '\0')
		{
			if (str[i] == lookup[j])
			{
				int inex;

				index = ((j + 13) % 26) + ((j / 26) * 26);
				str[i] = lookup[index];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
