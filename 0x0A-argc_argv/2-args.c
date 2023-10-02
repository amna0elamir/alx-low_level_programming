#include <stdio.h"

/** main -  prog that prints all the number of arguments passed into it
 * @argc: arg count
 * @argv: arg vector
 *
 * Result: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	if (argc > 0)
		printf("%d\n",argc);

	return (0);
}
