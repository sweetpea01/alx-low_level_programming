#include <stdio.h>
/**
* main - This is the entry point for our program
* Return: 0 This always means a (Success)
*/
int main(void)
{
int c, d, e;
for (c = 0; c < 8; c++)
{
for (d = c + 1; d < 9; d++)
{
for (e = d + 1; e < 10; e++)
{
putchar(c + '0');
putchar(d + '0');
putchar(e + '0');
if (c != 7 || d != 8 || e != 9)
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
