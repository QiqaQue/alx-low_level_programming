#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 *	followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char a = '0'; a <= '9'; a++)
		putchar(a);
	for (char a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
