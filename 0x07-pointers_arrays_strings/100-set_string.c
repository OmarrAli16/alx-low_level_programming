#include <stdio.h>
#include "main.h"

/**
 * set_string - a function that sets a pointer to char
 *
 * @*s: double pointer
 *
 * @to: char pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
