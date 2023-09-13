#include "main.h"
/**
 * print_to_98 - function to print all natural  numbers to 98
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; --count)
			printf("%d, ", count);
	else
		for (count = n; count < 98; ++count)
			printf("%d, ", count);
	printf("98\n");
}
