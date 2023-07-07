#include "main.h"

/**
 * _puts - prints astring to stdout
 * @str: pointer to thestring toprint
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
