#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	signal = 1;
	int	number;

	number = 0;
	while(*str == ' ' || *str == '\t' || *str == '+')
		str++;
	if (*str == '-')
	{
		signal = (-1);
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		number = (number * 10) + (*str - '0');
		str++;
	}
	return (number * signal);
}

int	main()
{
	char	*string = "-123";

	printf("%d\n", ft_atoi(string));
	printf("func orig: %d\n", atoi(string));
}

/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/