#include <stdio.h>
/**
* main - This is the entry point for the program
* Return: 0 This always means (Success)
*/
int main(void)
{
int n;
for (n = 0; n < 26; n++)
{
putchar('a' + n);
}
for (n = 0; n < 26; n++)
{
putchar('A' + n);
}
putchar('\n');
return (0);
}
