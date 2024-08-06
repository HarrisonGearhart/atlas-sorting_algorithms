#include "sort.h"
/**
 * int_swap - swap 2 integers in an array
 * @i1: first int to swap
 * @i2: second int to swap
 * Return: Void
*/
void int_swap(int *i1; int *i2)
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
