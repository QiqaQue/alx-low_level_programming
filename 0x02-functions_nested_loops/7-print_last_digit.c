#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @a: number
 *
 * Return: returns the last digit
 */

int print_last_digit(int a)
{
	int lst = a % 10;

	if (lst < 0)
		lst = lst * -1;

	_putchar(lst + '0');
	return (0);
}
