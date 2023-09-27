#include <stdio.h>
#include "sort.h"

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
 * selection_sort - function that sorts an array using selection sorting
 * @array: array being sorted
 * @size: size of array being sorted
 *
 * Description: prints array in an ascending order
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b;
	int *mini_no;

	if (array == NULL || size < 2)
		return;
	for (a = 0; a < size - 1; a++)
	{
		mini_no = array + a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < *mini_no)
				mini_no = array + b;
		}

		if (array + a != mini_no)
		{
			swapp_integer(array + a, mini_no);
			print_array(array, size);
		}
	}
}
