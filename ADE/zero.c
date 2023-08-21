#include "main.h"
/**
 * S_L - To get the length of the string
 * @S: string to get the length
 * Return: 0 (success)
 */

int S_L(char *S)
{
	int CT = 0;
	int IT;

	for (IT = 0; S[IT] != '\0'; IT++)
		CT++;
	return (CT);
}

/**
 * _print_SP - to print the specifier
 * @form: the list of argument passed for the specifier
 * @mySP: variable name
 * @zero_printed: the printed values or string or character
 * Return: 0 (success)
 */

void _print_SP(char form, va_list mySP, int *zero_printed)
{
	if (form == 'c')
	{
		char character = va_arg(mySP, int);

		write(1, &character, 1);
		zero_printed++;
	}
	else if (form == 's')
	{
		char *StRInG = va_arg(mySP, char *);

		write(1, StRInG, S_L(StRInG));
		zero_printed += S_L(StRInG);
	}
	else if (form == '%')
	{
		char percent = '%';

		write(1, &percent, 1);
		zero_printed++;
	}
}

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
				_print_SP(*format, myzero, &zero_printed);
			}
			else
				break;
		}
		format++;
	}
	va_end(myzero);

	return (zero_printed);
}
