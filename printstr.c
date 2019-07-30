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

/**
 * rot13 - Function to encrypt a string to rot13
 * @s: is a pointer to a char array
 * Return: Returns rot13 encrypted string
**/
char *rot13(char *s)
{
	char input[1000] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[1000] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
		}
		i++;
	}

return (s);
}
