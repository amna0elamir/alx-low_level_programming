#include "lists.h"

/**
 * add_nodeint_end - func that add node at end
 * @head: pointer
 * @n: int
 *
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *last;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);
	end_node->n = n;

	if (*head == NULL)
	{
		end_node->next = *head;
		*head = end_node;
	}
	else
	{
		end_node->next = NULL;
		last = *head;
		while (last->next)
		{
			last = last->next;
		}
		last->next = end_node;
	}
	return (end_node);
}
