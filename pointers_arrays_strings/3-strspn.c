#include "main.h"
/**
 * _strspn - a function for the length of a prefix substring
 * @s: pointer
 * @accept: string to include
 * Return: the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int num = 0, nu;

	while (s[nu] != '\0')
	{
		if (s[nu] == ' ')
		{
			break;
		}
		for (nu = 0; accept[nu] != '\0'; nu++)
		{
			if (s[nu] == accept[nu])
			{
				break;
			}
		}
		if (accept[nu] == '\0')
		{
			break;
		}
		{
			num++;
		}
	}
	return (num);
}
