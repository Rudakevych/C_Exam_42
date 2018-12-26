/**
 * Task:

Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);

*/

/*
 * $> man strcpy
 *
 * 	DESCRIPTION
       The strcpy() function copies the string pointed to by src, including the terminating null byte
       ('\0'), to the buffer pointed to by dest.  The strings may not overlap,  and  the  destination
       string dest must be large enough to receive the copy.  Beware of buffer overruns!  (See BUGS.)
	RETURN VALUE
       The strcpy() functions return a pointer to the destination string dest.

       s1 = dest;
       s2 = src;
 */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
}

char    *ft_strcpy(char *s1, char *s2)
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (s1);
}

int 	main()
{
	char s1[] = "Hello dude!";
	char s2[] = "Hi all!";

	ft_strcpy(s1, s2);
	ft_putstr(s1);
	return (0);
}
