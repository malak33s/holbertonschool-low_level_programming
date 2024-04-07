#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h: header of a list
 *
 * Return: number in linked
*/

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
