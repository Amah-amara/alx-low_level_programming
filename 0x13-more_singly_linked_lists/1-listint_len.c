#include "lists.h"

/**
 * listint_len - list the number of elements in linked list
 * @h: pointer to the fist node
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t countnode = 0;

	while (h)
	{
		countnode++;
		h = h->next;
	}
	return (countnode);
}
