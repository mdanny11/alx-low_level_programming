#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: 'get the last digits of a number'
 *Return: Always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digits of %d is %d and is greater thatn 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digits of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last digits of %d is %d and less than 6 and not 0\n", n, ld);
	}
	return (0);
}
