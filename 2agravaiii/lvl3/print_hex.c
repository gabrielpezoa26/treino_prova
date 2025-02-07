#include <unistd.h>
#include <stdio.h>

void	ft_puthex(int	n)
{
	char	*array = "0123456789abcdef";

	if (n >= 16)
		ft_puthex(n / 16);
	write(1, &array[n % 16], 1);
}

int	ft_atoi(char *str)
{
	int	number;
	int signal;
	int i;

	i = 0;
	signal = 1;
	number = 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		signal = (-1);
		i++;
	}
	while(str[i] >= '0' && str[i]<= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * signal);
}

int	main(int argc, char **argv)
{
	int i;
	int input;

	if (argc == 2)
	{
		input = ft_atoi(argv[1]);
		if (input >= 0)
		{
			ft_puthex(input);
		}
	}
	write(1, "\n", 1);
}

/*
Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
*/