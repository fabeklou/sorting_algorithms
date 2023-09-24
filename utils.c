#include "sort.h"

/**
 * swaper - swaps the values at the two given memory
 * locations
 *
 * @value_a: pointer to the first value to swap
 * @value_b: pointer to the second value to swap
 *
 * Return: Nothing
 */
void swaper(int *value_a, int *value_b)
{
	int temp;

	temp = *value_a;
	*value_a = *value_b;
	*value_b = temp;
}
