/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:27:55 by gcesar-n          #+#    #+#             */
/*   Updated: 2024/12/05 11:37:52 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*first_word(char *input)
{
	int	index;
	char	*result;

	index = 0;
	if (input[index] >= 0 && input[index] <= 32)
	{
		write(1, "\n", 2);
	}	
	while (input[index] != '\0' || result[index] == '\0')
	{
		result[index] = input[index];
		index++;
		if (input[index] == 32 || input[index] == 9)
			return (result);
	}
	return (result);
}

int	main(void)
{
	char	mango_loko[] = "aaa bbb";

	printf("%s", first_word(mango_loko));
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
