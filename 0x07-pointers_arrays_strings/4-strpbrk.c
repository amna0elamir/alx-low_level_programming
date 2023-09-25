#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - func searches for string of any of bytes.
 * @s: an input string
 * @accept: an input to match with string s
 * Return:  a pointer of match accept,
 * or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = p;
		s++;
	}
	return (NULL);
}
