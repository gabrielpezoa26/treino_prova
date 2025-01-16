/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:11:47 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/16 16:42:36 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int flag;  //determina se precisa do espaço ou não

	if (argc == 2)  //verificação do argc
	{
		i = 0;
		flag = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')  //só percorre espaço/tabss antes do argv[1]
			i++;
		while (argv[1][i] != '\0')  //percorre argv[1] inteiro
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')  //marca se precisa de espaço ou nao
				flag = 1;
			if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))  //se o char n for espaço é pq chegou na "frase"
			{
				if (flag != 0)  //poe os 3 espaços se necessário
					write(1, "   ", 1);
				flag = 0;    //reseta a flag
				write(1, &argv[1][i], 1);  //printa o char atual
			}
			i++;
		}
	}
	write(1, '\n', 1);  //n esquecer da quebra de linha
}

/*
	um index e uma flag; anda pelos tab e espaço; itera pelo argv[1];
	dentro do while marca se tem espaço ou tab c a flag; dps bota o espaço onde precisa;
	quebra de linha
*/




/*Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./expand_str "" | cat -e
$
$>*/