/**
 *
	Assignment name  : ft_itoa
	Expected files   : ft_itoa.c
	Allowed functions: malloc
	--------------------------------------------------------------------------------

	Write a function that takes an int and converts it to a null-terminated string.
	The function returns the result in a char array that you must allocate.

	Your function must be declared as follows:

	char	*ft_itoa(int nbr);

*/

#include <stdlib.h>

int 	ft_num_lenth(int num)
{
	int 	ret;

	ret = 0;
	if (num < 0)
		num = num * (-1);
	if (num == 0)
		ret++;
	while (num > 0)
	{
		num = num / 10;
		ret++;
	}
	return (ret);
}

int 	ft_is_minus(int num)
{
	int 	ret;

	ret = 1;
	if (num < 0)
		ret = -1;
	return (ret);
}

void	ft_reverse_str(char *str, int len)
{
	int 	i;
	int 	j;
	char 	tmp;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int 	is_minus;
	int 	n_len;
	int 	i;

	i = 0;
	n_len = ft_num_lenth(nbr);
	if (!(str = (char *)malloc(sizeof(char *) * n_len + 1)))
		return (NULL);
	is_minus = ft_is_minus(nbr);
	if (is_minus < 0)
		nbr = nbr * (-1);
	while (n_len > 0)
	{
		if ((nbr % 10) > 0)
			str[i++] = (char)(nbr % 10 + '0');
		else
			str[i++] = '0';
		nbr = nbr / 10;
		n_len--;
	}
	if (is_minus < 0)
		str[i++] = '-';
	ft_reverse_str(str, i);
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int 	main()
{
	int	num = -234;
	printf("%s", ft_itoa(num));
	return (0);
}
