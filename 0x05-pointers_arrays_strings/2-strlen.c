#include "main.h"

/**
 * _strlen - calculates length of string
 * @s: pointer to the character array.
 * Return: length of the string
 */
int _strlen(char *s)
{
int i;

i = 0;

while (*s != '\0')
{
i++;
s++;
}
return (i);
}
