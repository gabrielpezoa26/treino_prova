/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splittt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:26:43 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/02/01 11:40:11 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

static size_t	ft_countwords(char const *s, char delimeter)
{
	size_t	num;
	int		word;

	num = 0;
	word = 0;
	while (*s)
	{
		if (*s != delimeter && word == 0)
		{
			word = 1;
			num++;
		}
		else if (*s == delimeter)
			word = 0;
		s++;
	}
	return (num);
}

static void	*ft_free_memory(char **array, int free_position)
{
	while (free_position >= 0)
	{
		free(array[free_position]);
		free_position--;
	}
	free(array);
	return (NULL);
}

static int	ft_fillwords(char **result, char const *s, char c)
{
	size_t	len;
	int		word_index;

	word_index = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			result[word_index] = malloc(len + 1);
			if (!result[word_index])
				return (ft_free_memory(result, word_index), 1);
			ft_strlcpy(result[word_index], s - len, len + 1);
			word_index++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;

	if (s == NULL)
		return (NULL);

	word_count = ft_countwords(s, c);
	result = malloc((word_count + 1) * sizeof(char *));
	
	if (result == NULL || ft_fillwords(result, s, c))
		return (NULL);

	result[word_count] = NULL;
	return (result);
}

/*Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);*/