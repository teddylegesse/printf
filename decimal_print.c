#include "main.h"
/**
 * decimal_print -  function prints decimals
 * @n: the decimal to be printed
 * Return: count
 */
int decimal_print(int n)
{
	int count = 0;

	if (n == 0)
		count += stdout('0');
	if (n / 10)
	{
		count += stdout((n / 10) + '0');
		count += stdout(n % 10 + '0');
	}

if (count < 0)
{
stdout('-');
count = -count;
}
return (count);
}
