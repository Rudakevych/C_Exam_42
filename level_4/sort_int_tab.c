/**
	Assignment name  : sort_int_tab
	Expected files   : sort_int_tab.c
	Allowed functions:
	--------------------------------------------------------------------------------

	Write the following function:

	void sort_int_tab(int *tab, unsigned int size);

	It must sort (in-place) the 'tab' int array, that contains exactly 'size'
	members, in ascending order.

	Doubles must be preserved.

	Input is always coherent.

 */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int 	i;
	int 			tmp;

	i = 1;
	if (size != 0)
	{
		while (i <= size)
		{
			if (tab[i] < tab[i - 1])
			{
				tmp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = tmp;
				i = 0;
			}
			i++;
		}
	}
}

#include <stdio.h> //

int main(void) //
{
	int tab[10];
	int i = 0;

	tab[0] = 9;
	tab[1] = 2;
	tab[2] = 4;
	tab[3] = 3;
	tab[4] = 8;
	tab[5] = 0;
	tab[6] = 1;
	tab[7] = 7;
	tab[8] = 5;
	tab[9] = 6;
	sort_int_tab(tab, 9);
	while (i <= 9)
		printf("%d\n", tab[i++]);
	return (0);
}


//#include <stdio.h>
//
//int 	main()
//{
//	int 			i = 0;
//	unsigned int	size = 6;
//	int				tab[6] = {9, 7, 6, 4, 5, 10};
//
//	sort_int_tab(tab, size);
//	while (i < size)
//	{
//		printf("%d ", tab[i]);
//		i++;
//	}
//	return (0);
//}
