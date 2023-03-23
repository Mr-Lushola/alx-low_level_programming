#include "main.h"
/*
 * _isalpha - function that checks  for alphabet character
 * @c: character in the program
 *
 * Return: return 1 if c is an alphabet, otherwise 0
 */
int _isalpha(int c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
