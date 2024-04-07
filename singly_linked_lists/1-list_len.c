#include "lists.h"

/**
* list_len - write a function thaht count all element of a list
*@h: input for start count
*/

size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h != NULL)
	{
		e++;
		h = h->next;
	}
	return (e);
}
