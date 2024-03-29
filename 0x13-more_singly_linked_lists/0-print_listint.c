#include "lists.h"

/**
 * print_listint - function to print all elements of a list
 * @h: pointer to the first node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodenum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodenum++;
		h = h->next;
	}
	return (nodenum);
}
