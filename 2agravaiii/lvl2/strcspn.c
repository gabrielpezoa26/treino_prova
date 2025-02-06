#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;

	while(s[1] != '\0')
	{
		j = 0;
		while(reject[j] != '\0')
		{
			if (s1[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}

}

/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------
 The  strcspn()  function calculates the length of the initial
       segment of s which consists entirely of bytes not in reject.

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
*/