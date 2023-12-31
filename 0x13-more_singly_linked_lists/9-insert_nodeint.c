#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts node at given index
 * @head: A pointer
 * @idx: The index
 * @n: An integer data for new node
 * Return: The address to new node at specified index, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new_node, *node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->n = n;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	while (i < idx)
	{
		node = node->next;
		i++;
	}
	new_node->n = n;
	new_node->next = node->next;
	node->next = new_node;
	return (new_node);
}
