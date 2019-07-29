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

	int n = _printf("%c, %d, %s\n", 'J', 10, "Happy");
	int m = printf("%c, %d, %s\n", 'J', 10, "Happy");

	printf("%d, %d\n", n, m);

	return (0);

}
