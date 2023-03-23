#include "main.h"
/**
 * _islower -this function checks for lowercase character
 * @c: this is the character in the program
 *
 * Return: return 1 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
