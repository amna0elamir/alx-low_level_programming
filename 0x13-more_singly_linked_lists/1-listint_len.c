#include "lists.h"

/**
 * listint_len - func return no of elements
 * @h: pointer
 *
 * Return: len of list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
