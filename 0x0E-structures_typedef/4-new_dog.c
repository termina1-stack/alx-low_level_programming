#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - function that creates a new dog
  * @name: char string name
  * @age: int age
  * @owner: char string owner
  * Return: pointer to new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggy;
	int i, j, k;
	char *s, *t;

	doge = malloc(sizeof(struct dog));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	s = malloc(sizeof(char) * i + 1);
	if (s == NULL)
	{
		free(doggy);
		return (NULL);
	}
	t = malloc(sizeof(char) * j + 1);
	if (t == NULL)
	{
		free(s);
		free(doggy);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		s[k] = name[k];
	for (k = 0; k <= j; k++)
		t[k] = owner[k];
	doggy->name = s;
	doggy->age = age;
	doggy->owner = t;
	return (doggy);
}
