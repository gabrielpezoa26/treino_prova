/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:27:55 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/12/10 17:27:30 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*first_word(char *input)
{
	int		i;
	static char	result[100];

	i = 0;
	while ((input[i] != '\0') && (input[i] != ' ' && input[i] != '\t'))
	{
		result[i] = input[i];
		i++;
	}
	return (result);
}

int	main(void)
{
	char	mango_loko[] = "aadasdsaa bbb ccc"; //trocar p argc argv

	printf("%s", first_word(mango_loko));
	return (0);
}
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