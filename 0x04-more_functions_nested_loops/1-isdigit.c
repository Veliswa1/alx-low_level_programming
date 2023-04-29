#include "main.h"
/**
 * _isdigit - determine if digit
 *
 * @x: character to determine
 *
 * Return: 1 for the digit or 0 otherwise
 */
int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}
