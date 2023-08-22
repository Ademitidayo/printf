#include "main.h"
/**
 * S_L - length of a string
 * @myzero: character of strings
 * Return: length of the string
 */

int S_L(va_list myzero)
{
	int zero_printed = 0;
	int T;
	int CT = 0;
	char *d = va_arg(myzero, char *);

	for (T = 0; d[T] != '\0'; T++)
	{
		CT++;
		write(1, &d[T], 1);
		zero_printed += 1;
	}
	return (zero_printed);
}
/**
 * d_print - prints a string and considers the d and i specifiers
 * @myzero: input string
 * Return: 0 (success)
 */
int d_print (va_list myzero)
{
	int zero_printed = 0;
	int num = va_arg(myzero, int);
	int last_digit, index;
	char *point;

	if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
		zero_printed++;
	}

	last_digit = num;

	while (last_digit > 0)
	{
		last_digit /= 10;
		zero_printed++;
	}

	point = (char *)malloc((zero_printed + 1) * sizeof(char));
	if (point == NULL)
		return (-1);

	index = zero_printed - 1;

	while (last_digit > 0)
	{
		point[index] = (last_digit % 10) + '0';
		last_digit /= 10;
		index--;
	}

	point[zero_printed] = '\0';

	write(1, point, zero_printed);
	free(point);

	return (zero_printed);
}
