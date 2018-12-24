/**
 *
Assignment name  : ft_list_size
Expected files   : ft_list_size.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

 */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		counter;
	t_list	*list;

	counter = 0;
	list = begin_list;
	if (list)
	{
		while (list)
		{
			list = list->next;
			counter++;
		}
	}
	return (counter);
}