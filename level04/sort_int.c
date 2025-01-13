/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:49:41 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/13 17:27:34 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))  // ' - 1' por causa do nulo
	{
		if (tab[i] > tab[i + 1])  //se o numero atual for maior, tem q trocar
		{
			temp = tab[i];
			tab[i] = tab[i+ 1];
			tab[i + 1] = temp;  //faz a troca
			i = 0;  //reseta o i = 0
		}
		else  //se n precisar de trocar, avança pro proximo
			i++;
	}
}

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