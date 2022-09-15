#include <stdio.h>
#include <math.h>

/**
 * main- main block
 *Description: find and print te largest prime factor of the number
 * Return: 0
 */
int main(void)
{
	int c;
	long number = 612852475143;

	for (c = (int) sqrt(number); c > 2; c++)
	{
		if (number % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}
ii
	return (0);
}
