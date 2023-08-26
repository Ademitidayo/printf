#include "main.h"
/**
 * S_print - function that considers the %S parameter
 * @myzero: input string
 * Return: number of characters printed
 */
int p_print(va_list myzero)
{
	int zero_printed = 0;
	void *ptr = va_arg(myzero, void *);

	zero_printed += write(1, &ptr, sizeof(void *));

	return (zero_printed);
}
