#include "main.h"

/**
  * _islower - checks for lowercase character
  * @c: character to be checked
  * Return: 1 if character is lowercase, and 0 otherwise.
  */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
