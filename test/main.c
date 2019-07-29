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

<<<<<<< HEAD
	int n = _printf("%d\n", 0000);
	int m = printf("%d\n", 0000);
=======
	int n = _printf("%d\n", INT_MIN);
	int m = printf("%d\n", INT_MIN);
>>>>>>> Features

	printf("%d, %d\n", n, m);

	return (0);

}
