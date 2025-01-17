/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:41:29 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/17 11:28:11 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')  //percorre tda a string
	{
		if (str[i] >= 'A' && str[i] <= 'Z')  //converte pra maiusculo
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' 
			|| str[i + 1] == '\t' || str[i + 1] == '\0'))  //[i + 1] pra pegar a ultima letra
			str[i] -= 32;  
		write(1, &str[i++], 1);  //printa E incrementa 'i'
	}
}

int	main(int argc, char **argv)
{
	int i;

	if (argc == 1)  //se n tiver args
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)  //p percorrer todos os args
		{
			rstr_capitalizer(argv[i]);  //chama a func
			write(1, "\n", 1);  //quebra de linha
			i++;
		}
	}
	return (0);
}

/*
	na func -> percorre toda a string, converte pra maiusculo se precisar
	 converte pra minusculo o resto;  printa o char atual e itera

	na main -> validacao argc;  inicializa 'i' e chama a func;  poe o \n;  itera;
	retorna 0;
*/




/*Assignment name  : rstr_capitalizer
Expected files   : rstr_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or more strings and, for each argument, puts
the last character that is a letter of each word in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.

A letter is a character in the set [a-zA-Z]

If there are no parameters, display \n.

Examples:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$>*/