#include "sort.h"

void print_sort(int *array, size_t size, int init);
size_t partition(int *array, size_t size);
void swaper(int *a, int *b);

/**
 * quick_sort - sorts an array of integers in ascending
 * order using the Quick sort algorithm
 *
 * @array: array of integer to sort
 * @size: size of the array to sort
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	size_t pivot;

	if (!array || size < 2)
		return;

	print_sort(array, size, 1);

	pivot = partition(array, size);

	quick_sort(array, pivot);
	quick_sort(array + pivot, size - pivot);
}

/**
 * partition - defines a pivot value for the quick_sort
 * recursive function
 *
 * @array: the array to partition
 * @size: size of the array to partition
 *
 * Return: an unsigned integer value to be assigned to
 * pivot
 */
size_t partition(int *array, size_t size)
{
	int pivot;
	size_t i = -1;
	size_t j;

	if (!array || size < 2)
		return (0);

	pivot = array[size - 1];

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swaper(&array[i], &array[j]);
				print_sort(array, size, 0);
			}
		}
	}

	if (i + 1 != size - 1)
	{
		swaper(&array[i + 1], &array[size - 1]);
		print_sort(array, size, 0);
	}

	return (i + 1);
}

/**
 * print_sort - prints the the array in the wright order
 *
 * @array: array which elements are to be printed
 * @size: size of the array to rpint
 * @init: Should initialize array
 *
 * Return: Nothing
 */
void print_sort(int *array, size_t size, int init)
{
	static int *p = (void *)0;
	static size_t s;

	if (!p && init)
	{
		p = array;
		s = size;
	}
	if (!init)
		print_array(p, s);
}

/**
 * swaper - swaps the value at the two given addresses
 *
 * @a: pointer to the first value to swap
 * @b: pointer to the second value to swap
 *
 * Return: Nothing
 */
void swaper(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
