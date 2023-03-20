#include <stdio.h>
/**
 * main - entry point of a program that prints the alpHABET
 *
 * Return: always return 0 (success)
 */

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
		putchar(alp[i]);
	putchar('\n');
	return (0);
}
