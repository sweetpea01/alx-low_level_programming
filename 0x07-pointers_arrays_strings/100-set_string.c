#include "main.h"

/**
 * set_string - this function sets the value of a pointer to a char
 * @s: variable pointer to pointer that we need to set to
 * @to: this is the variable string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
