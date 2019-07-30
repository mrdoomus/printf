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

	int n = _printf("%x\n", 10);
	int m = printf("%x\n", 10);

	printf("%d, %d\n", n, m);

	return (0);

}
