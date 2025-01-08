/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:51:21 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/08 16:31:57 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int mango_loko;  //tipo um 'id' p ver se precisa do espaço
	
	if (argc == 2)
	{
		i = 0;
		mango_loko = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')  //so anda pelos tab e espaço
			i++;
		while (argv[1][i] != '\0')  //itera pelo 
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				mango_loko = 1;
			if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))  // se o char atual n for espaço (chegou na frase)
			{
				if (mango_loko != 0)  //se precisar do espaço, printa espaço
					write(1, " ", 1);
				mango_loko = 0;       // reseta o 'id'
				write(1, &argv[1][i], 1);  //printa o char atual
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

/*Assignment name  : epur_str
Expected files   : epur_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.

Example:

$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>*/