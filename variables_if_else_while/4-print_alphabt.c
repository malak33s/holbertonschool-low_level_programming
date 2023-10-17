#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints a random number and states whether it is positive
*
* Return: A2lways 0.
*/
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	if (alphabet != 'e' && alphabet != 'q')
	
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
