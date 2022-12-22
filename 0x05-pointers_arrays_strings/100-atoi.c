#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: string
 *
 * Return: int
 */

int _atoi(char *s)
{
	unsigned int num;
	int sign;
	char *temp;

	temp = s;
	num = 0;
	sign = 1;
	while (*temp != '\n' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			num = num * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);
}