#include "lists.h"

/**
 * print_dlistint - function that prints elements of a list.
 * @h: pointer to list.
 *
 * Return: the number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int elem = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		elem++;
	}

	return (elem);
}
