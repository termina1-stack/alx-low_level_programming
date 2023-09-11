#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - fxn that initializes a variable of type `struct dog`
  * @d: struct dog
  * @name: string name
  * @age: integer age
  * @owner: owners name string
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
