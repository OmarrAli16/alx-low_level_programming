#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function gets the result of nth node
 *
 * @head: first node pointer
 *
 * @index: the required node number
 *
 * Return: the required node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nd;
	unsigned int n;

	for (n = 0, nd = head; nd && n < index; n++, nd = nd->next)
	{
		;
	}
	return (nd);
}
