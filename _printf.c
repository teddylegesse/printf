#include "main.h"
/**
 * choice - specifies the choices
 * @format: number of args to be passed
 * Return: choices
 */
int (*choice(const char *format))(va_list)
{
	int i;
	printer q[] = {
	{"c", printer_c},
	{"s", printer_s},
	{NULL, NULL}
	};

	for (i = 0; q[i].a != NULL; i++)
	{
		if (*(q[i].a) == *format)
		break;
	}
	return (q[i].p);
}
/**
 * _printf - function that prints anything
 * @format: number of args passed
 * Return: length of chars printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;
	int (*p)(va_list);

	if (format == NULL)
		return (1);
	va_start(args, format);
	for (i = 0; format[i] != '\0';)
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		p = choice(&format[i + 1]);
		if (p != NULL)
		{
			count += p(args);
			i += 2;
			continue;
		}
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(args);
	return (count);
}
