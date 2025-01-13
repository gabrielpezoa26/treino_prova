/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strpbrk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:06:34 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/12 16:27:46 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i;

	if (!s1 || !s2)  //tratativa de erro
	{
		return (0);
	}
	while(*s1 != NULL)  //enqt n apontar pra null
	{
		i = 0;
		while(s2[i] != '\0')  //percorre a s2 inteira
		{
			if(*s1 == s2[i])  //se for igual retorna o ponteiro
				return (char *) s1;
			i++;                //itera pelo s2
		}
		s1++;       //itera pelo s1 dps q todos os char de s2 foram comparados c o atual de s1
	}
	return (NULL);
}

/*Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);*/