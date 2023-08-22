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
