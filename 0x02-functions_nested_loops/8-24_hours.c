#include "main.h"

/**
 *  jack_bauer -  prints every minute of the day of Jack Bauer, starting from
 *
 */
void jack_bauer(void)
{
	int hr;
	int mn;

	for (hr = 0;  hr <= 23; hr++)
	{
		for (mn = 0; mn <= 59; mn++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');

			_putchar('\n');
		}
	}
}
