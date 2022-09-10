#include <stdio.h>
/**
 *main - Entry point
 *Return:0
 */
int main(void)
{
int i, y;
for (i = 0; i < 10; i++)
{
putchar (i + '0');
}
for (y = 'a'; y <= 'f'; y++)
{
âˆputchar (y);
}
putchar('\n');
return (0);
}
