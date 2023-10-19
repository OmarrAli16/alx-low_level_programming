#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elem
 *
 * @h: a pointer list
 *
 * Return: returns the list size
 */

size_t list_len(const list_t *h)
{
	size_t itr;

	itr = 0;
	while (h)
	{
		h = h->next;
		itr++;
	}
	return (itr);
}
