
/**
Assignment name  : paramsum
        Expected files   : paramsum.c
        Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
        a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>
 */

#include <unistd.h>

void    ft_putchar (char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int num)
{
    if (num < 0)
    {
        write(1, "-", 1);
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

int     main(int ac, char **av)
{
    if (ac > 1)
        ft_putnbr(ac - 1);
    else
        write(1, "0", 1);
    write(1, "\n", 1);
    return (0);
}