#include "main.h"
/**
 * _strcmp - function compare string
 * @str1: input string
 * @str2:  input string
 *
 * Return: (str1 - str2)
 */

int *_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str[i]);
		}
		i++;
	}
	return (0);
}


