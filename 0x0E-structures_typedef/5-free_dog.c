#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dog.
 * @d: The dog to be freed.
 */
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}

