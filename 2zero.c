#include "main.h"
/**
 * c_print - function printing characters by handling c,s & %
 * @myzero: string to print
 * Return: -1 if void and 0 (success)
 */
int c_print(va_list myzero)
{
	int zero_printed = 0;
	char oge = va_arg(myzero, int);

		if (oge == '\0')
			return (1);

		write(1, &oge, 1);
		zero_printed++;

	return (zero_printed);
}
/**
 * s_print - funtion that considers the %s parameter
 * @myzero: input string
 * Return: -1
 */
int s_print(va_list myzero)
{
	int zero_printed = 0;
	char *ade = va_arg(myzero, char *);
	int m = 0;

	if (ade == NULL)
	{
		write(1, "(null)", 6);
		zero_printed += 6;
	}
	else
	{
		while (ade[m] != '\0')
			m++;
		write(1, ade, m);
		zero_printed += m;
	}

		return (zero_printed);
}
/**
 * percent_print - prints the percent sign
 * @myzero: input
 * Return: 0 (success)
 */
int percent_print(va_list myzero)
{
	char percent;

	UNUSED(myzero);

	percent = '%';
	write(1, &percent, 1);
	return (1);
}
/**
 * all_print - merges the c, s, % printf functions
 * @format: character of the specifier
 * @myzero: string to print
 * Return: 0 (success)
 */
int all_print(va_list myzero, const char format)
{
	int result;

	switch (format)
	{
		case ' ':
			result = (-1);
			break;
		case 'c':
			result = (c_print(myzero));
			break;
		case 's':
			result = (s_print(myzero));
			break;
		case '%':
			result = (percent_print(myzero));
			break;
		case 'd':
			result = (d_print(myzero));
			break;
		case 'S':
			result = (S_print(myzero));
			break;
		case 'p':
			result = (p_print(myzero));
			break;
		case 'i':
			result = (d_print(myzero));
			break;
		case 'b':
			result = (b_print(myzero));
			break;
		default:
			write(1, "%", 1);
			write(1, &format, 1);
			result = 2;
			break;
	}
	return (result);
}
