#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int j = 0;
	while(str[j] != '\0')
		j++;
	return (j);
}

char	*ft_strdup(char *src)
{
	char *dest;
	int size;
	int i = 0;

	if (!*src)
		return (NULL);
	dest = malloc(ft_strlen(src) + 1 * sizeof(char));
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 'x';
	printf("%c\n", dest[0]);
	printf("%c\n", dest[1]);
	printf("%c\n", dest[2]);
	printf("%c\n", dest[3]);
	printf("%c\n", dest[4]);
	printf("%c\n", dest[5]);
	printf("%c\n", dest[6]);
	printf("%c\n", dest[7]);
	return (dest);
}

int main()
{
	char *potato = "batata";

	ft_strdup(potato);
	return (0);
}
/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);*/