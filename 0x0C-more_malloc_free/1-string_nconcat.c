#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - func that concat two string
 * @s1:input string
 * @s2:input string
 * @n: input byte
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int len1;
	int len2;
	char *new;

	if (s1 == NULL)
		s1 = " ";
	while (s1[len1])
		len1++;
	if (s2 == NULL)
		s2 = " ";
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;
	new = malloc(len1 + n + 1);
	if (new == NULL)
		return (NULL);
	for (; i < (len1 + n); i++)
	{
		if (i < len1)
		{
			new[i] = *s1;
			s1++;
		}
		else
		{
			new[i] = *s2;
			s2++;
		}
	}
	return (new);
}
