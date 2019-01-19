/**
	Assignment name  : rostring
	Expected files   : rostring.c
	Allowed functions: write, malloc, free
	--------------------------------------------------------------------------------

	Write a program that takes a string and displays this string after rotating it
	one word to the left.

	Thus, the first word becomes the last, and others stay in the same order.

	A "word" is defined as a part of a string delimited either by spaces/tabs, or
	by the start/end of the string.

	Words will be separated by only one space in the output.

	If there's less than one argument, the program displays \n.

	Example:

	$>./rostring "abc   " | cat -e
	abc$
	$>
	$>./rostring "Que la      lumiere soit et la lumiere fut"
	la lumiere soit et la lumiere fut Que
	$>
	$>./rostring "     AkjhZ zLKIJz , 23y"
	zLKIJz , 23y AkjhZ
	$>
	$>./rostring | cat -e
	$
	$>
 */

#include <unistd.h>
#include <stdlib.h>

void	rostring(char *str)
{
	char 	*first_word;
	int 	i;
	int 	first_word_len;
	int 	is_space;

	i = 0;
//	first_word_len =
	first_word = (char *)malloc(sizeof(char) * first_word_len);
	is_space = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;

	// print from second word
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			is_space = 1;

		i++;
	}
}

int 	main(int ac, char **av)
{
	if (ac == 2)
	{
		rostring(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
