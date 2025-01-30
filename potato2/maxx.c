/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxx.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:22:15 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/01/29 19:22:16 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	max(int	*tab, unsigned int len)
{
	unsigned int	i = 1;
	int	big;

	if (!tab || len == 0)
		return (0);
	big = tab[0];
	while(i < len)
	{
		if (tab[i] > tab[i + 1])
			big = tab[i];
		i++;
	}
	return (big);
}

int	main(void)
{
	int beans[] = {12, 2, 335, 4222, 58};
	int	empty[] = {};

	printf("%d\n", max(beans, 5));
	printf("empty: %d\n", max(empty,0));
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