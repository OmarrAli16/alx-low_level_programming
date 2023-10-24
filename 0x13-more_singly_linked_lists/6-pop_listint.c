#include<stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - a function that delets the head node
 *
 * @head: first node  address
 *
 * Return: return the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *nd;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	nd = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = nd;
	return (n);
}
