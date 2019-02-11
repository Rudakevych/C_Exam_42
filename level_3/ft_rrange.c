/**
 *
Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
 *
 */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int i;
	int	*arr;

	i = 0;
	if (start < end)
		arr = (int *)malloc(sizeof(int) * (end - start));
	else
		arr = (int *)malloc(sizeof(int) * (start- end));
	if (!arr)
		return (0);
	while (end > start)
	{
		arr[i] = end;
		end--;
		i++;
	}
	arr[i] = start;
	while (end < start)
	{
		arr[i] = end;
		end++;
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
	start = 10;
	end = -1;
	arr_size = 15;
	range = ft_rrange(start, end);
	while (i < arr_size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
