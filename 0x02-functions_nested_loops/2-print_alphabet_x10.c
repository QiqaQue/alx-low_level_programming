#include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: void
 *
 *
 */

/*b ffc jb kj h*/
void print_alphabet_x10(void)
{
	char a;
	int t;

	for (t = 1; t <= 10 ; t++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		 _putchar('\n');
	}
}
