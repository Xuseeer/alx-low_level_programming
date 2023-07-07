#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area tobe filled
 * @b: char tocopy
 * @n: number of times tocopy b
 *
 * Return: pointer to thememory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
