#include "main.h"
/**
 * integer_print -  function prints decimals
 * @n: the decimal to be printed
 * Return: count
 */
int integer_print(int n)
{
int count = 0;

if (n < 0)
{
_putchar('-');
n = -n;
}
if (n == 0)
count += _putchar('0');
if (n / 10)
{
count += _putchar((n / 10) + '0');
count += _putchar(n % 10 + '0');
}
return (count);
}
