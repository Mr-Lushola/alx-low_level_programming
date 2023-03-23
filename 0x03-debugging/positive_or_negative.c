#include "main.h"
/**
 * positive_or_negative - Function to check sign of int
 * @i: integer in the program
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i >= 0)
		printf("%d is positive\n", i);
}
