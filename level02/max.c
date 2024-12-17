/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:33:43 by gabriel           #+#    #+#             */
/*   Updated: 2024/12/17 19:53:26 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	index;
	unsigned		temp;

	if (!tab || len == 0)
		return (0);
	temp = tab[0];
	index = 1;
	while (index < len)
	{
		if (tab[index] > temp)
			temp = tab[index];
		index++;
	}
	return (temp);
}

int	main(void)
{
	int potato[] = {12, 2, 35, 42, 58};

	printf("%d\n", max(potato, 5));
}
/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/