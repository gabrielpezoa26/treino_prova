/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 18:29:24 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/12 16:08:20 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	int j;

	j = 0;
	while(s[j] != '\0')
	{
		j++;
	}
	return (j);
}

char *rev_print(char *str)
{
	int size;

	size = ft_strlen(str) - 1;  // '-1' pra remover o '\0', se nao da merda
	while (str[size] >= 0)  //itera do avesso 
	{
		write(1, &str[size], 1);  //printa na posicao
		size--;  //itera do avesso
	}
	write(1, "\n", 1);
	return (str);
}

//teste
int main(void)
{
	rev_print("Hello world");
	write (1, "\n", 1);
	// rev_print("tnirp esreveR");
	// write (1, "\n", 1);
	// rev_print("");
	// write (1, "\n", 1);
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