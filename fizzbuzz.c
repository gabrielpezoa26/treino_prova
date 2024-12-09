/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:06:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/12/07 14:02:37 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fizzbuzz(void)
{
	int	number;
	int	mango_loko;
	int	loko_mango;

	number = 1;
	while (number <= 100)
	{
	mango_loko = number % 3;
	loko_mango = number % 5;
		if (mango_loko == 0 && loko_mango == 0)
		{
			write(1, "fizzbuzz\n", 9);
		}
		if (mango_loko == 0)
		{
			write(1, "fizz\n", 5);
		}
		if (loko_mango == 0)
		{
			write(1, "buzz\n", 5);
		}
		write(1, &number, 1);
		number++;
	}
}

int	main(void)
{
	fizzbuzz();
}
