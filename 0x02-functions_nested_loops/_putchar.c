#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that writes a char c to stdout 
 * @c: character to be displayed
 *
 * Return: returns 1 (success)
 * otherwise return  -1 and sets errno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
