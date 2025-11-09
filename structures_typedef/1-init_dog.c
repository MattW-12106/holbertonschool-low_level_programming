#include "dog.h"

/**
 * init_dog - init function for dog struct
 *
 * @d: pointer to dog struct
 * @name: char name
 * @age: float of age
 * @owner: char of owner
 *
 * Return: pointer to struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
