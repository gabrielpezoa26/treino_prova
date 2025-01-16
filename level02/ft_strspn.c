/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:48:10 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/01/16 15:42:55 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  //NULL e size_t
#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	count;  //conta o tamanho

	i = 0;
	count = 0;
	while (*s) //itera por tds os itens de 's'
	{
		while (accept[i] != '\0' && *s != accept[i])
		{
			i++;
		}
		if (accept[i] == '\0')  //pq chegou no final
			return (count);
		i = 0;
		count++;
		s++;  //avança pro proximo char de 's'
	}
	return (count);
}

/*
	var index e count;  dois whiles;  itera por 's' inteiro'; compara cada char;
	'accept';  reseta o i = 0 dnv; 
*/

//teste
int main()
{
	char	*array = "aaaaaaaaaaaabbb";

	printf("func original: %zu\n", strspn(array, "bbb"));
	printf("minha func: %zu\n", ft_strspn(array, "bbb"));
}
/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);
*/


/*size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;
	size_t count;

	count = 0;
	i = 0;
	while (*s)
	{
		while (accept[i] && *s != accept[i])
		{
			i++;
		}
		if (accept[i] == '\0')
			return (count);
		i = 0;
		count++;
		s++;
	}
	return (count);
}*/