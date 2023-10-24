#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_listint - a funtion that prints all the elem
 *
 * @h: first node pointer
 *
 * Return: size
 */
size_t print_listint(const listint_t *h)
{
	size_t itr;

	for (itr = 0; h != NULL; itr++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (itr);
}
