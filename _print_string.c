#include "main.h"
/**
 * _print_string - prints string
 * @string: string pointer
 * Return: count
 */
int _print_string(char *string)
{
	int i, list = 0;
	for (i = 0; string[i] != '\0'; i++)
	{
		list += _putchar(string[i]);
	}
	return (list);
}
