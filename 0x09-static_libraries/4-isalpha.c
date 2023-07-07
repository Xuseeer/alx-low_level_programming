#include "main.h"

/**
 * _isalpha - checks foralphabetic character
 * @c: thecharacter tobe checked
 * Return: 1 if c is aletter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
