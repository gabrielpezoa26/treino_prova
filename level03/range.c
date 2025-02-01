/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:11:58 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/02/01 19:02:26 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	size;
	int	*result;

	i = 0;
	if (start < end)
		size = end - start + 1;
	else
		size = start - end + 1;
	result = (int *)malloc(sizeof(int) * size);
	if (result == NULL)
		return NULL;
	while (i < size)
	{
		result[i] = start;
		if (start < end)
			start++;
		else
			start--;
		i++;
	}

	return result;
}


//teste
int	main(void)
{
	int	j;
	int	end;
	int	start;
	int	*kartoffel;

	start = -1;
	end = 2;
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
- With (0, -3) you will return an array containing 0, -1, -2 and -3.*///int *ft_range(int start, int end)
// {
// 	int i = 0;
// 	int len = abs((end - start)) + 1;
// 	int *res = (int *)malloc(sizeof(int) * len);
	
// 	while (i < len)
// 	{
// 		if (start < end)
// 		{
// 			res[i] = start;
// 			start++;
// 			i++;
// 		}
// 		else
// 		{
// 			res[i] = start;
// 			start--;
// 			i++;
// 		}
// 	}
// 		return (res);
// }

//		mango_loko = (int *) malloc(size * sizeof(int));