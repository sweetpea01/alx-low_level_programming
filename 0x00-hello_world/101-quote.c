#include<unistd.h>
/**
* main - this is a program that prints the following output
* and that piece of art is useful" - Dora Korpar, 2015-10-19
* followed by a new line to the std error.
* Return: 1 (success)
*/
int main(void)
{
write(2, "and that piece of art is useful\" -Dora kopar, 2015-10-19"\n, 59);
return (1);
}