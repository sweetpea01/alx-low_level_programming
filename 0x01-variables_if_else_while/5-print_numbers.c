#include <stdio.h>
/**
* main - This is the entry point for the program
* Return: 0 This always means (Success)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
