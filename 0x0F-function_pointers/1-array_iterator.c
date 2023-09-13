#include "function_pointers.h"

/**
  * array_iterator - function that executes a function given as a parameter
  * @array: array of integers
  * @size: size of array
  * @action: function pointer
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (!array || !action)
		return;

	for (index = 0; index < size; index++)
		action(array[index]);
}
