#include "dog.h"

/**
 * free_dog - Free dog data entry mem
 * @d: Dog to free
 * Return: None
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	free(d->name);
	free(d->owner);
	free(d);
}
