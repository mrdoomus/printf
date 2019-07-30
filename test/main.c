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

	int n = _printf("%o\n", (unsigned int)INT_MAX + 1024);
	int m = printf("a\n");

	printf("%d, %d\n", n, m);

	return (0);

}
