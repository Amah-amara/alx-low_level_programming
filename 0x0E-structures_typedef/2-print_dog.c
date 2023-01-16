#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct type dog
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n" d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("owner: (nil)\n");
		else
		printf("owner: %s\n", d->owner);
	}
}
