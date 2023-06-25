#include <stdio.h>
/**
* main - This the entry point for our program
* Return: 0 This always means (Success)
*/
int main(void)
{
int i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
