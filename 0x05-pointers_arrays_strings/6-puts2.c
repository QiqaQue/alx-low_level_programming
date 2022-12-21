#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 *
 * @str: String
 *
 * Return: void
 */

void puts2(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str) - 1 ; i++)
		if (i % 2 == 0)
			printf("%c", str[i]);

	printf("\n");
}
