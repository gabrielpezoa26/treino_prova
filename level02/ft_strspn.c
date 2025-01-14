/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:48:10 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/01/14 16:51:23 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  //NULL e size_t
#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (i);
			else if (s[i] != accept[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int main()
{
	int	beans;
	int	potato;

	beans = strspn("geeks for geeks","geeks");
	potato = ft_strspn("geeks for geeks","geeks");
	printf ("minha func: %d\n", beans);
	printf("func original: %d\n", potato);
	return(0); 
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