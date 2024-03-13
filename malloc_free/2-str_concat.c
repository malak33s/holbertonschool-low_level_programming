#include "main.h"
/**
 * *str_concat - function that concatenates two strings in one other.
 * @s1: firstly string.
 * @s2: secondly string.
 *
 * Return: pointer to string.
 */

char *str_concat(char *s1, char *s2)
{
	char *snew;
	int a = 0, b = 0, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	snew = malloc((a + b + 1) * sizeof(char));
	if (snew == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		snew[c] = s1[c];
	a = c;
	for (c = 0; c < b; c++)
	{
		snew[a] = s2[c];
		a++;
	}
	snew[a] = '\0';
	return (snew);
}
