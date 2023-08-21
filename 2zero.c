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
	{
		int m = 0;

		while (ade[m] != '\0')
			m++;
		write(1, ade, m);
		zero_printed += m;
	}
	return (zero_printed);
}
/**
 * percent_print - prints the percent sign
 * @myzero: input string
 * Return: 0 (success)
 */
int percent_print(va_list myzero)
{
	int zero_printed = 0;
	char *day = va_arg(myzero, char *);
		{
			char percent = '%';

			write(1, &percent, 1);
			zero_printed++;
		}
		{
			(void)day;
		}
	return (zero_printed);
}