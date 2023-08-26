#include "main.h"
/**
 * S_print - function that considers the %S parameter
 * @myzero: input string
 * Return: number of characters printed
 */
int S_print(va_list myzero)
{
	int zero_printed = 0;
	char *ade = va_arg(myzero, char *);
	int i;

	if (ade == NULL)
	{
		write(1, "(null)", 6);
		zero_printed += 6;
	}
	else
	{
		for (i = 0; ade[i] != '\0'; i++)
		{
			if (ade[i] >= 32 && ade[i] < 127)
			{
				write(1, &ade[i], 1);
				zero_printed++;
			}
			else
			{
				zero_printed += write(1, "\\x", 2);
				zero_printed += print_hex(ade[i]);
			}
		}
	}
	return (zero_printed);
}
/**
 * print_hex - prints a character's hexadecimal representation
 * @c: character to print
 * Return: number of characters printed
 */
int print_hex(unsigned char c)
{
	int count = 0;
	char hex[] = "0123456789ABCDEF";

	if (c < 16)
	count += write(1, &hex[c / 16], 1);
	count += write(1, &hex[c % 16], 1);

	return count;
}
