#include "sort.h"
void swap(int *small, int *big, size_t, int *);

/**
 *  bubble_sort - the sort function
 *
 *  @array: the array to sort
 *  @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size; j++)
		{
			if (array[j] < array[j - 1])
			{
				swap(&array[j - 1], &array[j], size, array);
			}
		}
	}
}


/**
 * swap - the swap function
 *
 * @small: the smaller value to swap
 * @big: the bigger value to swap
 * @n: the size of the array
 * @array: the array passed to be printed
 */
void swap(int *small, int *big, size_t n, int *array)
{
	int tmp;
	
	tmp = *big;
	*big = *small;
	*small = tmp;
	
	print_array(array, n);
}
