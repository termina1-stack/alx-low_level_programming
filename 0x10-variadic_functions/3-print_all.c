#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _printchar - prints char type element from va_list
  * @list: va_list passed to function
  */
void _printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
  * _printstr - prints string element from va_list
  * @list: va_list passed to function
  */
void _printstr(va_list list)
{
	char *str;

	s = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
  * _printfloat - prints float type element from va_list
  * @list: va_list passed to function
  */
void _printfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
  * _printint - prints int type element from va_list
  * @list: va_list passed to function
  */
void _printint(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
  * print_all - prints anything passed if char, int, float, or string.
  * @format: string of formats to use and print
  */
void print_all(const char * const format, ...)
{
	unsigned int j, k;
	va_list args;
	char *spr;

	checker storage[] = {
		{ "c", _printchar },
		{ "f", _printfloat },
		{ "s", _printstr },
		{ "i", _printint }
	};

	j = 0;
	spr = "";
	va_start(args, format);
	while (format != NULL && format[j / 4] != '\0')
	{
		k = j % 4;
		if (storage[k].type[0] == format[j / 4])
		{
			printf("%s", spr);
			storage[k].f(args);
			sep = ", ";
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
