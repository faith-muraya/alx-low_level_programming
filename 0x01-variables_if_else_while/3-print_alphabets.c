#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0 (success)
 */
int main(void)
{
char c = 'a';
char C = 'A';

while (c <= 'z')
{
if (c != 'q' && c != 'e')
putchar(c);
c++;
}

while (C <= 'Z')
{
if (C != 'Q' && C != 'E')
putchar(C);
C++;
}
putchar('\n');

return (0);
}
