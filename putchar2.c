#include <unistd.h>

/**
 * _putchar2 - a function to write the characters to the stdouput
 * @ch: The printed character
 *
 * Return: On success 1 and -1 on error
 */
int _putchar2(char ch)
{
	if (ch != -1)
	{
		write(1, &ch, 1);
	}
	return (1);
}
