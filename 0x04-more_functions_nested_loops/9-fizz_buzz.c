#include <stdio.h>

/**
 * main - Solve fizz buzz from numbers 1 to 100
 * Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz.
 * Multiples of both 3 and 5 print FizzBuzz.
 * Return: 0
 */
int main(void)
{
	int count = 1;

	while (count <= 100)
	{
		if (count % 3 == 0 && count % 5 == 0)
			printf("FizzBuzz");
		else if (count % 3 == 0)
			printf("Fizz");
		else if (count % 5 == 0)
			printf("Buzz");
		else
			printf("%d", count);

		if (count != 100)
			printf(" ");
		count++;
	}
	printf("\n");

	return (0);
}
