#include "variadic_functions.h"

/**
 * print_numbers - func that prints numbers, followed by a new line.
 * @separator: string printed
 * @n: integer passed
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{

		if (i > 0 && separator != NULL)
			printf("%s", separator);

		printf("%d", va_arg(arg, int));
	}

	printf("\n");
	va_end(arg);
}
