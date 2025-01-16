/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:34:01 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/16 15:20:47 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)  //verificação do argc
	{
		while(argv[1][i] != '\0')  //percorre a string ate o final
		{
			if (argv[1][i] == '_')  //se o char atual for '_', converte o char seguinte pra uppercase
			{
				i++;
				argv[1][i] = argv[1][i] - 32;
			}
			write (1, &argv[1][i], 1);  //printa o char, convertido ou não
			i++;
		}
	}
	write(1, "\n", 1);  //poe a nova linha independente do 'argc'
	return (0);
}

/*
	validar o argc == 2; itera argv[1] inteiro; if == underline itera 1 e converte pra maiusculo; 
	printa char atual; itera no while tb; printa quebra de linha
*/
/*Assignment name  : snake_to_camel
Expected files   : snake_to_camel.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in snake_case format
and converts it into a string in lowerCamelCase format.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

Examples:
$>./camel_to_snake "here_is_a_snake_case_word"
hereIsASnakeCaseWord
$>./camel_to_snake "hello_world" | cat -e
helloWorld$
$>./camel_to_snake | cat -e\
$*/