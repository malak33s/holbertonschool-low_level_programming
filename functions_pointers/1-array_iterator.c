#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on an array.
 *
 * @array: pointer to the array.
 * @size: size of the array.
 * @action: pointer to the function.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t sze;

	if (array == NULL || action == NULL)
		return;

	for (sze = 0; sze < size; sze++)
		action(array[sze]);
}
