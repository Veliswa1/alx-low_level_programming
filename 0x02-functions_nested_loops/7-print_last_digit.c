#include "main.h"
#include "6-abs.c"
/**
 * main function - print_last_digit
 *
 * @n: integer to get last digit of
 * Return: last digit of n
 *
 */

int print_last_digit(int n)
{
	int last;
	last = n % 10;
	if (last < 0)
	{
		last = last * 1;
	}
	_putchar(last + '0');
	return (last);
}
