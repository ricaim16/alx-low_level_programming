#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: head node of singly linked list
 *
 * Return: no_nodes
 */
size_t print_list(const list_t *h)
{
	size_t no_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nill)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		no_nodes++;
		h = h->next;
	}

	return (no_nodes);
}
