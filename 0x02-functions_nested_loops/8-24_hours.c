#include "main.h"

/**
 * jack_bauer - This task requires a functon that prints every minute
 * of the day of jack bauer
 * starting from 00:00hrs to 23:59hrs
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');

		}
	}
}
