#include <stdio.h>
/**
 * _numlen - Calculates number of digits of a number.
 * @n: Passed number.
 * Return: Returns teh number of digits of a number.
**/
int _numlen(int n) 
{
int cnt = 0;

while (n != 0)
{
	n = n / 10;
	cnt++;
}

return (cnt);
}
