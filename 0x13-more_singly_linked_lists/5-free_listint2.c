#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 *
 * @head: first node pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *n;
	listint_t *t;

	if (head == NULL)
	{
		return;
	}
	n = *head;
	while (n)
	{
		t = n;
		n = n->next;
		free(t);
	}
	*head = NULL;
}
