#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node at
 * specified index from list
 * @head: pointer
 * @index: The index of the node to delete
 * Return: 1 if succeeded, or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *del_node;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
	}
	else
	{
		while (i < index)
		{
			node = node->next;
			if (node == NULL)
				return (-1);
			i++;
		}
		del_node = node;
		del_node = del_node->next;
		node->next = del_node->next;
		free(del_node);
	}
	return (1);
}
