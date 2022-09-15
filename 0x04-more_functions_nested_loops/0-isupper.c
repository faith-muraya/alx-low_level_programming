#include "main.h"

/**
 * _isupper - checks if a  character is uppercase or not
 * @c: character to check.
 * Return: 1 i c is uppercase, otherwise return 0.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
