/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:27:55 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/01/17 10:58:11 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)  //validaçao do argc
	{
		while (argv[1][i] == 32 || argv[1][i] == 9)  //só anda pelos espaços e tab
			i++;
		while (argv[1][i] && (argv[1][i] != 32 && argv[1][i] != 9))  //enqt argv for diferente de \0, espaços e tabs
		{
			write(1, &argv[1][i], 1);  //escreve o char atual
			i++;
		}
	}
	write(1, "\n", 1);
}

/*
	validacao argc;  percorre os tab e espaço (32, 9);
	printa e itera enquanto for diferente de nulo, 32, 9;
	printa quebra de linha;
*/
/*Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$*/