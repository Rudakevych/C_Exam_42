/**
 * Task:
 *
	Assignment name  : rev_print
	Expected files   : rev_print.c
	Allowed functions: write
	--------------------------------------------------------------------------------

	Write a program that takes a string, and displays the string in reverse
	followed by a newline.

	If the number of parameters is not 1, the program displays a newline.

	Examples:

	$> ./rev_print "zaz" | cat -e
	zaz$
	$> ./rev_print "dub0 a POIL" | cat -e
	LIOP a 0bud$
	$> ./rev_print | cat -e
	$
 */

#include <unistd.h>

int 	ft_strlen(char *str)
{
	int 	len;
	int		i;

	len = 0;
	i = 0;
	while(str[i])
	{
		len++;
		i++;
	}
	return (len);
}

void	rev_print(char *str)
{
	int 	str_len;
	int		i;

	str_len = ft_strlen(str);
	i = str_len - 1;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

int 	main(int ac, char **av)
{
	if (ac == 2)
		rev_print(&av[1][0]);
	write(1, "\n", 1);
	return (0);
}
