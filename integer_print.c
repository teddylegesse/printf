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
	stdout('-');
n = -n;
}
if (n == 0)
count += stdout('0');
if (n / 10)
{
count += stdout((n / 10) + '0');
count += stdout(n % 10 + '0');
}
return (count);
}
