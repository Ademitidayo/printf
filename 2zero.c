#include "main.h"
/**
 * c_print - function printing characters by handling c,s & %
 * @format: string to print
 * Return: -1 if void and 0 (success)
 */
int c_print(const char *format, ...)
{
	int zero_printed = 0;
	va_list myzero;

	va_start(myzero, format);

	if (format == NULL)
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
		}
		format++;
	}
	va_end(myzero);
	return (zero_printed);
}
/**
 * s_print - funtion that considers the %s parameter
 * @format: input string
 * Return: -1
 */
int s_print(const char *format, ...)
{
	int zero_printed = 0;
	va_list myzero;

	va_start(myzero, format);
	
	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			Zero_printed++;
		}
	}
	else
	{
		format++;
		switch (*format)
		{
			case ‘s’:
		{
			char *StRInG = va_arg(myzero, char *);
			int m = 0;

			for (m = 0; StRInG[m] != ‘\0’; m++)
			{
				m++;
			}
			write(1, StRInG, L);
			zero_printed++;
			break;
			
		}
		}
	}
	format++;
	}
	va_end(myzero);
	return (zero_printed);
}
/**
 * percent_print - prints the percent sign
 * @format: input string
 * Return: 0 (success)
 */
int percent_print(const char *format, ...)
{
	int zero_printed = 0;
	va_list myzero;

	va_start(myzero, format);

	if (format == NULL)
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
		switch (*format)
		{
			case '%':
				char percent = va_arg(myzero, int);

				write(1, &percent, 1);
				zero_printed++;
				break;
		}
		}
		format++;
	}
	va_end(myzero);
	return (zero_printed);
}
