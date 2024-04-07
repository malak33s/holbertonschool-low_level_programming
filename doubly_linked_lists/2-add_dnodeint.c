#include "lists.h"

/**
 * add_dnodeint - functio add a new node at
 * the beginning of a list.
 * @head: head of the linked list.
 * @n: element added.
 *
 * Return: adress of the new element or NULL if it failed.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnd;

	newnd = malloc(sizeof(dlistint_t));
	if (newnd == NULL)
		return (NULL);

	newnd->n = n;
	newnd->prev = NULL;
	newnd->next = (*head);

	if ((*head) != NULL)
		(*head)->prev = newnd;

	(*head) = newnd;

	return (newnd);

}
