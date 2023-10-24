#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds new node at the beginning
 *
 * @head: first node pointer
 *
 * @n: integer for new nodes value
 *
 * Return: the address of the new elem
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_n;

	n_n = malloc(sizeof(listint_t));
	if (n_n == NULL)
	{
		return (NULL);
	}

	n_n->next = NULL;
	n_n->n = n;
	if (*head)
	{
		n_n->next = *head;
	}
	*head = n_n;
	return (n_n);
}
