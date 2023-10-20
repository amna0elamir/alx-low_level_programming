#include "lists.h"

/**
 * print_list - A function that prints a linked list
 * @h: pointer to node
 * Return: number of nodes in list as size_t
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		count++;
	}
	return (count);
}
