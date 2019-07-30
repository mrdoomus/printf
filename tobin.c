#include <stdio.h>
#include "holberton.h"
/**
 * _tobin - Converts an usigned int to binary.
 * @n: Passed number.
 * @m: counter.
 * Return: Returns a binary converted number.
**/
int _tobin(unsigned int n, int m)
{
	if (n < 2)
	{
		_putchar(n + '0');
		return (1);
	}
	m = _tobin(n / 2, m + 1) + 1;
	_putchar(n % 2 + '0');
	return (m);
}
