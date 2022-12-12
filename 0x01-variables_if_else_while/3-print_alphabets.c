#include <stdio.h>

/**
 * main - Prints a to z in upper case and lower case
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char a;
	char z;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (z = 'A'; z <= 'Z'; z++)
		putchar(z);
	putchar('\n');
	return (0);
}
