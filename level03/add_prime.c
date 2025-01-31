#include <unistd.h>
#include <stdio.h>

static int	ft_atoi(const char *str)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number);
}
static void ft_putnbr(int n)
{
	char number;

	if (n >= 10)
		ft_putnbr(n / 10);
	number = (n % 10) + '0';
	write(1, &number, 1);
}


static int	is_prime(int num)
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
	int number;
	int sum;

	number = 0;
	if (argc == 2)
	{
		number = ft_atoi(argv[1]);
		sum = 0;
		while (number > 0)
		{
			if (is_prime(number) != 0)
				sum = sum + number;
			number--;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
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