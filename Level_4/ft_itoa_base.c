/**
 *  Assignment name  : ft_itoa_base
    Expected files   : ft_itoa_base.c
    Allowed functions: malloc
    --------------------------------------------------------------------------------

    Write a function that converts an integer value to a null-terminated string
    using the specified base and stores the result in a char array that you must
    allocate.

    The base is expressed as an integer, from 2 to 16. The characters comprising
    the base are the digits from 0 to 9, followed by uppercase letter from A to F.

    For example, base 4 would be "0123" and base 16 "0123456789ABCDEF".

    If base is 10 and value is negative, the resulting string is preceded with a
    minus sign (-). With any other base, value is always considered unsigned.

    Your function must be declared as follows:

    char	*ft_itoa_base(int value, int base);
 */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int		size(long nb, int base)
{
    int		len = 0;

    if (nb < 0 && base == 10)
    {
        len++;
        nb = nb * -1;
    }
    else if (nb < 0)
        nb = nb * -1;
    while (nb > 0)
    {
        len++;
        nb = nb / base;
    }
    return (len);
}

char	*ft_itoa_base(int value, int base)
{
    char	*str;
    char	tab[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int		i;
    int		o;
    long	nb;

    nb = value;
    i = size(nb, base);
    str = (char*)malloc(sizeof(char) * (i + 1));
    str[i--] = '\0';
    if (nb == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (nb < 0 && base == 10)
    {
        str[0] = '-';
        nb = nb * -1;
    }
    else if (nb < 0)
        nb = nb * -1;
    while (nb > 0)
    {
        o = nb % base;
        str[i] = tab[o];
        nb = nb / base;
        i--;
    }
    return (str);
}
