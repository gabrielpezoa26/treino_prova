/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 20:12:28 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/29 18:45:22 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int len;
	char temp;
	int i;
	int end;

	len = 0;
	while (str[len] != '\0')
		len++;
	
	end = len - 1;
	i = 0;
	while (i < end)
	{
		temp = str[i];
		str[i] = str[end];
		str[end] = temp;
		i++;
		end--;
	}
	return (str);  //retorno dos campeoes
}

/*
	4 variaveis ; conta o tamanho e guarda; tira o nulo;  while (i < end);
	faz as trocas (5 linhas);  retorna str
*/
//teste
int	main()
{
	char kopf[] = "1234567890";
	printf("%s\n", ft_strrev(kopf));
}
/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/