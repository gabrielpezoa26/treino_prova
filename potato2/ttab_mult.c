#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nbr)
{
	char number;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	number = (nbr % 10) + '0';
	write(1, &number, 1);
}
int ft_simple_atoi(char *str)
{
	int	number;
	int	i;

	number = 0;
	i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number);
}
int	main(int argc, char **argv)
{
	int	i;
	int number;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		number = ft_simple_atoi(argv[1]);
		while(i <= 9)
		{
			ft_putnbr(number);
			write(1, " x ", 3);
			ft_putnbr(i);
			write(1, " = ", 3);
			ft_putnbr((number * i));
			write(1, "\n", 1);
			i++;
		}
	}
}

/*
Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>
*/