#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int help_palindrome(char *s, int len);

/**
 *_strlen_recursion - A function to calc length of the string s
 * @s: input string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}							}
	return (0);
}
/**
 * is_palindrome - A function that checks if s is a palindrome string
 * @s: An inpuit string
 * Return: 1 if is string is a palindrome or 0 in otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (help_palindrome(s, len));
}

/**
 * help_palindrome - A function with a revesed string
 * @s:input string
 * @len: the length of the string s
 * Return: A reverse string
 */
int help_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
		{
		return (helper_palindrome(s + 1, len - 2));
		}
	else
	return (0);
}
