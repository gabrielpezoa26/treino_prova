/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:06:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/01/05 18:21:08 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mango_loko(int number)  //p conseguir imprimir numero, recursivo
{
	char	str[10] = "0123456789";

	if (number > 9)
		mango_loko(number / 10);
	write (1, &str[number % 10], 1);
}

int		main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
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
			mango_loko(i);
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