#include "sort.h"
int knuth_number(size_t size);
/**
 * shell_sort - the shell_sort function
 *
 * @array: the array to sort
 * @size: the size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap;
	int tmp;

	gap = knuth_number(size);

	while (gap >= 1)
	{
	for (i = gap; i < size; i++)
	{
		tmp = array[i];
		 for (j = i; (j >= gap) && (array[j - gap] > tmp); j -= gap)
		 {
			 array[j] = array[j - gap];
		 }
		 array[j] = tmp;
	}
	gap /= 3;
	print_array(array, size);
	}
}

/**
 * knuth_number - the function to calculate the knuth gap
 *
 * @size: the size of the array whose gap is to be determined
 *
 * Return: the biggest gap of the array
 */
int knuth_number(size_t size)
{
	size_t gap = 0;

	while (gap < size)
	{
		gap = gap * 3 + 1;
	}
	return (gap /= 3);
}
