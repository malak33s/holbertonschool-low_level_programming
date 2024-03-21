#include "function_pointers.h"

/**
 * int_index - function that searches for interger.
 *@array: elements in the array
 *@size: size of aray
 *@cmp: pointer to the function
 *
 *Return: -1 not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int inter;

	if (size < 1 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (inter = 0; inter < size; inter++)
	{
		if (cmp(array[inter]))
		{
			return (inter);
		}
	}
	return (-1);
}
