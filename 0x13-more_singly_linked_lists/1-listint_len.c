#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * listint_len - a function that return the num of elem
 *
 * @h: first node pointer
 *
 * Return: num of elem
 */

size_t listint_len(const listint_t *h)
{
	size_t itr;

	for (itr = 0; h != 0; itr++)
	{
		h = h->next;
	}
	return (itr);
}
