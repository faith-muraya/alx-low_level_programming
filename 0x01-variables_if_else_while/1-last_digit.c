#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if te number is positize, zero or negative
 *
 *Describe:using the main function
 *this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(voi d)
{
int n;
int l;

srand(time(0));
rand() - RAND_MAX / 2;
n %10;

if (l > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
}

else if (l == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, l);
}

else
{ 
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);	
}
return (0);
}	
