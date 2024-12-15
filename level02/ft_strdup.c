/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:06:11 by gabriel           #+#    #+#             */
/*   Updated: 2024/12/15 16:19:40 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *string)
{
	int	count;

	count = 0;
	while (string[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*result;

	result = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (result == NULL || src == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (src[index] != '\0')
	{
		result[index] = src[index];
		index++;
	}
	result[index] = '\0';
	return (result);
}

int	main(void)
{
	char *mango_loko = "hellooo";
	printf("%s\n", ft_strdup(mango_loko));
}
/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/