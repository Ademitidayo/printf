#include "main.h"
/**
 * _integer - a function that prints an integer value
 * @myzero: variadic tag
 * Return: the integers
 */

int _integer(va_list myzero)
{
	int N;

	N = d_print(myzero);
	return (N);
}

/**
 * _uinteger - a function that prints an unsigned integer value
 * @myzero: variadic tag
 * Return: the unsigned values
 */

int _uinteger(va_list myzero)
{
	unsigned int v = va_arg(myzero, unsigned int);

	if (v == 0)
	{
		return (d_print(myzero));
	}
	else if (v < 1)
	{
		return (-1);
	}

	return (d_print(myzero));
}
