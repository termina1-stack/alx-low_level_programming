#include "function_pointers.h"

/**
  * int_index - function that searches for integer
  * @array: array of integers
  * @size: number of elements in array
  * @cmp: function pointer
  * Return: index of first element that matches with cmp, -1 if none found
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}

	return (-1);
}
