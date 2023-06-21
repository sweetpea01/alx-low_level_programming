#include <stdio.h>
#include <unistd.h>
/**
* main - this is a program that prints the following output
* and that piece of art is useful" - Dora Korpar, 2015-10-19
* followed by a new line to the std error.
* Return: 1 (success)
*/
int main(void)
{
fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19", stdout);
return (1);
}
