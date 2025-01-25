/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strpbrk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:06:34 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/25 17:53:38 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i;

	if (!s1 || !s2)
		return (0);
	while(*s1 != NULL)
	{
		i = 0;
		while(s2[i] != '\0')
		{
			if(*s1 == s2[i])
				return (char *)s1;
			i++;
		}
		s1++;
	}
	return (NULL);
}

/*
	tratativa de erro; itera s1 inteiro; inicializa o index e itera s2;
	se os char sao iguais retorna (char *)s1; itera i++ no while de dentro e s1++ no while d fora
*/

/*Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);*/