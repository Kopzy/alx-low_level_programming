#include <stdio.h>
/**
 * main - entry point
 *
 * Return:0 if successful 
 */

int main(void)
{
	int num = 10;

	while (num < 20)
	{
		putchar((num % 10) + '0');
		num++;
		if (num != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
