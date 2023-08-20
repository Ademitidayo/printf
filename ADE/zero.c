#include "main.h"
/**
 * _printf - function printing characters by handling c,s & %
 * @format: string to print
 * Return: -1 if void and 0 (success)
 */
int _printf(const char *format, ...)
{
	int zero_printed = 0;
	int L = 0;
	va_list myzero;

	va_start(myzero, format);

	if(format == NULL)
		return (-1);
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

			if (*format == 'c')
			{
				char character = va_arg(myzero, int);
				write(1, &character, 1);
				zero_printed++;
			}
			else if (*format == 's')
			{
				char *StRInG = va_arg(myzero, char *);
				while( StRInG[L] != '\0')
				{
					L++;
				}
				write(1, StRInG, L);
				zero_printed += L;
			}
			else if (*format == '%')
			{
				char percent = '%';
				write(1, &percent, 1);
				zero_printed++;
			}
			if (*format == '\0')
				break;
		}
		format++;
	}
	va_end(myzero);

	return (zero_printed);
}
