/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:39:03 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/14 13:21:39 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	repeat_count;

	if (argc == 2)  //validaçao do argc
	{
		i = 0;
		while (argv[1][i] != '\0')  //percorre ate o final
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')  //validaçao letra 
			{
				repeat_count = argv[1][i] - 'a' + 1;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')  //validaçao letra 
			{
				repeat_count = argv[1][i] - 'A' + 1;
			}
			else
				repeat_count = 1;
			while (repeat_count > 0)
			{
				write(1, &argv[1][i], 1);
				repeat_count--;
			}
			i++;
		}
	}
	write(1, "\n", 1);  //n esquecer
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