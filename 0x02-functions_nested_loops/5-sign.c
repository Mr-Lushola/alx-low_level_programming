#include "main.h"
/**
 * print_sign - function to printhe sign of a number
 * @n: integerin the program
 *
 *Return: return 1 and print = if n is greater than zero
 *returns 0 if n is zero
 *returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
		_putchar('-');
}
