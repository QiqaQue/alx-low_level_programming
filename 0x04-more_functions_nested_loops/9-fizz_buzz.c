#include <stdio.h>

/**
 * main -  prints the numbers from 1 to 100,multiples of three print Fizz
 * multiples of five print Buzz, multiples of both three & five print FizzBuzz
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int cnt;

	cnt = 1;
	printf("%d ", cnt);
	for (cnt = 2; cnt <= 100; cnt++)
	{
		if ((cnt % 3 == 0) && (cnt % 5 == 0))
			printf("FizzBuzz ");
		else if (cnt % 3 == 0)
			printf("Fizz ");
		else if (cnt % 5 == 0)
			printf("Buzz ");
		else
		{
			if (cnt != 100)
				printf("%d ", cnt);
			else
				printf("%d", cnt);
		}

	}
	printf("\n");
	return (0);
}
