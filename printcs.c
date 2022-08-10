#include "main.h"
/**
 * printer_c - print charactor argument
 * @c: charactor argument
 * Return: charactor
 */
int printer_c(va_list c)
{
char a;
a = (char)va_arg(c, int);
_putchar(a);
va_end(c);
return (1);
}

/**
 * printer_s - print strings
 * @s: string argument
 * Return: string
 */
int printer_s(va_list s)
{
int i;
char *ptr;
ptr = va_arg(s, char *);
for (i = 0; ptr[i]; i++)
{
_putchar(ptr[i]);
}
return (i);
va_end(s);
}
/**
 * printer_d - printes the decimal argument
 * @d: is the decimal argument
 * Return: decimal
 */
int printer_d(va_list d)
{
	int count = 0;
	unsigned int b;

	b = va_arg(d, int);
	if (b < 0)
	{
		_putchar('-');
		count = -count;
	}
	if (b == 0)
		count += _putchar('0');
	if (b / 10)
	{
		count += _putchar((b / 10) + '0');
		count += _putchar(b % 10 + '0');
	}
	va_end(d);
	return (count);
}
/**
 * printer_i - prints interger
 * @i: value passed
 * Return: length
 */
int printer_i(va_list i)
{
	int count = 0;
	unsigned int b;

	b = va_arg(i, int);
	if (b < 0)
	{
		_putchar('-');
		count = -count;
	}
	if (b == 0)
		count += _putchar('0');
	if (b / 10)
	{
		count += _putchar((b / 10) + '0');
		count += _putchar(b % 10 + '0');
	}
	va_end(i);
	return (count);
}
