#include <stdio.h>
#include <stdbool.h>
#include "sort.h"

/**
 * swapp_integer - swaps two integers in an array
 * @first - the first integer
 * @sec - the second integer
 */

void swapp_integer(int* first, int* sec)
{
	int temp = *first;
	*first = *sec;
	*sec = temp;
}

/**
 * bubble_sort - function that sorts array using bubble sorting
 * @array: the array being sorted
 * @size: the size of that array
 *
 * Description: prints array in ascending order
 */
void bubble_sort(int *array, size_t size)
{
	bool swapp;
	size_t a, b;
	for (a = 0; a < size - 1; a++)
	{
		swapp = false;
		for (b = 0; b < size - a - 1; b++)
		{
			/*if first no is bigger than nxt no*/
			if (array[b] > array[b + 1])
			{
				/*swap first no with nxt no*/
				swapp_integer(&array[b], &array[b + 1]);
				print_array(array, size);
				swapp = true;
			}
		}
		/*where no swap occurs break.*/
		if (!swapp)
			break;
	}
}
