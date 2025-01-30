#include <stdio.h>

char	*ft_strrev(char *str)
{
	char	temp;
	int	size;
	int	i;
	int	end;
	
	size = 0;
	while(str[size] != '\0')
		size++;

	end = size - 1;
	i = 0;
	while(i < end)
	{
		temp = str[i];
		str[i] = str[end];
		str[end] = temp;
		i++;
		end--;
	}
	return (str);
}

int	main()
{
	char	string[] = "abc";

	printf("%s\n", ft_strrev(string));
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