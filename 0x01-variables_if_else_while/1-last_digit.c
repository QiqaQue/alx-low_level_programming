#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random number and tells yiu id it positve, negative or 0
 *
 * Return: Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lst;
	int o_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o_n = n;

	if (n < 0)
	{
		n = n * -1;
	}
	
	lst = n % 10;

	if (o_n < 0)
	{
		 n = n * -1;
	}
	if (lst > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst);
	else if (lst == 0)
		printf("Last digit of %d is %d and is 0\n", n, lst);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst);
	
	return (0);
}
