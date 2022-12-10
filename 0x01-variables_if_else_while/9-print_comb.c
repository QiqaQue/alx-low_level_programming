#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
