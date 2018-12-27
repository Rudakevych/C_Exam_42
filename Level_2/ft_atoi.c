/**
 * Task:

	Assignment name  : ft_atoi
	Expected files   : ft_atoi.c
	Allowed functions: None
	--------------------------------------------------------------------------------

	Write a function that converts the string argument str to an integer (type int)
	and returns it.

	It works much like the standard atoi(const char *str) function, see the man.

	Your function must be declared as follows:

	int	ft_atoi(const char *str);

*/

# include <stdlib.h>
# include <stdio.h>

int		ft_atoi(const char *str)
{
	int		num;
	int 	i;
	int 	is_minus;

	num = 0;
	i = 0;
	is_minus = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
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

int 	main()
{
	printf("Test 1:\n%d\n", atoi("    -123"));
	printf("%d\n", ft_atoi("    -123"));
	printf("Test 2:\n%d\n", atoi("0"));
	printf("%d\n", ft_atoi("0"));
	printf("Test 3:\n%d\n", atoi(""));
	printf("%d\n", ft_atoi(""));
	printf("Test 4:\n%d\n", atoi("fffff"));
	printf("%d\n", ft_atoi("fffff"));
	printf("Test 5:\n%d\n", atoi("3fffff"));
	printf("%d\n", ft_atoi("3fffff"));
	printf("Test 6:\n%d\n", atoi("fffff23"));
	printf("%d\n", ft_atoi("fffff23"));
	printf("Test 7:\n%d\n", atoi("-42fffff"));
	printf("%d\n", ft_atoi("-42fffff"));
	return (0);
}
