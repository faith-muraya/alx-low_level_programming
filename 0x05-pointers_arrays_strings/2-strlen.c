#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s:String 
 * Return: returns length as integer;
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
