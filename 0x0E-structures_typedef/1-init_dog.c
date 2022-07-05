#include "dog.h"


/**
 * init_dog - initialize the variable of type struct dog
 * @d: variable of type struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
