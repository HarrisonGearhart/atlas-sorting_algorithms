#include "sort.h"
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
	quick_sort_recursive(array, size, 0, size - 1);
}
