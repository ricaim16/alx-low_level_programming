#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *copy;
	int a, b = 0;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		b++;

	copy = malloc(sizeof(char) * (b + 1));

	if (copy == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		copy[a] = str[a];

	copy[b] = '\0';

	return (copy);
}
