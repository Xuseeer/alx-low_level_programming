#include "main.h"

/**
 * _strcmp - compares twostrings
 * @s1: first string tocompare
 * @s2: second string tocompare
 *
 * Return: lessthan 0 if s1 is lessthan s2, 0 if they're equal,
 * more than 0 if s1 is greaterthan s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
