
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
	t_list *first;
	int swap;

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






#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	t_list *lst;

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


/*

 static void		list_swap(t_list *l1, t_list *l2)
{
	int				tmp;

	tmp = l1->data;
	l1->data = l2->data;
	l2->data = tmp;
}

t_list			*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list			*tmp;

	tmp = lst;
	while (lst && lst->next)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			list_swap(lst, lst->next);
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	return (tmp);
}

*/