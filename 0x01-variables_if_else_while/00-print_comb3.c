#include <stdio.h>

/**
 * main - Entry point
 *
 * REturn:Always 0 (Success)
 */
int main(void)
{
int d = 48, a = 48;

while (d < 58)
{
a = 48;
while(a < 58)
{
putchar(d);
putchar(a);
}
}
a++;
}
d++;
}
putchar('\n');

return(0)
