#include <stdio.h>
#include "sort.h"

void quick_sort(int *array, size_t size);
void swapp_integer(int *first, int *sec);
int lomuto_partition_scheme(int *array, size_t size, int p_left, int p_right);
void recursive_quicksort(int *array, size_t size, int p_left, int p_right);

/**
 * swapp_integer - swaps two integers in an array
 * @first - the first integer
 * @sec - the second integer
 */

void swapp_integer(int *first, int *sec)
{
	int temp;
	
	temp = *first;
	*first = *sec;
	*sec = temp;
}

/**
 * quick_sort - function that sorts an array using quick sorting
 * @array: array being sorted
 * @size: size of array being sorted
 *
 * Description: prints the array in an ascending order
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	recursive_quicksort(array, size, 0, size - 1);
}

/**
 * recursive_quicksort - function that implements quicksort through recursion
 * @array: array being sorted
 * @size: size of array being sorted
 * @p_right: ending of the partition of the array
 * @p_left: begining of the partitioned array
 */

void recursive_quicksort(int *array, size_t size, int p_left, int p_right)
{
	int p;

	if (p_left < p_right)
	{
		p = lomuto_partition_scheme(array, size, p_left, p_right);
		print_array(array, size);
		recursive_quicksort(array, size, p_left, p - 1);
		recursive_quicksort(array, size, p + 1, p_right);
	}
}

/**
 * lomuto_partition_scheme - divides array into two sub arrays
 * and chooses last element in array as pivot
 * @array - array being subdivided
 * @size - size of the array being subdivided
 * @p_left - start of array patrtioned
 * @p-right - end of array partitioned
 *
 * Description: divides array into subarrays
 */

int lomuto_partition_scheme(int *array, size_t size, int p_left, int p_right)
{
	int a, b, pv;

	a = p_left - 1;
	pv = array[p_right];;
	for (b = p_left; b < p_right; b++)
	{
		if (array[b] < pv)
		{
			a++;
			swapp_integer(&array[a], &array[b]);
			if (a != b)
				print_array(array, size);
		}
	}

	swapp_integer(&array[a + 1], &array[p_right]);
	if (a + 1 != p_right)
		print_array(array, size);

	return (a + 1);
}
