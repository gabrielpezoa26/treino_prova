/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:51:17 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/21 17:17:36 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int	ft_strlen(char *string)
{
	int	count;

	count = 0;
	while (string[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*result;

	result = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (result == NULL || src == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static size_t	ft_calculate_len(int value)
{
	size_t	size;

	size = 0;
	if (value == 0)
		return (1);
	else if (value < 0)
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

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
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

/*
	
*/


/*Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);*/