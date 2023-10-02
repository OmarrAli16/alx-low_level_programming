#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strlen - a function that returns the length of sting
 *
 * @s: input of type char
 *
 * Return: word lenght
 */

int _strlen(char *s)
{
	int word;

	for (word = 0; *s != '\0'; s++)
	{
		++word;
	}

	return (word);
}
