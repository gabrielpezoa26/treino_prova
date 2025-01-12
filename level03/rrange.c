/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrange.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:04:17 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/01/11 17:26:42 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*result;
	int	i;
	int	range_length;
	int	step;

	range_length = end - start;
	if (range_length < 0)
		range_length *= -1;
	range_length++;
	if (result != NULL)
	{
		if (start < end)
			step = -1;
		while (i < range_length)
		{
			result[i] = end;
			end = end + step;
			i++;
		}
	}
	return (result);
}

int	main(void)
{
	int	j;
	int	end;
	int	start;
	int	*potato;

	start = 1;
	end = 3;
	j = 0;
	if (start == end)
		return (1);
	potato = ft_rrange(start, end);
	while (j != (end - start + 1))
	{
		printf("%d\n", potato[j]);
		j++;
	}
	free(potato);
	return (0);
}
/*Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.*/