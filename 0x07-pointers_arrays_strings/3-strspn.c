 #include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input string
 * @accept: input
 * Return: pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, f;
	char *p = accept;

	while (*s)
	{
		f = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				f = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = p;
		if (f == 0)
			break;

	}
	return (count);
}
