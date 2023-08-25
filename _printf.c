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
	
	if (strcmp(format, "%") == 0)
		return (0);
	
	while (*format)
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
			else if (*format == 'd' || *format == 'i')
			{
				zero_printed += d_print(myzero);
			}
		}
	format++;
	}
	va_end(myzero);
	return (zero_printed);
}
