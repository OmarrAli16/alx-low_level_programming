#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - a function that reverses the list content
 *
 * @head: first node pointer
 *
 * Return: a pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nd;
	listint_t *next;

	if (*head == NULL || head == NULL)
	{
		return (NULL);
	}
	nd = *head;
	*head = NULL;
	while (nd)
	{
		next = nd->next;
		nd->next = *head;
		*head = nd;
		nd = next;
	}
	return (*head);
}
