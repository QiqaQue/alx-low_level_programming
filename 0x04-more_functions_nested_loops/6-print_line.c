#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: is the number of times the character _ should be printed
 *
 * Return: nothing
 */
void print_line(int n)
{
	int cnt;

	for (cnt = 0; cnt < n; cnt++)
		_putchar('_');

	_putchar('\n');

}
