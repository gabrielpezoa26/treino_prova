/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:56:39 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/23 18:41:15 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#define WD_LEN 1000

char	**ft_split(char *str)
{
	char **result;
	int i;  //percorre a string str
	int j;  //guarda a posiçao no char **array
	int k;  //guarda a posicao de cada palavra

	i = 0;
	j = 0;
	result = malloc(WD_LEN);
	while (str[i] != '\0')
	{
		if (str[i] > 32)
		{
			k = 0;
			result[j] = malloc(WD_LEN);
			while (str[i] > 32)
			{
				result[j][k] = str[i];
				j++;
				i++;
			}
		result[j][k] = '\0';
		j++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

//teste
int	main(void)
{
	char *beans;
	beans = "hello  aaa  bbb";
	char **kartoffel;
	
	kartoffel = ft_split(beans);
	printf("%s\n", kartoffel[0]);
	printf("%s\n", kartoffel[1]);
	printf("%s\n", kartoffel[2]);
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