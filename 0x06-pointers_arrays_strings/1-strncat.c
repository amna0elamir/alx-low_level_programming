#include "main.h"

/** 
 * _strncat - function concatinate two string use at most n bytes from src
 * @dest : first string
 * @src : second string
 * @n : input bytess
 *
 * return void
 */
char *_strncat(char *dest,char *src)
{
	int i;
	int j;
	int n;

	i = 0;

	while(dest[i] != '\0');
		{
			i++
		}
	j = 0;

	while (j < n && src[j] =! '\0' );
		{
			dest[i] = src[j];
			i++
			j++	
		}
	
	dest[i] = '\0';
	return (dest);

}


