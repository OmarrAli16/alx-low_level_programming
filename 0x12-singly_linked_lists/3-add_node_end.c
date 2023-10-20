#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * string_len - string length
 * @str: inserted string
 *
 * Return: string length
 */
int string_len(const char *str)
{
        int i;

        for (i = 0; str[i]; i++)
        {
                ;
        }
        return (i);
}

/**
 * add_node_end - a function that adds a new node at the end
 *
 * @head: a head pointer address
 *
 * @str: string for field node
 *
 * Return: list size
 */

list_t *add_node_end(list_t **head, const char *str)
{
        list_t *n_nd = malloc(sizeof(list_t));
	list_t *n = *head;

        if (!n_nd)
        {
                return (NULL);
        }
        if (!head)
        {
                return (NULL);
        }
        if (str)
        {
                n_nd->str = strdup(str);
                if (!n_nd->str)
                {
                        free(n_nd);
                        return (NULL);
                }
                n_nd->len = string_len(n_nd->str);
        }
	if (n)
	{
		while (n->next)
		{
			n = n->next;
		}
		n->next = n_nd;
	}
	else
		*head = n_nd;
        return (n_nd);
}
