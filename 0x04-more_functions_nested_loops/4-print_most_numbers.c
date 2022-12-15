#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Do not print 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int cnt;

	for (cnt = '0'; cnt <= '9'; cnt++)
		if (cnt != '2' && cnt != '4')
			_putchar(cnt);

	_putchar('\n');
}

