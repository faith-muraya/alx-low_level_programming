#include <stdio.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(voi d)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n >0)
	printf("%d positive\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else
	printf("%d is %d is negative \n", n);

return (0);
}
