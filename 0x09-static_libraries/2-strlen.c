#include "main.h"

/**
 * _strlen - returns thelength of astring
 * @s: string toevaluate
 *
 * Return: thelength of thestring
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
