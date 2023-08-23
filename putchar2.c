#include <unistd.h>

/**
 * _putchar2 - a function to write the characters to the stdouput
 * @ch: The printed character
 *
 * Return: On success 1 and -1 on error
 */
int _putchar2(char ch)
{
	static char bu[1024];
	static count = 0;

	if (ch == -1 || count >= 1024)
	{
		write(1, &bu, 1);
	}
	if (ch != -1)
	{
		bu[count] = ch;
		count++;
	}
	return (1);
}
