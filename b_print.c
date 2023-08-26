#include "main.h"
/**
 * b_print_rec - using recursion to print binary
 * @x: The input integer
 * @two_printed: Pointer to the count of printed characters
 */
void b_print_rec(unsigned int x, int *two_printed)
{
	char z;
	
	if (x > 1)
		b_print_rec(x / 2, two_printed);

	z = '0' + (x % 2);

	write(1, &z, 1);
	(*two_printed)++;
}
/**
 * b_print - function that converts an unsigned to binary
 * @myzero: input string
 * Return: 0 (success)
 */
int b_print(va_list myzero)
{
	unsigned int x = va_arg(myzero, unsigned int);
	int two_printed = 0;

	b_print_rec(x, &two_printed);
	return (two_printed);
}
