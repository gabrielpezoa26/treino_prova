/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:01:12 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/12 15:17:37 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include <unistd.h>

int main(int argc, char **argv)
{
	int start;
	int end;
	int flag;
	int i = 0;

	i = 0;
	if (argc == 2) // valicaçao
	{
		while(argv[1][i] != '\0')  //percorre o argv[1] inteiro, p começar de tras p frente
			i++;
		while(i >= 0)  //começa a iterar, de tras p frente
		{
			while( argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
				i--;  //tira o espaço em branco depois da string
			end = i;  //marca o ultimo char 
			while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')  //percorre a palavra ate o primeiro char
				i--;
			start = i + 1;  //marca o primeiro char da palavra atual
			flag = start;
			while(start <= end)  //printa os bagui
			{
				write (1, &argv[1][start],1);
				start++;		
			}
			if (flag != 0)  //adiciona um espaço se precisar
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);  //n esquecer da quebra de linha
}

/*Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.

If the number of parameters is different from 1, the program will display
'\n'.

In the parameters that are going to be tested, there won't be any "additional"
spaces (meaning that there won't be additionnal spaces at the beginning or at
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>*/