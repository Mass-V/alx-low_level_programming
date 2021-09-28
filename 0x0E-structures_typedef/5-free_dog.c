#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - Frees dog.
 * @d: The dog to be freed.
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	
	free(d->owner);
	free(d->name);
	free(d);
}
