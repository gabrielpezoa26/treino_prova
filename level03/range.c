/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:11:58 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/01/17 11:14:14 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	*result;
	int size;
	int i;

	size = abs(end - start) + 1;
	if (start < end)  //validaçao q nao ta funfando
	{
		result = malloc(size * sizeof(int));
		if (result == NULL)  //valicaçao malloc
			return (NULL);
		i = 0;
		while ((start + i) <= end)
		{
			result[i] = start + i;  //so aceita
			i++;  //avanca pro proximo
		}
		return (result);
	}
	return (NULL);
}

//		mango_loko = (int *) malloc(size * sizeof(int));
/*

*/



//teste
int	main(void)
{
	int	j;
	int	end;
	int	start;
	int	*kartoffel;

	start = 1;
	end = 10;
	j = 0;
	if (start == end)
		return (1);
	kartoffel = ft_range(start, end);
	while (j != (end - start + 1))
	{
		printf("%d\n", kartoffel[j]);
		j++;
	}
	free(kartoffel);
	return (0);
}
/*Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.*/