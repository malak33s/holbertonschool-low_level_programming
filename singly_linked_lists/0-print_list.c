#include "lists.h"

/**
 * print_list - function that prints all the elements of a list.
 * @h: pointer list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		num++;
	}
	return (num);
}
