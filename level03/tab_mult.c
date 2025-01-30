#include <unistd.h>

static void	ft_putnbr(int n)
{
	char number;

	if (n >= 10)
		ft_putnbr(n / 10);
	number = (n % 10) + '0';
	write(1, &number, 1);
}

static int	ft_simple_atoi(char *str)
{
	int	result;
	int i = 0;

	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int	number;
	int i;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		number = ft_simple_atoi(argv[1]);
		i = 1;
		while(i <= 9)
		{
			ft_putnbr(number);
			write (1, " x ", 3);
			ft_putnbr(i);
			write(1, " = ", 3);
			ft_putnbr((number * i));
			write(1, "\n", 1);
			i++;
		}
		write(1, "\n", 1);
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


/*
int	main(int argc, char **argv)
{
	int	i;
	int	nbr;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;  
		nbr = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);  //1º numero 
			write(1, " x ", 3);
			ft_putnbr(nbr);  //numero do parametro
			write(1, " = ", 3);
			ft_putnbr(i * nbr);  //resultado
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
*/