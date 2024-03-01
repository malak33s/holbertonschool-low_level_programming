#include "main.h"

/**
 * _strcmp - function that compares two strings and should work exactly like
 *@s1: first strings to be compared
 *@s2: second strings to be compared
 *
 * Return: integers
*/

int _strcmp(char *s1, char *s2)
{
	int a, b;

	a = 0;

	while (s1[a] == s2[a] && (s1[a] != '\0' && s2[a] != '\0'))
	{
		a++;
	}
	if (s1[a] == '\0' && s2[a] == '\0')
	{
		b = 0;
	}
	else
	{
		b = s1[a] - s2[a];
	}
	return (b);
}
