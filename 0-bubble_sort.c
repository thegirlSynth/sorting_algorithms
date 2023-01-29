#include "sort.h"


/**
 * bubble_sort - sorts an array of integers in ascending order
 *		using the Bubble sort algorithm
 * @array: the array of integers
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int index, sz = size, swap;

	while (sz > 1)
	{
		for (index = 0; index < sz - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				swap = array[index];
				array[index] = array[index + 1];
				array[index + 1] = swap;
				print_array(array, size);
			}

		}
		sz--;
	}

}
