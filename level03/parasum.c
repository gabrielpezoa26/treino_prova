/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:30:59 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/01/16 14:49:47 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)  //putnbr simplificado
{
	char number;

	if (n >= 10)  //enquanto for maior que 9
	{
		ft_putnbr(n / 10);  recursivo
	}
	number = (n % 10) + '0';
	write(1, &number, 1);
}

int	main(int argc, char **argv)
{
	ft_putnbr(argc - 1);  //printa a contagem, -1 por causa do a.out
	write(1, "\n", 1);  //quebra de linha
	return (0);
}

/*
	usa putnbr; na main só chama ft_putnbr(argc - 1) p tirar o a.out; quebra linha
*/

/*Assignment name  : paramsum
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
$>*/