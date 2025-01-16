/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:49:36 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/16 15:41:14 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 4)  //verificacao
	{
		if (argv[2][0] == '+')
		{
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
		}
		if (argv[2][0] == '-')
		{
			printf("%d", (atoi(argv[1]) - atoi(argv[3])));
		}
		if (argv[2][0] == '*')
		{
			printf("%d", (atoi(argv[1]) * atoi(argv[3])));
		}
		if (argv[2][0] == '/')
		{
			printf("%d", (atoi(argv[1]) / atoi(argv[3])));
		}
		if (argv[2][0] == '%')
		{
			printf("%d", (atoi(argv[1]) % atoi(argv[3])));
		}
	}
	printf("\n");  //printa a quebra de linha independente do argc
	return (0);
}

/*
	primeiro parametro do printf vai ser sempre argv[1], e o segundo sempre argv[3];
	um if pra cada operador (5 no total);  printa \n no final e retorna 0;
*/
/*Assignment name  : do_op
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
$*/