#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	number = 0;
	int signal = 1;
	int i = 0;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		signal = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * signal);
}

int main()
{
	char *potato = "1234568";

	printf("%d\n", ft_atoi(potato));
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