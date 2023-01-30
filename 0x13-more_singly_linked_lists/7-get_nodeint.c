#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: pointer to the first node of the list
 * @index: index of the node to return
 * Return: pointer to index node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
