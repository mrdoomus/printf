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

	int n = _printf("%d,holla %c, %s, %", 10, 'Y', "Happy");
	int m = printf("%d,holla %c, %s, %", 10, 'Y', "Happy");

	printf("%d, %d\n", n, m);

	return (0);

}
