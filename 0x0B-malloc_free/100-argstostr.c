#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[index++] = av[a][b];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
