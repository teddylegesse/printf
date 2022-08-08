#include "main.h"

int _printf(const char *format, ...)
{
        int i, count = 0;
        va_list args;
        if (format == NULL)
                return (-1);
        va_start(args, format);
        for (i = 0; format[i] != '\0'; i++)
        {
                if (format[i] == '%')
                {
                        if (format[i + 1] == 'c')
                                _putchar(format[i]);
                        if (format[i + 1] == 's')
                        _putchar(format[i]);
                }
                count += va_arg(args, int);
        }
        va_end(args);
        return (count);
}
