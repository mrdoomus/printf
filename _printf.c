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
	unsigned int count = 0, printed = 0, num = 0;
	char *s;

	va_start(list, format);
	while (format && format[count])
	{
		if (format[count] == '%')
		{
			if (format[count + 1] == '\0')
				return - 1;

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
				case 'd':
					num = va_arg(list, int);
					_printd(num);
					printed += _numlen(num);
					break;
				case 'i':
					num = va_arg(list, int);
					_printd(num);
					printed += _numlen(num);
					break;
				default:
					count += 1;
					printed += 1;
					_putchar('%');
					continue;
			} count += 2;
		}
		else
		{
			_putchar(format[count]);
			printed += 1;
			count += 1;
		}
	}
	va_end(list);
	return (printed);
}
