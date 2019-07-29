#include "holberton.h"
/**
 * _printd - print any number
 * Return: void
 * @n: number
 */
void _printd(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		_printd(n / 10);
	_putchar(n % 10 + '0');
}
