#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int number;

	i = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number);
}

void ft_putnbr(int nbr)
{
	char number;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	number = nbr % 10 + '0';
	write(1, &number, 1);
}

int is_prime(int num)
{
	int	i;

	if (num <= 1)
		return (0);
	i = 2;
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int	sum;
	int number;

	if (argc == 2)
	{
		number = ft_atoi(argv[1]);

		sum = 0;
		while(number > 0)
		{
			if (is_prime(number))
				sum += number;
			number--;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
}


/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/