/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:56:39 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/17 22:10:14 by gabriel          ###   ########.fr       */
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
	while (str[i] != '\0')  //percorre ate o final
	{
		if (str[i] > 32)  //pula espaços tabs etc p percorrer as palavras
		{
			k = 0;  //zera o 'k' pra começar a processar outra palavra
			result[j] = malloc(WD_LEN);  //aloca memoria pra palavra no [j]
			while (str[i] > 32)
			{
				result[j][k] = str[i];  //copia o char de str[i] pro array
				j++;
				i++;
			}
		result[j][k] = '\0';  //adiciona o terminador
		j++;
		}
		else
			i++;  //só itera
	}
	result[j] = NULL;  //tipo um \0 pra array
	return (result);
}

/*
	
*/
//teste
int	main(void)
{
	char *beans;
	beans = "hello aaa bbb";
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