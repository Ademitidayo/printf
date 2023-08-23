#include "main.h"

/**
 * b_print - Handles the b custom conversion specifier
 * @myzero - input
 * Return: 0 (success)
 */
int b_print(va_list myzero)
{
	unsigned int ade, oge, day, adeoge;
	unsigned int a[32];
	int zero_printed;
	char point;

	ade = va_arg(myzero, unsigned int);
	oge = 2147483648; /* (2 ^ 31) */
	a[0] = ade / oge;
	for (day = 1; day < 32; day++)
	{
		oge /= 2;
		a[day] = (ade / oge) % 2;
	}
	for (day = 0, adeoge = 0, zero_printed = 0; day < 32; day++)
	{
		zero_printed += a[day];
		if (adeoge || day == 31)
		{
			point = '0' + a[day];

			write(1, &point, 1);
			zero_printed++;
		}
	}
	return (zero_printed);
}
