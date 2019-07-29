#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(const char c);
int _strlen(const char *s);
void _puts(const char *str);
int _numlen(int n);
void _printd(int n);
void format_1(va_list list, int *printed);
void format_values(va_list list, const char *format, int *printed, int *count);
#endif
