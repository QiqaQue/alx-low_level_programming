#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int cnt;

	for (n = 0; n <= 9; n++)
	{
		for (cnt = 0; cnt < 15; cnt++)
		{
			if (cnt >= 10)
				_putchar('1');
			_putchar(cnt % 10 + '0');
		}
		_putchar('\n');
	}
}
