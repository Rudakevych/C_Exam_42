/**
 * Task:

	Assignment name  : ft_swap
	Expected files   : ft_swap.c
	Allowed functions:
	--------------------------------------------------------------------------------

	Write a function that swaps the contents of two integers the adresses of which
	are passed as parameters.

	Your function must be declared as follows:

	void	ft_swap(int *a, int *b);
 */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int 	main()
{
	int a = 1;
	int b = 6;

	printf("Old values:\na = %d\nb = %d\n", a, b);
	ft_swap(&a, &b);
	printf("New values:\na = %d\nb = %d\n", a, b);
}
