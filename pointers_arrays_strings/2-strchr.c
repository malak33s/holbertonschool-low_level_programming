#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 * Return: pointer to the first occurence of the character
 * NULL if the caracter is not found
 */

char *_strchr(char *s, char c)
{
	int ch;

	for (ch = 0; s[ch] >= '\0'; ch++)
	{
		if (s[ch] == c)
		{
			return (s + ch);
		}
	}
	return ('\0');
}  
