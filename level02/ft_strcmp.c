/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:52:06 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/25 17:34:37 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}

/*
	percorrer as duas || ;
	hora q der diferença ja retorna a propria diferença ;
	se nao, retorna 0
*/
//teste
int	main(void)
{
	char *potato = "aaa";
	char *mango_loko = "aza";

	printf("%d\n", ft_strcmp(potato, mango_loko));
	printf("%d\n", strcmp(potato, mango_loko));
}

/*
Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);

SYNOPSIS
       #include <string.h>

       char *strpbrk(const char *s, const char *accept);

DESCRIPTION
       The  strpbrk() function locates the first occurrence in the string s of
       any of the bytes in the string accept.

RETURN VALUE
       The strpbrk() function returns a pointer to the byte in s that  matches
       one of the bytes in accept, or NULL if no such byte is found.

*/