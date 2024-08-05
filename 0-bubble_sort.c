#include "sort.h"
/**
 * bubble_sort - sorts an array of ints in ascending order
 * @array: array to sort
 * @size: sizze of the array
 * Return: Void
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int i, a;
	int tmp;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (a = 0; a < size - i - 1; a++)
		{
			if (array[a] > array[a +1])
			{
				tmp = array[a];
				array[a] = array[a + 1];
				array[a + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}