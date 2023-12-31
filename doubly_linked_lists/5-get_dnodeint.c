#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to head of list.
 * @index: nth of node.
 *
 * Return: the nth of node or NULL if node doesn't exist.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	while (head != NULL)
	{
		if (cnt == index)
			return (head);
		head = head->next;
		cnt++;
	}
	return (NULL);
}
