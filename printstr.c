#include "holberton.h"

/**
 * _printstr - prints a string in reverse.
 * @s: is a pointer to a char array
 * Return: Returns the transformed pointer
**/

void _printstr(char *s)
{

if (*s == 0)
	return;

s++;
_printstr(s);
s--;
_putchar(*s);

}
