/**
Assignment name  : str_capitalizer
Expected files   : str_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "Premier PETIT TesT" | cat -e
Premier Petit Test$
$> ./str_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e
Deuxieme Test Un Peu Moins  Facile$
Attention C'est Pas Dur Quand Meme$
Aller Un Dernier 0123456789pour La Route    E $
$>
*/



















//
//#include <unistd.h>
//
//void    ft_putchar(char c)
//{
//    write(1, &c, 1);
//}
//
//void    str_capitalizer(const char *str)
//{
//    int i;
//    int flag;
//
//    i = 0;
//    flag = 1;
//    while (str[i])
//        i++;
//    while (str[i])
//    {
//        if (str[i] < 141)
//
//        if (str[i - 1] == ' ' || str[i - 1] == '\t')
//        {
//            str[i] = str[i] +
//        }
//        i++;
//    }
//}
//
//int     main(int ac, char **av)
//{
//    int i;
//
//    i = 1;
//    if (ac > 1)
//    {
//        while(ac > i)
//        {
//            str_capitalizer(&av[i][0]);
//            i++;
//        }
//    }
//    write(1, "\n", 1);
//}
