#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - a function for printing elements
 *
 * @h:a pointer to the list that will be printed single linked
 *
 * Return: the list size
 */
size_t print_list(const list_t *h)
{
	size_t num_node;

	num_node = 0;
	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num_node++;
	}
	return (num_node);
}
