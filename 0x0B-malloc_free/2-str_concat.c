#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int x_index, concat_index = 0, y = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x_index = 0; s1[x_index] || s2[x_index]; x_index++)
		y++;

	concat_str = malloc(sizeof(char) * y);

	if (concat_str == NULL)
		return (NULL);

	for (x_index = 0; s1[x_index]; x_index++)
		concat_str[concat_index++] = s1[x_index];

	for (x_index = 0; s2[x_index]; x_index++)
		concat_str[concat_index++] = s2[x_index];

	return (concat_str);
}
