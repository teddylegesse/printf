#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
typedef struct print
{
	char *a;
	int (*p)(va_list);
} printer;

int _putchar(char c);
int _printf(const char *format, ...);
int printer_c(va_list c);
int printer_s(va_list s);



#endif
