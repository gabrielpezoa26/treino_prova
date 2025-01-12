/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:33:43 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/12 16:27:22 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	index;
	unsigned		potato;

	if (!tab || len == 0)  //tratativa de erro
		return (0);
	potato = tab[0];
	index = 1;
	while (index < len)  //p percorrer todo o array
	{
		if (tab[index] > potato)  //se for maior, faz a troca
			potato = tab[index];
		index++;
	}
	return (potato);
}
//teste
int	main(void)
{
	int beans[] = {12, 2, 35, 42, 58};

	printf("%d\n", max(beans, 5));
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