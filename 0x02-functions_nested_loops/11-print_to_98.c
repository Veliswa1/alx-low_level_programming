#include "main.h"
#include "6-abs.c"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return - Always 0.
 */
void print_to_98(int n)
{
	if (n<=98)
	{
	for (; n <=98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d,", n);
	}
	}
	}
}

