/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:06:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/12/05 14:25:27 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fizzbuzz(void)
{
	int	number;
	int	mango_loko;
	int	loko_mango;

	number = 1;
	mango_loko = number % 3;
	loko_mango = number % 5;
	while (number <= 100)
	{
		if (mango_loko == 0)
		{
			write(1, "fizz", 4);
			number++;
		}
		if (loko_mango == 0)
		{
			write(1, "buzz", 4);
			number++;
		}
		if (mango_loko == 0 && loko_mango == 0)
		{
			write(1, "fizzbuzz", 1);
			number++;
		}
		write(1, &number, 1);
		number++;		
	}


}

int	main(void)
{
	fizzbuzz();
}
