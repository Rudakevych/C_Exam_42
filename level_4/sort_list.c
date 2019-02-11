/**
	Assignment name  : sort_list
	Expected files   : sort_list.c
	Allowed functions:
	--------------------------------------------------------------------------------

	Write the following functions:

	t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

	This function must sort the list given as a parameter, using the function
	pointer cmp to select the order to apply, and returns a pointer to the
	first element of the sorted list.

	Duplications must remain.

	Inputs will always be consistent.

	You must use the type t_list described in the file list.h
	that is provided to you. You must include that file
	(#include "list.h"), but you must not turn it in. We will use our own
	to compile your assignment.

	Functions passed as cmp will always return a value different from
	0 if a and b are in the right order, 0 otherwise.

	For example, the following function used as cmp will sort the list
	in ascending order:

	int ascending(int a, int b)
	{
		return (a <= b);
	}
	--------------------------------------------------------------------------------
	typedef struct s_list t_list;

	struct s_list
	{
		int     data;
		t_list  *next;
	};

 */

#include "list.h"

int		ft_comparator(int a, int b)
{
	if (a <= b) //1 < 2 = 1
		return (1);
	else // 2 > 1 = 0
		return (0);
}

int		ft_is_diff(t_list *lst, int (*cmp)(int, int))
{
	while (lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
			return (0);
		lst = lst->next;
	}
	return (1);
}

t_list 	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*first;
	int		swap;

	swap = 0;
	first = lst;
	while (ft_is_diff(first, ft_comparator) == 0)
	{
		lst = first;
		while (lst->next)
		{
			if ((*cmp)(lst->data, lst->next->data) == 0)
			{
				swap = lst->data;
				lst->data = lst->next->data;
				lst->next->data = swap;
			}
			lst = lst->next;
		}
	}
	return (first);
}

#include <stdlib.h> //
#include <stdio.h> //

int		main(void) //
{
	t_list	*lst;

	lst = (t_list*)malloc(sizeof(t_list));
	lst->data = 20;
	lst->next = (t_list*)malloc(sizeof(t_list));
	lst->next->data = 10;
	lst->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->data = 0;
	lst->next->next->next = NULL;

	lst = sort_list(lst, ft_comparator);

	while (lst != NULL)
	{
		printf("%d\n", (int)lst->data);
		lst = lst->next;
	}
	return (0);
}
