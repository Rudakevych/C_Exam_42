/**
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
 */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int i;
	int	*arr;

	i = 0;
	if (end > start)
		arr = (int *)malloc(sizeof(int) * (end - start));
	else
		arr = (int *)malloc(sizeof(int) * (start - end));
	if (!arr)
		return (NULL);
	while (end > start)
	{
		arr[i] = start;
		start++;
		i++;
	}
	arr[i] = end;
	while (start > end)
	{
		arr[i] = start;
		start--;
		i++;
	}
	arr[i] = end;
	return (arr);
}

int 	main()
{
	int i;
	int start;
	int end;
	int *range;
	int arr_size;

	i = 0;
	start = -10;
	end = 1;
	arr_size = 15;
	range = ft_range(start, end);
	while (i < arr_size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}