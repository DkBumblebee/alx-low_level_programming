#include "dog.h"

/**
 * init_dog - Creates data struct for init_dog
 * @d: Dog name
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
