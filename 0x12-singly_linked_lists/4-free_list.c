#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees the list
 *
 * @head:head node pointer
 */

void free_list(list_t *head)
{
	list_t *pr_n;
	list_t *nx_n;

	pr_n = head;
	if (!head)
	{
		return;
	}
	while (pr_n)
	{
		nx_n = pr_n->next;
		free(pr_n->str);
		free(pr_n);
		pr_n = nx_n;
	}
}
