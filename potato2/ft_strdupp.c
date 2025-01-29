#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *string)
{
	int	i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}
char	*ft_strdup(char *src)
{
	int	i;
	char	*result;

	i = 0;
	result = malloc(ft_strlen(src) + 1 * sizeof(char));
	if (!result || !src) 
		return (NULL);
	while(src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);

}

int	main()
{
	char	*string = "abcde";

	printf("%s\n", ft_strdup(string));
}
/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/