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
}
