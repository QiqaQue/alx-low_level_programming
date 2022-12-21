#include "main.h"
#include <string.h>

/**
 * rev_string - t reverses a string
 *
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int j;
	char tmp;
	
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
