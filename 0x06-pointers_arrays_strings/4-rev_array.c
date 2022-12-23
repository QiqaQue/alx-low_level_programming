#include "main.h"

/**
 * reverse_array- reverses the content of an array of integers
 *
 * @a: array
 * @n:number of elements of the array
 *
 * return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = n - 1; i >= n / 2; i--)
	{
		t = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = t;
	}
}
