#include "sort.h"


/**
 * selection_sort - sorts an array of integers in ascending order
 *		using the Selection sort algorithm.
 * @array: the array of integers
 * @size: the size of array
 */

void selection_sort(int *array, size_t size)
{
	int index, check, count = 0, swap, sz = size;

	while (count < sz - 1)
	{
		index = count + 1;
		check = count;

		/* Finding the next minimum value in the array*/
		while (index < sz)
		{
			if (array[index] < array[check])
				check = index;
			index++;
		}

		/* Placing the next minumum value in its correct position*/
		if (check != count)
		{
			swap = array[check];
			array[check] = array[count];
			array[count] = swap;
			print_array(array, size);
		}

		count++;
	}
}
