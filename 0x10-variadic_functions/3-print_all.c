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
       	char *str_val;

	va_start(arg, format);
	ptr = format;
	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				str_val = va_arg(arg, char*);
				if (str_val == NULL)
					printf("(nill");
				else
					printf("%s", str_val);
				break;
		}
		if ((*(ptr + i) == 'c' || *(ptr + i) == 'i' || *(ptr + i) == 'f' 
					|| *(ptr + i) == 's') && *(ptr + i + 1) != '\0')
			printf(", ");
		ptr++;
	}
	printf("\n");
	va_end(arg);
}
