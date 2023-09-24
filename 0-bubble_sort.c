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
	int i, j;
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
				swaper(&array[j], &array[j + 1]);
				is_ordered = false;
				printf(array, size);
			}
		}
		if (is_ordered)
			break;
	}
}
