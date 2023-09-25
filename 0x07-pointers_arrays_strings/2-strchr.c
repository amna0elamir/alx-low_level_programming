#include "main.h"
#define NULL 0

/**
 * _strchr - function to locate a character
 * @s: input strings
 * @c: search for c
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}
