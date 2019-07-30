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
	int count = 0, printed = 0;

	if (!format)
		return (-1);
	va_start(list, format);
	while (format && format[count])
	{
		if (format[count] == '%')
		{
			if (format[count + 1] == '\0')
				return (-1);
			format_values(list, format, &printed, &count);
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
/**
 * format_values - format string
 * @list: list of args
 * @format: format string
 * @printed: number of chars printed
 * @count: count iterator
 * Return: pointer to func that correspond to operator
 */
void format_values(va_list list, const char *format, int *printed, int *count)
{
	int f = 0, tobi = 0, tooc = 0;
	unsigned int num = 0;

	switch (format[*count + 1])
	{
		case '%':
			_putchar(format[*count + 1]);
			*printed += 1;
			break;
		case 'c':
			_putchar(va_arg(list, int));
			*printed += 1;
			break;
		case 's':
			format_string(list, printed);
			break;
		case 'd': case 'i':
				format_int(list, printed);
				break;
		case 'b':
			num = va_arg(list, unsigned int);
			tobi = _tobinoct(num, 0, 2);
			*printed  += tobi;
			break;
		case 'o':
			num = va_arg(list, unsigned int);
			tooc = _tobinoct(num, 0, 8);
			*printed += tooc;
			break;
		default:
			*count += 1;
			*printed += 1;
			_putchar('%');
			f = 1;
	}
	if (!f)
		*count += 2;
}
/**
 * format_int - test number formats
 * @list: list of args
 * @printed: pointer to amount of printed chars
 * Return: void
 */
void format_int(va_list list, int *printed)
{
	int num = va_arg(list, int);

	if (num <= 0)
		*printed += 1;
	_printd(num);
	*printed += _numlen(num);
}
/**
 * format_string - test string format
 * @list: list of args
 * @printed: pointer to amount of printed chars
 * Return: void
 */
void format_string(va_list list, int *printed)
{
	char *s;

	s = va_arg(list, char *);

	if (s)
	{
		*printed += _strlen(s);
		_puts(s);
	}
	else
	{
		*printed += _strlen("(null)");
		_puts("(null)");
	}
}
