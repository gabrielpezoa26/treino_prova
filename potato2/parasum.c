/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 15:24:42 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/19 15:29:01 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void ft_putnbr(int nbr)
{
	char number;
	
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	number = (nbr % 10) + '0';
	write(1, &number, 1);
}
int main(int argc, char **argv)
{
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
}

/*
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