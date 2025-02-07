/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrange.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:04:17 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/02/07 09:23:55 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *result;
	int i = 0;
	int size;

	size = end - start + 1;
	if (start > end)
		return (ft_rrange(end, start));

	result = (int *)malloc(sizeof(int) * size);
	if (!result)
		return (NULL);

	if (result != 0)
	{
		while (i < size)
		{
			result[i] = end;
			end--;
			i++;
		}
	}
	return (result);
}

//teste
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
		printf("%d \n", potato[j]);
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