#include <limits.h>
#include <stdio.h>
#include <limits.h>
#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/**_printf("This is a test: %z - %% - % - % c - \\ - \" - \' - %\n", 'A');
	printf("This is a test: %z - %% - % - % c - \\ - \" - \' - %\n", 'A');**/

	int n = _printf("%d\n", INT_MAX);
	int m = printf("%d\n", INT_MAX);

	printf("%d, %d\n", n, m);

	return (0);

}
