#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds new node at the end
 *
 * @head: first node pointer
 *
 * @n: new node value
 *
 * Return: the address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_n;
	listint_t *l;

	n_n = malloc(sizeof(listint_t));
	if (n_n == NULL)
	{
		return (NULL);
	}
	n_n->n = n;
	n_n->next = NULL;
	if (*head == NULL)
	{
		*head = n_n;
	}
	else
	{
		l = *head;
		while (l->next != NULL)
		{
			l = l->next;
		}
		l->next = n_n;
	}
	return (n_n);
}
