#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog info
 *
 * @name: char
 * @age: float
 * @owner: char
 *
 * Description: struct to store info on doggy
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
