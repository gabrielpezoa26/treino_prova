#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;
	int j;

	if (!*s1 || !*s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		j = 0;
		while(s2[j] != '\0')
		{
			if (s2[j] == s1[i])
				return(char *)s1;
			j++;
		}
		i++;
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