#include "sort.h"
/**
 * int_swap - swap 2 integers in an array
 * @i1: first int to swap
 * @i2: second int to swap
 * Return: Void
*/
void int_swap(int *i1, int *i2)
{
	int tmp;

	tmp = *i1;
	*i1 = *i2;
	*i2 = tmp;
}
/**
 * selection_sort - Sort an array of integers in ascending order
 * using selection algorithm
 * @array: An array of ints
 * @size: size of the array
 * Return: Void. Prints the array after each swap
*/
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t a, b;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		min = array + a;
		for (b = a + 1; b < size; b++)
			min = (array[b] < *min) ? (array + b) : min;

		if ((array + a) != min)
		{
			int_swap(array + a, min);
			print_array(array, size);
		}
	}
}
