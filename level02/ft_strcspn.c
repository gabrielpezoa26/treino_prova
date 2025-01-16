/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:37:56 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/01/16 15:43:45 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;  //itera pelo 's'
	size_t	j;  //itera pelo 'reject'

	i = 0;
	if (s == NULL || reject == NULL)  //tratativa de erro
		return (0);
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')  //percorre 'reject' ate o nulo
		{
			if (s[i] == reject[j])  // compara o char atual de 's' com todos de 'reject'
				return (i);
			j++;
		}
		i++;  //avança pro próx char de 's' se n der "match"
	}
	return (i);
}

/*
	dois iteradores;  dois whiles;  tratativa de erro;  itera por s;  percorre 'reject';
	compara o char atual c todos de reject, dps avança o char;
*/

int main(void)
{ 
	int len;
	int	potato;

	len = strcspn("geeks for geeks","geeks");
	potato = ft_strcspn("geeks for geeks","geeks");
	printf("func original: %d\n", len);
	printf(" minha func: %d\n", potato);
	return(0); 
} 
/*Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
DESCRIPTION
		The strcspn() function calculates the length of the initial segment  of
		which consists entirely of bytes not in reject.

RETURN VALUE
		The strcspn() function returns the number of bytes in the initial  seg‐
		ment of s which are not in the string reject.


*/