#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * returns a pointer to a newly allocated space in memory.
 * @str: string
 * @size: size of array
 * Returns NULL if str = NULL On success, the _strdup returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *s = (char) malloc(strdup(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	return (s);
}
