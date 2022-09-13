#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */
/**
 * main - A program to check whether or not a variable is positive or otherwise
 *
 * Return: 0 if successful
 *
 */

int main(void)

{

		int n;



		srand(time(0));

		n = rand() - RAND_MAX / 2;
		if	(n > 0)
		{
			printf("%d is positive\n", n);
		}
		if	(n == 0)
		{
			printf("%d is zero\n", n);
		}
		if	(n < 0)
		{
			printf("%d is a negative number\n", n);
		}

		return (0);

}
