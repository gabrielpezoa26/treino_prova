/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:42:33 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/23 18:15:08 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if ((i == 0 || argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t') && (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
				argv[1][i] -= 32;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z' && argv[1][i - 1] != ' ' && argv[1][i - 1] != '\t')
				argv[1][i] += 32;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// int main(int argc, char **argv)
// {
// 	int j;

// 	if (argc < 2)  //se n for passado args printa quebra de linha
// 		write(1, "\n", 1);
// 	else
// 	{
// 		j = 1;
// 		while (j < argc)  //percorre todos os argumentos
// 		{
// 			str_capitalizer(argv[j]);  //chama a func
// 			write(1, "\n", 1);
// 			j++;  //avança pro proximo
// 		}
// 	}
// 	return (0);
// }

/*
	na func -> converte pra maiusculo; printa o char atual; compara 'i' ja incrementado com '\0';

	na main -> validacao argc;  inicializa 'i' e chama a func;  poe o \n;  itera;
	retorna 0;
*/




/*Assignment name  : str_capitalizer
Expected files   : str_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>*/