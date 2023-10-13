#include "variadic_functions.h"

/**
 * print_all - func print anything
 * @format: pointer to string
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	const char *ptr;
	int i = 0;
	int int_val;
	char char_val;
	float float_val;
	char *str_val;

	va_start(arg, format);
	ptr = format;

	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				char_val = va_arg(arg, int);
				printf("%c", char_val);
				break;
			case 'i':
				int_val = va_arg(arg, int);
				printf("%d", int_val);
				break;
			case 'f':
				float_val = va_arg(arg, double);
				printf("%f", float_val);
				break;
			case 's':
				str_val = va_arg(arg, char*);
				if (str_val == NULL)
					printf("(nill");
				else
					printf("%s", str_val);
				break;
		}
		if ((*(ptr + i) == 'c' || *(ptr + i) == 'i' || *(ptr + i) == 'f' || *(ptr + i) == 's') && *(ptr + i + 1) != '\0')
			printf(", ");
		ptr++;
	}
	printf("\n");
	va_end(arg);
}
