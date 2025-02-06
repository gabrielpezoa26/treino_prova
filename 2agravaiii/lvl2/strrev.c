#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i = 0;
	int end;
	int len;
	char temp;
	
	len = 0;
	while(str[len] != '\0')
		len++;

	end = len - 1;
	i = 0;
	while (i < end)
	{
		temp = str[i];
		str[i] = str[end];
		str[end] = temp;
		i++;
		end--;
	}
	return (str);
}


int main()
{
	char potato[] = "abc";

	printf("%s\n", ft_strrev(potato));
}
/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);

*/