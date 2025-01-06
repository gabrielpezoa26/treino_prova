/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:11:19 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/01/06 14:38:41 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	int	mango_loko;
	int	temp;

	while (mango_loko < n)  //enquanto n atingir o numero
	{
		temp = n * 2;
		if (temp == n)
			return (1);  //retorno dos campeoes
	}
	return (0);  //retorno dos campeoes
}
//teste
int	main(void)
{
	int	number = 4;

	printf("%d", is_power_of_2(number));
}
/*
Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);
*/