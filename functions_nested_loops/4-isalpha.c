#include"main.h"
/**
 * _isalpha - checks for letter, lowercase or uppercase character.
 * @c : character
 *
 * Return: 1 if c is lowercase or uppercase character else if 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
