/**
		Assignment name  : tab_mult
		Expected files   : tab_mult.c
		Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>
 */

#include <unistd.h>
#include <stdio.h>

int 	ft_atoi(char *str)
{
	int	num;
	int	i;
	int	is_minus;

	i = 0;
	num = 0;
	is_minus = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_minus = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num = num + (str[i] - '0');
		i++;
	}
	return (num * is_minus);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num = num * (-1);
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
}

void	tab_mult(char *str)
{
	int i;
	int num;

	i = 1;
	num = ft_atoi(str);
	if (num > 0)
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr(num * i);
			ft_putchar('\n');
			i++;
		}
	else
		write(1, "ERROR: Number should be greater than zero.\n", 43);
}

int 	main(int ac, char **av)
{
	/** ft_atoi test */
//	char	*str;
//
//	str = "   -234   ";
//	printf("%d\n", ft_atoi(str));
	/** ft_putnbr test */
//	int		num;
//
//	num = -2345;
//	ft_putnbr(num);
//	ft_putchar('\n');
	/** main test */
	int	i;

	i = 0;
	if (ac == 2)
		tab_mult(&av[1][i]);
	else
		ft_putchar('\n');
	return (0);
}