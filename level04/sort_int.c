/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:49:41 by gabriel           #+#    #+#             */
/*   Updated: 2025/02/07 13:31:20 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else 
			i++;
	}	
		printf("%d\n", tab[0]);
		printf("%d\n", tab[1]);
		printf("%d\n", tab[2]);
		printf("%d\n", tab[3]);
		printf("%d\n", tab[4]);
}

int main()
{
	int array[] = {1, 25, 4, 7, 3};

	sort_int_tab(array, 5);
}
///
/*
	uma var temp e um iterador(unsigned);  compara 'i' com size - 1 (nulo);
	verifica se tem q trocar ou não; 
*/
/*Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.
*/