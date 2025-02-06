#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int main()
{
	char *manga = "aadsadsadsadsas";
	char *uva = "azdsadsjhgjfgdsadsada";

	printf("%d\n", ft_strcmp(manga, uva));
	printf("%d\n", strcmp(manga, uva));
}

/*
Subject
Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);

*/