#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int rw, clmn, rslt;

	for (rw = 0; rw <= 9; rw++)
	{
		for (clmn = 0; clmn <= 9; clmn++)
		{
			rslt = rw * clmn;

			if (clmn == 0)
				_putchar('0');
			else if (rslt < 10)
			{
				_putchar(' ');
				_putchar(rslt + '0');
			}
			else
			{
				_putchar(rslt / 10 + '0');
				_putchar(rslt % 10 + '0');
			}

			if (clmn != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
