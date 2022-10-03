#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create a array an initialize with a char
 * @size: size of the array
 * @c: Initialize char for the array
 *
 * Return: pointer to the array. NULL is size is 0 or fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
