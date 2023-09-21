#include "main.h"
/**
 * cap_string - function to capitalize any word
 * @s: input string
 *
 * Return: capital of input
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (!(s[i] >= 'a' && s[i] <= 'z'))
	{
		i++;
		if (s[i - 1] == ' ' ||
		s[i - 1] == '\t' ||
		s[i - 1] == '\n' ||
		s[i - 1] == ',' ||
		s[i - 1] == ';' ||
		s[i - 1] == '.' ||
		s[i - 1] == '!' ||
		s[i - 1] == '?' ||
		s[i - 1] == '"'	||
		s[i - 1] == '(' ||
		s[i - 1] == ')' ||
		s[i - 1] == '{' ||
		s[i - 1] == '}')
			{
			s[i] -= 32;
			i++;
			}
	}
	
	return (s);
}


