/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 18:29:24 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/05 18:37:12 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
//			write(1, &argv[1][i], 1);
char *rev_print(char *str)
{
	int size;
	int k;
	size = ft_strlen(str);
	while (size > 0)
	{
		write(1, &k, 1);
		size--;
	}
	return (str);
}

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