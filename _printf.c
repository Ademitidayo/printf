#include "main.h"
/**
 * _printf - function printing characters by handling c,s & %
 * @format: string to print
 * Return: -1 if void and 0 (success)
 */
int _printf(const char *format, ...)
{
	int zero_printed = 0;
	va_list myzero;

	va_start(myzero, format);

	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '\0')
			return (-1);
	{
		if (*format != '%')
		{
			write(1, format, 1);
			zero_printed++;
		}
		else
		{
			format++;
			if (*format != '\0')
			{
				zero_printed += all_print(myzero, *format);
			}
		}
	format++;
	}
	}
	va_end(myzero);
	return (zero_printed);
}
