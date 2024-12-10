/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:39:03 by gabriel           #+#    #+#             */
/*   Updated: 2024/12/10 16:36:48 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int		i;
	int		j;
	int		alpha_index;
	char	*lwr_alphabet;
	char	*upp_alphabet;

	char	*string = "abcd"; //trocar p argc argv

	lwr_alphabet = "abcdefghijklmnopqrstuvwxyz";
	upp_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	alpha_index = 
	i = 0;
	j = 0;
	while(string[i] != '\0')
	{
		if (string[j] >= 'a' && string[j] <= 'z')
		{
			write (1, &string[i], 1);
			j++;
		}
		else if (string[j] >= 'A' && string[j] <= 'Z')
		{
			write (1, &string[i], 1);
			j++;
		}
		i++;
	}
	return (0);
}


/*Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>*/