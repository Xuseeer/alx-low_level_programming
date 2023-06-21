#include "main.h"
/**
 * _abs - function that computes the absolute
 * value of an integer
 * @n: takes in integer type input for function
 * return: always 0 (success)
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
