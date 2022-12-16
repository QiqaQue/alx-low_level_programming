#include "main.h"

/**
 * print_number -prints an integer.
 *
 * @n: the int
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int m;
	unsigned int d;
	unsigned int cnt;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	cnt = 1;

	while (d > 9)
	{
		d /= 10;
		cnt *= 10;
	}

	for (; cnt >= 1; cnt /= 10)
	{
		_putchar(((m / cnt) % 10) + 48);
	}

}
