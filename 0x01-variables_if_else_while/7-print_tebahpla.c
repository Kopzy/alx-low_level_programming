#include <stdio.h>
/**
 * main - entry point
 *
 * Return:0 always
 */

int	main(void)
{
	char alphaReverse = 'z';

	while (alphaReverse > 'a')
	{
		putchar(alphaReverse);
		alphaReverse++;
	}
	return (0);
}
