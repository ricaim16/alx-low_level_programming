#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 *
 * This function appends the string pointed to by @src to the end of the
 * string pointed to by @dest. The resulting string is terminated with a
 * null character.
 *
 * Return: A pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;


	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}


	dest[i] = '\0';
	return (dest);
}
