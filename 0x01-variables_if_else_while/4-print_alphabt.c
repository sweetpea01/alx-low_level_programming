#include <stdio.h>
/**
* main - This is the entry point for the program
* Return: 0 This means (Success)
*/
int main(void)
{
  char i;
  for (i ='a'; i <= 'z'; i++)
    {
      if (i != 'e' && i != 'q')
	{
	  putchar(i);
	}
    }
  putchar('\n');
  return (0);
}
