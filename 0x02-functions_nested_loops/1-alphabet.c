#include "main.h"

/**
* print_alphabet - This is the function prototype
*
* Description:
* The function prints all alphabet letters in lowercase beginning
* from a and finishing with z and then
* followed by a new line
*/
void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
