#include "lists.h"

/**
 * print_listint - func prints all node
 * @h: pointer
 *
 * Return: no of node
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
