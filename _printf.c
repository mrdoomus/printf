#include <stdarg.h>
#include "holberton.h"
/**
 * _printf - print any formated string
 * @format: string format
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int count = 0, printed = 0;
	char *s;

	va_start(list, format);
	while (format && format[count])
	{
		if (format[count] == '%' && format[count + 1])
		{
			switch (format[count + 1])
			{
				case '%':
					_putchar(format[count + 1]);
					printed += 1;
					break;
				case 'c':
					_putchar(va_arg(list, int));
					printed += 1;
					break;
				case 's':
					s = va_arg(list, char *);
					if (s)
					{
						printed += _strlen(s);
						_puts(s);
					}

					break;
				default:
					_putchar('%');
			} count += 2;
		}
		else
		{
			_putchar(format[count]);
			printed += 1;
			count += 1;
		}
	}
	return (printed);
}
