/**
 * Task:
 *
	Assignment name  : rot_13
	Expected files   : rot_13.c
	Allowed functions: write
	--------------------------------------------------------------------------------

	Write a program that takes a string and displays it, replacing each of its
	letters by the letter 13 spaces ahead in alphabetical order.

	'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

	The output will be followed by a newline.

	If the number of arguments is not 1, the program displays a newline.

	Example:

	$>./rot_13 "abc"
	nop
	$>./rot_13 "My horse is Amazing." | cat -e
	Zl ubefr vf Nznmvat.$
	$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
	NxwuM mYXVWm , 23l $
	$>./rot_13 | cat -e
	$
	$>
	$>./rot_13 "" | cat -e
	$
	$>
 */

#include <unistd.h>

void	rot_13(char *str)
{
	int 	i;
	char	letter;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			letter = (char)(str[i] + 13);
			write(1, &letter, 1);
		}
		else if ((str[i] <= 'z' && str[i] >= 'N') || (str[i] <= 'Z' && str[i] >= 'N'))
		{
			letter = (char)(str[i] - 13);
			write(1, &letter, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int 	main(int ac, char **av)
{
	if (ac == 2)
		rot_13(&av[1][0]);
	write(1, "\n", 1);
	return (0);
}
