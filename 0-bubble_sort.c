#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 *
 * @array: The array of integers to sort
 * @size: The size of the array to sort
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;
	bool is_ordered;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		is_ordered = true;
		for (j = 0; j < size - (1 + i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				is_ordered = false;
				print_array(array, size);
			}
		}
		if (is_ordered)
			break;
	}
}
