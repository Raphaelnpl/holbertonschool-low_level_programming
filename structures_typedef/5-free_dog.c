#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: Pointer to the dog structure.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Free dynamically allocated memory */
	free(d->name);
	free(d->owner);
	free(d);
}
