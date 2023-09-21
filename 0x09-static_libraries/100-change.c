#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments given
 * @argv: array all the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, index;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	index = 0;
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			index += 1;
		}
		else if (cent >= 10)
		{
			cents -= 10;
			index += 1;
		}
		else if (cent >= 5)
		{
			cents -= 5;
			index += 1;
		}
		else if (cent >= 2)
		{
			cents -= 2;
			index += 1;
		}
		else
		{
			cents -= 1;
			index += 1;
		}
	}
	printf("%d\n", index);
	return (0);
}
