#include "holberton.h"
/**
 * _printd - print any number
 * Return: void
 * @n: number
 */
void _printd(int n)
{
<<<<<<< HEAD
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		_printd(n / 10);
	_putchar(n % 10 + '0');
=======
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	n1 = n;
	if (n1 / 10)
		_printd(n1 / 10);
	_putchar(n1 % 10 + '0');
>>>>>>> Features
}
