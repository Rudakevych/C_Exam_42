/*
 *
 * Task:

Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);

*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char    *ft_strcpy(char *s1, char *s2)
{

}

int 	main()
{
	char *s1;
	char *s2;

	s1 = "Ho-ho-ho!";
	s2 = "Hi all!";
	ft_strcpy(s1, s2);
	ft_putstr(s1);
	ft_putstr("\n OK");
	return (0);
}
