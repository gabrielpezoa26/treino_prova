/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:33:08 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/16 15:08:57 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;  //percorreo  argv[1]
	int j;  //percorre o argv[2]

	i = 0;
	j = 0;
	if (argc == 3)  //valicacao do argc
	{
		while (argv[2][j] && argv[1][i])  //enquanto n for nulo
		{
			if (argv[2][j] == argv[1][i])
				i++;               //se o char for igual, avança pro proximo dentro do argv[1]
			j++;                   //se n for igual passa pro proximo char do argv[2]
		}
		if (argv[1][i] == '\0')
			write(1, "1", 1);
		else if (argv[1][i] != '\0')
			write(1, "0", 1);
	}
	write(1, "\n", 1);  //printa a quebra de linha
	return (0);
}

/*
	dois iteradores; argc == 3; itera pelos dois argv; se o char for igual i++, se nao j++ ;
	qdo chegar no final de argv[1] printa 1; 
*/
/*Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>*/