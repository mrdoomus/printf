#include <limits.h>
#include <stdio.h>
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

	int n = _printf("Testing:%d %i %c %s\n", 100, 12, 'C', "Happiness");
	int m = printf("Testing:%d %i %c %s\n", 100, 12, 'C', "Happiness");

	printf("%d, %d\n", n, m);

	return (0);

}
