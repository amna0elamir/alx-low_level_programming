#include "lists.h"

/**
 * list_len - func for no  nodes of linked list
 * @h: head 
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;
	
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
