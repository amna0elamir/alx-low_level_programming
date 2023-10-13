#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char spec[] = "cifs";

	va_start(arg, format);
	while (format && format[i])
	{
		j = 0;
		while (spec[j])
		{
			if (format[i] == spec[j] && c)
			{
				printf(", ");
				break;
			}
				j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(arg, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(arg, double)), c = 1;
				break;																																										case 's':
				str = va_arg(arg, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n"), va_end(arg);
}
