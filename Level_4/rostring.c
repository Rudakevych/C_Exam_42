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

char 	*write_first_word(char *str, int i)
{
	char 	*first_word;
	int 	tmp;
	int 	j;
	int 	first_word_len;

	j = 0;
	tmp = i;
	while (str[tmp] != ' ' && str[tmp] != '\t')
		tmp++;
	first_word_len = tmp - i;
	first_word = (char *)malloc(sizeof(char) * first_word_len + 1);
	while (first_word_len > 0)
	{
		first_word[j] = str[i];
		first_word_len--;
		j++;
		i++;
	}
	first_word[j] = '\0';
	return (first_word);
}

void	rostring(char *str)
{
	char 	*first_word;
	int 	i;
	int 	is_space;
	int 	j;
	int 	second_part_len;

	i = 0;
	j = 0;
	is_space = 0;
	second_part_len = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	first_word = write_first_word(str, i);
	while (str[i] != ' ' && str[i] != '\t')
		i++;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])	// print from second word to the end with one space
	{
		if (str[i] == ' ' || str[i] == '\t')
			is_space = 1;
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (is_space == 1)
				write(1, " ", 1);
			is_space = 0;
			write(1, &str[i], 1);
		}
		i++;
		second_part_len++;
	}
	if (second_part_len > 0)
		write(1, " ", 1);
	while (first_word[j]) // print first word
	{
		write(1, &first_word[j], 1);
		j++;
	}
	free(first_word);
}

int 	main(int ac, char **av)
{
	if (ac == 2)
		rostring(av[1]);
	write(1, "\n", 1);
//	system("leaks rostring"); // check memory leaks
	return (0);
}
