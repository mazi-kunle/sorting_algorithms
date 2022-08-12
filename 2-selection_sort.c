#include "sort.h"
/**
 * selection_sort- a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: array to sort.
 * @size: size of the array.
 *
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, end_index;
	int minimum;
	int temp;

	for (i = 0; i < size; i++)
	{
		minimum = array[i];
		end_index = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < minimum)
			{
				minimum = array[j];
				end_index = j;
			}
		}
		if (end_index)
		{
			temp = array[i];
			array[i] = array[end_index];
			array[end_index] = temp;
			print_array(array, size);
		}
	}
}
