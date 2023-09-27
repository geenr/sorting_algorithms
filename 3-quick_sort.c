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

	if (p_right - p_left > 0)
	{
		p = lomuto_partition_scheme(array, size, p_left, p_right);
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
 * Returns: final partition index
 */

int lomuto_partition_scheme(int *array, size_t size, int p_left, int p_right)
{
	int a, b, *pv;

	pv = array + p_right;
	for (a = b = p_left; b < p_right; b++)
	{
		if (array[b] < *pv)
		{
			if (a < b)
			{
				swapp_integer(array + b, array + a);
				print_array(array, size);
			}
			a++;
		}
	}

	if (array[a] > *pv)
	{
		swapp_integer(array + a, pv);
		print_array(array, size);
	}

	return (a);
}
