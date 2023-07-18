#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - A function that frees the memory ofvthevdog sruct
 * @d: dog struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
