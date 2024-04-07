#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: head of the list.
 * @str: pointer to the string.
 *
 * Return: adress of the new element or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnd;
	unsigned int len = 0;

	newnd = malloc(sizeof(list_t));

	if (newnd == NULL)
		return (NULL);

	for (; str[len]; len++)
		;
	newnd->str = strdup(str);
	newnd->len = len;
	newnd->next = (*head);
	*head = newnd;

	return (newnd);
}
