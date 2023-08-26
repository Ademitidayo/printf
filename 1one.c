#include "main.h"
/**
 * d_print - prints a string and considers the d and i specifiers
 * @myzero: input string
 * Return: 0 (success)
 */
int d_print(va_list myzero)
{
	int zero_printed = -1;
	int num = va_arg(myzero, int);
	int last_digit, index;
	char *point;
	int negative = 0;

	if (num == 0)
		return (1);

	else if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
		zero_printed++;
		negative = 1;
	}
	last_digit = num;

	while (last_digit > 0)
	{
		last_digit /= 10;
		zero_printed++;
	}
	point = (char *)malloc((zero_printed + 2) * sizeof(char));
	if (point == NULL)
	return (1);
	index = zero_printed - 1;
	while (num > 0)
	{
		point[index] = (num % 10) + '0';
		num /= 10;
		index--;
	}
	point[zero_printed] = '\0';

	write(1, point, zero_printed);
	free(point);

	return (zero_printed + negative);
}


