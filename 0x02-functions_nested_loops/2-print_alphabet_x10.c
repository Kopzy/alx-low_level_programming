#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10x
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char i;
	int n;

	for (n = 1; n <= 10;)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		n++;
		_putchar('\n');
	}


}

