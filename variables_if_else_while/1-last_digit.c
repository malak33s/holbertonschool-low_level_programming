#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints a random number and states whether it is positive
*
* Return: Always 0.
*/
int main(void)
{
	int n, lsd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lsd = n % 10;
	printf("Last digit of %d is %d and is ", n, lsd);
	if (lsd > 5)
		printf("greater than 5\n");
	if (lsd == 0)
		printf("0\n");
	if (lsd < 6 && lsd != 0)
		printf("less than 6 and not 0\n");
	return (0);
}
