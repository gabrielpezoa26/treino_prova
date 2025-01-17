/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:06:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/01/16 23:34:17 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int number)
{
	char	str[10] = "0123456789";  //array de dígitos

	if (number > 9)
		ft_putnbr(number / 10);  //recursivo
	write (1, &str[number % 10], 1);  //printa o char atual
}

int		main(void)
{
	int i;

	i = 1;  //tem q ser 1
	while (i <= 100)
	{
		if (i % 15 == 0)  //se for divisivel por 3 e 5
		{
			write (1, "fizzbuzz", 8);
		}
		else if (i % 3 == 0)
		{
			write (1, "fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write (1, "buzz", 4);
		}
		else
			ft_putnbr(i);  //simplesmente printa o numero
		i++;
		write (1, "\n", 1);
	}
}
/*Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz*/