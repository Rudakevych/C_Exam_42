/**
 * Task:

Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
*/

#include "do_op.h"

void 	do_op_logic(char *first_number, char sign_char, char *second_number)
{
	int 	first_num;
	char 	sign;
	int 	second_num;

	first_num = atoi(first_number);
	sign = sign_char;
	second_num = atoi(second_number);
	if (sign == '*')
		printf("%d", first_num * second_num);
	else if (sign == '/')
		printf("%d", first_num / second_num);
	else if (sign == '+')
		printf("%d", first_num + second_num);
	else if (sign == '-')
		printf("%d", first_num - second_num);
	else if (sign == '%')
		printf("%d", first_num % second_num);
	else
		printf("ERROR: Please, enter correct second (sign) value!");
}

int 	main(int ac, char **av)
{
	if (ac == 4 && av[2][1] == '\0')
		do_op_logic(&av[1][0], av[2][0], &av[3][0]);
	printf("\n");
	return (0);
}
