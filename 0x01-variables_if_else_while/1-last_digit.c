#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */
/**
 * main - print the last digit in the variable
 *
 * Return: always 0
 */
int main(void)

{

		int n;



		srand(time(0));

		n = rand() - RAND_MAX / 2;
		/* your code goes there */
	int	ln	= n % 10;

		if	(ln > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, ln);
		}
		if	(ln == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, ln);
		}
		if	(ln < 6 &&  ln != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ln);
		}
		return (0);

}
