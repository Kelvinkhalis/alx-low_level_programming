#include "main.h"
/**
 * _strpbrk - function for an Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[k]; a++)
		{
		if (*s == accept[a])
		return (s);
		}
	s++;
	}

return ('\0');
}

