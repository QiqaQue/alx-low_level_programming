#include <stdio.h>
/**
 * Some comment
 *
 * another comment
 *
 */
int main(void)
{
	/**
	 * Print sizeof varibles
	 */
	printf("Size of a a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a a float: %lu byte(s)\n", sizeof(float));
	printf("Size of a a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a a long double: %lu byte(s)\n", sizeof(long double));
	printf("Size of a a long long: %lu byte(s)\n", sizeof(long long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	/**
	 * Describe return
	 */
	return (0);
}
