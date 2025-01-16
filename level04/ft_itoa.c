/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:51:17 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/16 16:58:19 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int convert_to_str(int nbr)
{
	int i;

	if (nbr == 0)
		return (1);
	i = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int get_absolute(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}
char *ft_itoa(int nbr)
{
	char *cnum;
	int len;
	int i;

	len = convert_to_str(nbr);
	i = 0;
	if (nbr < 0)
		i++;
	len = len + i;
	cnum = (char *)malloc((len + 1) * sizeof(char));
	if (!cnum)
		return (NULL);
	cnum[0] = '-';
	cnum[len] = '\0';
	while ((len - 1) >= i)
	{
		cnum[len - 1] = get_absolute(nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (cnum);
}

/*
	
*/


/*Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);*/