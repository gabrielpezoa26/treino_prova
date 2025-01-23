/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 18:29:24 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/23 18:14:57 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(char *s)
{
	int j = 0;

	while(s[j] != '\0')
		j++;
	return (j);
}

char *rev_print(char *str)
{
	int size;

	size = ft_strlen(str) - 1;
	while (str[size] >= 0)  //itera de tras p frente
	{
		write(1, &str[size], 1);
		size--;
	}
	write(1, "\n", 1);
	return (str);
}




/*
	strlen;  itera de tras p frente e printa;  printa quebra de linha
*/
//teste
int main(void)
{
	rev_print("Hello world");
	write (1, "\n", 1);
}

/*Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a string, and displays the string in reverse
followed by a newline.

The original string must not be modified.

You must return the string passed as a parameter.

Your function must be declared as follows:

char *rev_print(char *str);

Examples:

int main(void)
{
  rev_print("Hello world");
  write (1, "\n", 1);
  rev_print("tnirp esreveR");
  write (1, "\n", 1);
  rev_print("");
  write (1, "\n", 1);
}

Output :
$> ./a.out | cat -e
dlrow olleH$
$> ./a.out | cat -e
Reverse print$
$> ./a.out | cat -e
$
*/