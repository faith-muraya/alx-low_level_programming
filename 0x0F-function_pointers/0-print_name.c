#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: The name to prints
 * @f: Pointer to function
 * Return:nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
