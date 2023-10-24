#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - a function that gets sum of data in the list
 *
 * @head: first node pointer
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int res;

	res = 0;
	while (head)
	{
		res = res + head->n;
		head = head->next;
	}
	return (res);
}
