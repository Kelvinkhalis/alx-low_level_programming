#include "main.h"
/**
 * _strncat - function concatenate two on  strings
 * using n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[i] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';
	return (dest);
}

