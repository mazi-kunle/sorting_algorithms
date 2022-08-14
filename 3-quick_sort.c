#include "sort.h"

/**
 * swap- A function to swap two values.
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
 * partition- partition an array.
 * @arr: array to partition.
 * @low: the first index of the array.
 * @high: the last index of the array.
 * @size: size of the array.
 *
 * Return: int.
*/
int partition(int *arr, int low, int high, int size)
{
	int pivot, counter, i;

	pivot = arr[high];
	counter = low - 1;
	for (i = low; i < high; i++)
	{
		if (arr[i] <= pivot)
		{
			counter++;
			if (arr[i] != arr[counter])
			{
				swap(&arr[i], &arr[counter]);
				print_array(arr, size);
			}
		}
	}
	counter++;
	if (arr[counter] != arr[high])
	{
		swap(&arr[counter], &arr[high]);
		print_array(arr, size);
	}
	return (counter);
}

/**
 * quick_sort_helper-  a function that sorts an array of integers in
 * ascending order using the Quick sort algorithm.
 * @array: array to be sorted.
 * @low: lower bound of the array.
 * @high: higher bound of the array.
 * @size: size of that array.
*/
void quick_sort_helper(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);

		/*recursive call to left of pivot.*/
		quick_sort_helper(array, low, pivot - 1, size);

		/*recursive call to right of pivot.*/
		quick_sort_helper(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort-  a function that sorts an array of integers in
 * ascending order using the Quick sort algorithm.
 * @array: array to be sorted.
 * @size: size of that arr.
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	quick_sort_helper(array, 0, size - 1, size);
}

