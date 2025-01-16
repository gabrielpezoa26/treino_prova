/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:06:11 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/16 14:41:46 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
	int		i;
	char	*result;

	result = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));  //aloca a memoria necessaria
	if (result == NULL || src == NULL)  //tratativa de erro
		return (NULL);
	i = 0;
	while (src[i] != '\0')  //itera e duplica a string de fato
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';  //adiciona o terminador no final da string
	return (result);
}
/*
	strlen, mallocar "result = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));", 
	tratar NULL, percorrer src  e copiar; adicionar o nulo no final result[i]
*/
//result = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
//teste
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