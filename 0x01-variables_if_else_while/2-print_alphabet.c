#include <stdio.h>
/**
 * main - print a-z in lowwercase
 *
 * Return: 0 always
 *
 */

int	main(void)
{
	char a = 'a';

		while	(a <= 'z')
		{
			putchar(a);
			a++;
		}
		putchar('\n');
		return	(0);
}
