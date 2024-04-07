#include "lists.h"

/**
* list_lenn - write a function thaht count all element of a list
*@h: input for start count
*/

size_t list_lenn(const list_t *h)
{
	size_t e = 0;

	while (h != NULL)
	{
		e++;
		h = h->next;
	}
	return (e);
}
