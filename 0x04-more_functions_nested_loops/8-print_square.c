#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of the square
 *
 * Return: nothing
 */
void print_square(int size)
{
	int j;
	int n;

	for (n = 0; n < size; n++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (n != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
