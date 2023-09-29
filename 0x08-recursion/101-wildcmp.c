#include <stdio.h>

/**
 * wildcmp - function that compares two strin
 * @s1: input string
 * @s2:input str
 *
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2 || *s2 == '?')
		return (wildcmp(s1 + 1, s2 + 1));
	if ((*s2 == '*' && *s1 != '\0'  && wildcmp(s1, s2 + 1))
	|| wildcmp(s1 + 1, s2))
		return (1);
	if (*s2 == '*' && *(s1 + 1) && *s2)
		return (0);
	return (0);
}
