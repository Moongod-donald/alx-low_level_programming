#ifndef DOG_H
#define DOG_H
/**
 * struct dog- a structure for dogs
 * @name: a char mamber value for the names of dogs
 * @age: a float member for value for the age
 * @owner: a chat member value for the owner
 *
 * Description: This structure hold values of dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
