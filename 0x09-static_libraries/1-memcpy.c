#include "main.h"

/**
 * *_memcpy - copies memoryarea
 * @dest: destination memor area
 * @src: memory area tocopy from
 * @n: number of bytes tocopy
 *
 * Return: pointer todest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
