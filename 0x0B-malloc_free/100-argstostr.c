#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *argstostr - a function that concatenates all the arguments
 *
 * @ac: integer for argument count
 *
 * @av: integer representing array
 *
 * Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int word_length;
	int i;
	char *final;
	int c;
	int j;

	c = 0;
	word_length = 0;
	if (ac == 0)
	{
		return (NULL);
	}
	if (av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		word_length = word_length + strlen(av[i] + 1);
				}
	final = (char *)malloc(word_length + 1);
	if (final == NULL)
	{
		return (NULL);
		}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c++)
		{
			final[c] = av[i][j];
			}
		final[c] = '\n';
		c++;
		}
	final[c] = '\0';
	return (final);
}
