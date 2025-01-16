/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:13:36 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/16 16:51:36 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	number;

	if (argc == 2)  //validacao argc
	{
		i = 1;  //tem q comecar em 1 pra entrar no while
		number = atoi(argv[1]);  //converte o input pra int
		if (number == 1)  //resultado de 1 é 1
			printf("1");
		while (number >= ++i)  //compara 'number' com o 'i' já incrementado, pq sim
		{
			if (number % i == 0)  //verifica se 'i' é um divisor de 'number', ou seja, se é um fator
			{
				printf("%d", i);  //printa o 'i' atual
				if (number == i)  //para o loop pq chegou no último fator
					break ;
				printf("*");  //printa o *
				number /= i;  //passa pro proximo fator
				i = 1;  //reseta o i pra 1, pra voltar pro while
			}
		}
	}
	printf("\n");  //n esquecer da quebra de linha
	return (0);
}

/*
	validacao argc;  uma variavel e um index;  inicia 'i' em 1;
	converte input p int;  de 1 é um;  while compara input com 'i' ja incrementado;
	verifica se 'i' é fator de 'n' com %, se for, 6 linhas, reseta i = 1;
	printa o '\n' no final;
*/





/*Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there is one, will be valid.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
*/