#include "sort.h"

/**
 * selection_sort -  sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: the array of integer to sort
 * @size: size of the array of integer to sort
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[min_idx] > array[j])
				min_idx = j;
		}

		if (min_idx == i)
			continue;

		temp = array[i];
		array[i] = array[min_idx];
		array[min_idx] = temp;

		print_array(array, size);
	}
}
