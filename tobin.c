#include <stdio.h>
/**
 * _tobin - Converts an usigned int to binary.
 * @n: Passed number.
 * Return: Returns a binary converted number.
**/
unsigned int _tobin(unsigned int n)
{
if (n < 2)
	return (n);

return (_tobin(n / 2) * 10 + n % 2);
}
