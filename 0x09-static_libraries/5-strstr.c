#include "main.h"
#include <stdio.h>

/**
 * _strstr - function locates a substring
 * @haystack: input string
 * @needle: input string
 * Return: a pointer to begin of string
 * or NULL if  not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char  *n = needle, *h = haystack;

	while (*haystack)
	{
		h = haystack;
		needle = n;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			{
				 return (haystack);
			}
		else	
			haystack = h + 1;
	}
	return (NULL);
}
