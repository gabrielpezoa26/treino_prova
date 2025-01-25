/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:51:17 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/24 19:55:57 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "libft.h"

static size_t	ft_calculate_len(int value)
{
	size_t	size = 0;

	if (value < 0)
	{
		value *= -1;
		size++;
	}
	while (value > 0)
	{
		value /= 10;
		size++;
	}
	return (size);
}

static void	ft_convert_to_str(char *string, unsigned int num, size_t len)
{
	size_t	index;

	index = len - 1;
	while (num > 0)
	{
		string[index] = (num % 10) + '0';
		num /= 10;
		index--;
	}
}

char	*ft_itoa(int n)
{
	size_t			len;
	unsigned int	num;
	char			*result;

	len = ft_calculate_len(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == 0)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
	{
		result[0] = '-';
		num = -n;
	}
	else
		num = n;
	ft_convert_to_str(result, num, len);
	return (result);
}



/*Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);*/