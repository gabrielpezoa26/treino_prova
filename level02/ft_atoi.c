/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:22:39 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/23 22:38:32 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int signal;
	int	number;

	i = 0;
	number = 0;
	signal = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		signal = (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * signal);
}

/*
	tres variaveis, percorrer os espaços, ver o sinal, verificar se é digito, converter;
	retornar numero * sinal;
*/
//teste
int main(void)
{
	const char *example = "  -863";

	printf("%d\n", ft_atoi(example));
}
/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*///int	ft_atoi(const char *str)
// {
// 	int	i;
// 	int	number;
// 	int	signal;

// 	i = 0;
// 	number = 0;
// 	signal = 1;
// 	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)  //percorre os tabs espaços etc
// 		i++;
// 	if (str[i] == '-')
// 	{
// 		signal = (-1);  //transforma em negativo se for '-'
// 		i++;
// 	}
// 	else if (str[i] == '+')
// 		i++;
// 	while (str[i] >= '0' && str[i] <= '9')  //verifica se é um digito unico
// 	{
// 		number = number * 10 + (str[i] - '0');  //transforma de fato
// 		i++;  //passa pro proximo
// 	}
// 	return (number * signal);  //retorno dos campeoes
// }