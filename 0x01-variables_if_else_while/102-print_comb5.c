#include <stdio.h>
/**
* main - This is the starting point for our program
* Return: 0 This always means a (Success)
*/
int main(void)
{
int c, d;
for (c = 0; c < 100; c++)
{
for (d = 0; d < 100; d++)
{
if (c < d)
{
putchar((c / 10) + 48);
putchar((c % 10) + 48);
putchar(' ');
putchar((d / 10) + 48);
putchar((d % 10) + 48);
if (c != 98 || d != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
