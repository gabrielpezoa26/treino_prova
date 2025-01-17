/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 20:12:28 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/17 11:05:29 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int len;
	int start;
	int end;
	char temp;

	len = 0;
	while (str[len] != '\0')  // conta o tamanho
	{
		len++;
	}
	end = len - 1;  //tira o terminador nulo
	start = 0;
	while (start < end)  //vai de tras pra frente
	{
		temp = str[start];  //       guarda no temp
		str[start] = str[end];  //   substitui oq ta no 'start' pelo q ta no 'end'
		str[end] = temp;  //        poe o temp no 'end'
		start++;  //               avança o start pra direita
		end--;  //               avança o end pra esquerda
	}
	return (str);  //retorno dos campeoes
}

/*
	4 variaveis ; conta o tamanho e guarda; tira o nulo;  while (start < end);
	faz as trocas (5 linhas);  retorna str
*/
//teste
int	main()
{
	char kopf[] = "abcdefghijkl";
	printf("%s", ft_strrev(kopf));
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