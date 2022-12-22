#include "main.h"

/**
 * _strncpy -  copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: bytes
 *
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int src_lngth;

	i = 0;
	src_lngth = 0;

	while (src[i++])
		src_lngth++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_lngth; i < n; i++)
		dest[i] = '\0';

	return (dest);


}

