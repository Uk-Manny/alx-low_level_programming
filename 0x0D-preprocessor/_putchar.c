#include <unistd.h>

/**
 * _putchar - writes the character c to stdcout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is return, and error is set appropraitly
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
