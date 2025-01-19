/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:33:43 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/19 16:34:19 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_max(int *tab, unsigned int len)
{
	unsigned int	index;
	unsigned		max_value;

	if (!tab || len == 0)  //tratativa de erro
		return (0);
	max_value = tab[0];
	index = 1;
	while (index < len)  //p percorrer todo o array
	{
		if (tab[index] > max_value)  //se for maior, faz a troca
			max_value = tab[index];
		index++;
	}
	return (max_value);
}

/*
	var index e max_value;  tratativa de erro; max começa na pos.0 e index no 1;
	enquanto index for maior que len, verifica se atual > max, se sim, max vira o numero;
	itera ate o final e retorna
*/

//teste
int	main(void)
{
	int beans[] = {12, 2, 335, 42, 58};

	printf("%d\n", ft_max(beans, 5));
}
/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

/*int max(int *tab, unsigned int len)
{
	int result;
	unsigned int i = 0;
	
	if (len == 0)
		return (0);
	result = tab[i];
	while(i < len)
	{
		if (result <  tab[i])
			result = tab[i];
		i++;
	}
	return result;
}*/