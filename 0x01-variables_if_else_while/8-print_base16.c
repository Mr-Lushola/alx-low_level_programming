#include <stdio.h>
/**
 * main - entry point to print numbers between 0 to 9 and letters btw a to f
 *
 * Return: always returns value 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 97; i < 103; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
