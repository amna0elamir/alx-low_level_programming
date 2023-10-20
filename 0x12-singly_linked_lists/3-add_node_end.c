#include "lists.h"
#include <string.h>

/**
 * add_node_end - A function that adds a node to end
 * @head: pointer
 * @str: string t
 * Return: pointer to new element of list, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);
	while (str[len])
	length++;

	new_node->len = len;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	return (new_node);
}
