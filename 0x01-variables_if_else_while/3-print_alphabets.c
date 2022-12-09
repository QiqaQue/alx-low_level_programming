#include <stdio.h>

/**
 * main - Prints a to z in upper case and lower case
 *
 * Return: Always 0
 *
 */
int main(void)
{
	for (char a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (char a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
