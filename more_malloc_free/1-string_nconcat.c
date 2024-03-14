#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: first string to concat.
 * @s2: second string to concat.
 * @n: a integers char to print in s2.
 *
 * Return: pointer to the new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int a = 0, b = 0, c;

	if (s1 != NULL)
	{
		while (s1[a] != '\0')
		a++;
	}

	if (s2 != NULL)
	{
		while (s2[b] != '\0')
		b++;
	}

	if (n < b)
		b = n;

	s3 = malloc((a + b + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (c = 0; c < a; c++)
		s3[c] = s1[c];
	a = c;
	for (c = 0; c < b; c++)
	{
		s3[a] = s2[c];
		a++;
	}
	s3[a] = '\0';
	return (s3);
}
