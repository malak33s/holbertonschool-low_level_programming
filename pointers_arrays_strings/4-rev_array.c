#include "main.h"

/** 
 * reverse_array - reverses the content pf an array of integers 
 * @a: arr2ay of intergers
 * @n: number of elements of the array
 */

void reverse_array(int * a, int n)
{
	int i, tmp, end = n - 1;
	
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[end];
		a[end] = tmp;
		end--;
	}
}
