#include "main.h"

/**
 * _isupper - that checks for uppercase character
 *
 * @c: character
 *
 * Return: returns 1 if c is uppercase,rturns 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

