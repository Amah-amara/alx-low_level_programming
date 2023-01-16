#ifndef DOG_H
#define DOG_H

/**
 * struct dog - user defined data type
 * @name: name of dog
 * @age: age of dog
 * @owner: owners name
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
