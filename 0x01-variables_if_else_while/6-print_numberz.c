#include <stdio.h>
/**
 * main - entry point to program that displays base 10 numbers from 0 to 9
 *
 * Return: always return 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
