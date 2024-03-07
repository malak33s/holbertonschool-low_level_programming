#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: string to find
 * Return: located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		int a = 0, b = 0;

		while (needle[b] && (haystack[a] == needle[a]))
		{
			a++;
			b++;
		}

		if (!needle[b])
		{
			return (haystack);
		}
		{
			haystack++;
		}
	}
	return ('\0');
}
