#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *@n: input integer
 * Return: void
 *
 */
void print_line(int n)
{
	int w;

	for (w = 0; w < n; w++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

