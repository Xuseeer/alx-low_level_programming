#include "main.h"

/**
 * *_strcpy - copies thestring pointed to by src
 * including theterminating null byte (\0)
 * to thebuffer pointed to by dest
 * @dest: pointer to thebuffer in which we copy thestring
 * @src: string tobe copied
 *
 * Return: thepointer todest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
