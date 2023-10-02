#include "main.h"
#include <stdio.h>

/**
 * _strchr - function to locate a character
 * @s: input strings
 * @c: search for c
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
