#include "sort.h"
/**
 * quick_recursive - Sorts a partition of an array of ints
 * @array: the array to be sorted
 * @size: size of array
 * @start: start of the partion index to be sorted
 * @end: end of the partion index to be sorted
 * Return: Void. Prints array after each iteration 
*/
void quick_recursive(int *array, size_t size, int start, int end)
{
	if (start < end)
	{
		int pivot = array[end];
		int i1 = start - 1;
		int i2;

		for (i2 = start; i2 <= end -1; i2++)
		{
			if (array[i2] <= pivot)
			{
				i1++;
				if (i1 != i2)
				{
					int temp = array[i1];

					array[i1] = array[i2];
					array[i2] = temp;
					print_array(array, size);
				}
			}
		}
		if (i1 + 1 != end)
		{
			int temp = array[i1 + 1];

			array[i1 + 1] = array[end];
			array[end] = temp;
			print_array(array, size);
		}

		quick_recursive(array, size, start, i1);
		quick_recursive(array, size, i1 + 2, end);
	}
}
/**
 * quick_sort - sorts an array of ints in ascending order
 * using quick sort algorithm
 * @array: Array of ints to sort
 * @size: size of array
 * Return: Void. 
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_recursive(array, size, 0, size - 1);
}
