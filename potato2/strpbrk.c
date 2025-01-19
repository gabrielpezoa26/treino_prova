/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strpbrk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:23:07 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/19 16:25:08 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *s1, const char *s2)
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
}
/*
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);
*/