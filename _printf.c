#include "main.h"
/**
 * _printf - print charactor string
 * @format: sepecifaies format string
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
switch (format[i + 1])
{
	case 'c':
	list += _putchar(va_arg(arg, int));
break;
	default:
break;
}
i = i + 2;
}
}
return (list);
}
