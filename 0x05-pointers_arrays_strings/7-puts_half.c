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
	int i;
	int half;

	i = 0;
	while (str[i] != '\0')
		i++;

	half = i / 2;

	if (i % 2 == 1)
		half++;

	while (half < i)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
