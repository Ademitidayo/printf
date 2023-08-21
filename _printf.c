#include "main.h"
/**
 * _printf - function printing characters by handling c,s & %
 * @format: string to print
 * Return: -1 if void and 0 (success)
 */
void _printf(const char *format, ...)
{
	 va_list myzero;

        va_start(myzero, format);

        if(format == NULL)
                return (-1);
        while (*format)
        {
		format++;
	}
	c_print(const char *format, ...);
	percent_print(const char *format, ...);
	s_print(const char *format, ...);

}
