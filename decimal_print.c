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
		count += _putchar('0');
	if (n / 10)
	{
		count += _putchar((n / 10) + '0');
		count += _putchar(n % 10 + '0');
	}

	if (count < 0) {
       putchar('-');
       count = -count;
   }
	return (count);
}
