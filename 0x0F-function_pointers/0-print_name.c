#include "function_pointers.h"

/**
  * print_name - function that prints a name from a function pointer.
  * @name: char string
  * @f: fnction pointer
  */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
