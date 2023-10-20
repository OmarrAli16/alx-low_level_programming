#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * string_len - string length
 * @str: inserted string
 *
 * Return: string length
 */
int string_len(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		;
	}
	return (i);
}

/**
 * add_node - a function that adds a new node at the beginning
 *
 * @head: a head pointer address
 *
 * @str: string for field node
 *
 * Return: list size
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_hd = malloc(sizeof(list_t));

	if (!n_hd)
	{
		return (NULL);
	}
	if (!head)
	{
		return (NULL);
	}
	if (str)
	{
		n_hd->str = strdup(str);
		if (!n_hd->str)
		{
			free(n_hd);
			return (NULL);
		}
		n_hd->len = string_len(n_hd->str);
	}
	n_hd->next = *head;
	*head = n_hd;
	return (n_hd);
}
