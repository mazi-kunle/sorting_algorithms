#include "sort.h"
/**
 * swap- swap two intergers.
 * @a: first value.
 * @b: second value.
*/
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * shell_sort- a function that sorts an array of integers in
 * ascending order using the Shell sort algorithm, using the Knuth sequence.
 * @array: array to sort.
 * @size: size of the array.
 *
*/
void shell_sort(int *array, size_t size)
{
	size_t interval, i, j;

	if (array == NULL || size <= 0)
	{
		return;
	}
	interval = 1;
	while (interval <= size / 3)
	{
		interval = interval * 3 + 1;
	}

	while (interval > 0)
	{
		for (i = interval; i < size; i++)
		{
			j = i;
			while (j >= interval && array[j] < array[j - interval])
			{
				swap(&array[j], &array[j - interval]);
				j = j - interval;
			}
		}
		print_array(array, size);

		interval = (interval - 1) / 3;
	}
}
