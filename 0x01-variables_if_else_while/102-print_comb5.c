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
for (d = c; d < 100; d++)
{
if (c != d)
{
putchar((c / 10) + '0');
putchar((c % 10) + '0');
putchar(' ');
putchar((d / 10) + '0');
putchar((d % 10) + '0');
if (c != 99 || d != 98)
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
