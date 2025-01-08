/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:42:33 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/08 18:41:14 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && 'z' >= str[i])  //converte pra maiusculo
		str[i] -= 32;
	write(1, &str[i], 1);  //printa o char atual
	while (str[++i] != '\0')
	{
		if (str[i] >= 'A' && 'Z' >= str[i])  //verifica se é letra, e maiusculo
			str[i] += 32;   //converte pra minusculo
		if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || str[i - 1] == '\t'))  //verifica se é uma primeira letra
			str[i] -= 32;  //converte pra maiusculo
		write(1, &str[i], 1);  //printa o char atual
	}
}

int main(int argc, char **argv)
{
	int j;

	if (argc < 2)  //se n for passado argumentos printa quebra de linha
		write(1, "\n", 1);
	else
	{
		j = 1;
		while (j < argc)  //percorre todos os argumentos
		{
			str_capitalizer(argv[j]);  //chama a func
			write(1, "\n", 1);
			j++;  //avança pro proximo
		}
	}
	return (0);
}

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