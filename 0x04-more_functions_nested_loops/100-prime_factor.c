#include <stdio.h>

/**
 * main - prints largest  prime factor
 *
 * Return:Always 0
 */

int main(void)
{
	long int n;
	long int p;

	n = 612852475143;
	for (p = 2; p <= n; p++)
	{
		if (n % p == 0)
		{
			n /= p;
			p--;
		}
	}
	printf("%li\n", p);
	return (0);
}
