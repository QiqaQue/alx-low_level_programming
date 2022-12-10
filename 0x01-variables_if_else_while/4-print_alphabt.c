#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 *	except q and e
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char a;

	for (char a = 'a'; a <= 'z'; a++)
		if (a != 'q' && a != 'e')
			putchar(a);
	putchar('\n');
	return (0);
}
