#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  function returns a pointer to the duplicated string
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, x = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		aaa[x] = str[x];

	return (aaa);
}

