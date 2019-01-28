/**
 * Task:

	Assignment name  : ft_split
	Expected files   : ft_split.c
	Allowed functions: malloc
	--------------------------------------------------------------------------------

	Write a function that takes a string, splits it into words, and returns them as
	a NULL-terminated array of strings.

	A "word" is defined as a part of a string delimited either by spaces/tabs/new
	lines, or by the start/end of the string.

	Your function must be declared as follows:

	char    **ft_split(char *str);

 */

int 	ft_word_len(char *str)
{
	int 	len;
	int 	i;

	len = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			while (str[i] != ' ' && str[i] != '\t')
				i++;
			len++;
		}
		i++;
	}
	return (len);
}

#include <stdlib.h>

char    **ft_split(char *str)
{
	char	**arr;
	int 	words_num;

	words_num = ft_word_len();
	if (!(arr = (char **)malloc(sizeof(char *) * words_num + 1)))
		return (NULL);


	return (arr);
}

#include <stdio.h> //

int 	main() //
{
	char	*split_str;
	char	**arr;
	int		i;

	split_str = "  One   Two Three    Four Five    ";
	arr = ft_split(split_str);
	i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}
