#include <stdio.h>
/**
 *main - Entry point
 *Description: ' prints all the numbers of base 16 in lowercase'
 *Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
