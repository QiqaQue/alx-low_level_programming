#include "main.h"
#include <string.h>
/**
 * puts_half -  prints half of a string, followed by a new line
 *
 * @str = string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int half = length / 2;

	if (length % 2 == 1)
	{
		half = (length - 1) / 2;
	}
	printf("%.*s\n", length - half, str + half);
}
