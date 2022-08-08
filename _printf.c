#include "main.h"
/**
 * _printf - print charactor string
 * @format: sepecifaies format string
 * Return: lists of charactor
 */
int _printf(const char *format, ...)
{
int list = 0, i;
va_list arg;
va_start(arg, format);
for (i = 0; format[i] != '\0';)
{
if (format[i] != '%')
{
list += _putchar(format[i]);
i++;
}
else if (format[i] == '%' && format[i + 1] != ' ')
{
if (format[i + 1] == 'c')
{
list += _putchar(va_arg(arg, int));
}
if (format[i + 1] == 's')
list += _print_string(va_arg(arg, char *));
if (format[i + 1] == '%')
list += _putchar('%');
if (format[i + 1] == 'd')
list += decimal_print(va_arg(arg, int));
if (format[i + 1] == 'i')
list += integer_print(va_arg(arg, int));

i = i + 2;
}
}
return (list);
}
