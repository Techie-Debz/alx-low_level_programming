#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 *@str: printed string
 *
 * Return: (0)
 */
void puts2(char *str)
{
	int w;

	for (w = 0; str[w] != '\0'; w++)
	{
		if (w % 2 == 0)
			_putchar(str[w]);
	}
	_putchar('\n');
}
