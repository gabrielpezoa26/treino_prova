/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:06:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/12/09 15:45:42 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int katana)
{
	char	digit;

	if (katana >= 10)
		print_number(katana / 10);
	digit = (katana % 10) + '0';
	write(1, &digit, 1);
}

void	fizzbuzz(void)
{
	int number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (number % 3 == 0)
			write(1, "fizz\n", 5);
		else if (number % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			print_number(number);
			write(1, "\n", 1);
		}
		number++;
	}
}

int	main(void)
{
	fizzbuzz();
}
