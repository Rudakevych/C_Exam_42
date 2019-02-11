/**
 * Task:

	Assignment name  : alpha_mirror
	Expected files   : alpha_mirror.c
	Allowed functions: write
	--------------------------------------------------------------------------------

	Write a program called alpha_mirror that takes a string and displays this string
	after replacing each alphabetical character by the opposite alphabetical
	character, followed by a newline.

	'a' becomes 'z', 'Z' becomes 'A'
	'd' becomes 'w', 'M' becomes 'N'

	and so on.

	Case is not changed.

	If the number of arguments is not 1, display only a newline.

	Examples:

	$>./alpha_mirror "abc"
	zyx
	$>./alpha_mirror "My horse is Amazing." | cat -e
	Nb slihv rh Znzarmt.$
	$>./alpha_mirror | cat -e
	$
	$>
*/

#include <unistd.h>

void	alpha_mirror(char *str)
{
	int 	i;
	char 	letter;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			letter = (char)('z' - str[i] + 'a');
			write(1, &letter, 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			letter = (char)('Z' - str[i] + 'A');
			write(1, &letter, 1);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}

int 	main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(&av[1][0]);
	write(1, "\n", 1);
	return (0);
}
