#include <stdio.h>
#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: inputs the string
 */

void rev_string(char *s)
{
        int letters = 0;

        while (s[letters])
        {
                letters++;
        }
        while (letters--)
        {
                _putchar(s[letters]);
        }
_putchar('\n');
}

