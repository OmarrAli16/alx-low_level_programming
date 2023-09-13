#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char word[] = "_putchar";

	for (int i = 0; i < 9; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}
