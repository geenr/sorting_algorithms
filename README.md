this is all about sorting algorithmns
we will majorly focus on the following sorting methods
insertion sort
bubble sort
selection sort
quick sort
we are also going to look at Big O notation which helps check for the efficiency of an algorithmn in terms of time and space hence we are going to look at the best case, average case and worst case scenario for all methods to determine the best sorting method to use
although all sorting methods are good and non is specifically best, it is all depent on the machine being used and the users requirement
bubble sort - (considered highly inefficient) this one swaps the adjascent elements until the desired order is achieved. it begins swappinf the first two elements until the last then comes back again unttil there is no more swap
	best case time complexity O(n)
	average case O(n ^ 2)
	worst case O(n ^ 2)
	space O(1)
insertion sort - two list are prepared one with the unsorted elements the other with sorted elements elements in the unsorted are picked and placed in the sorted - USED FOR SMALL DATA
	best case time complaxity O(n)
	average case O(n ^ 2)
	worst case O(n ^2)
	space O(1)
selection sort - this one repeatedly selects the minimum element in an array, ie when soting in an ascending order, and places them in a new sorted list until all elemnts are sorted
	best case time complexity O(n ^ 2)
	average case O(n ^ 2)
	worst case O(n ^ 2)
	space O(1)
quick sort - (among the fastest) a random element is selected which endsup to be the pivot of the sorting stuff (it uses the divivde and conquer approach)- MOSTLY USED FOR LARGE DATA
	best case time complexity O(n log n)
	average case O(n log n)
	worst case O(n ^ 2)
	space O(log n)
