#include <unistd.h>

static int ft_simple_atoi(char *str)
{
	int	number;

	number = 0;
	while(*str != '\0')
	{
		number = (number * 10) + (*str - '0');
		str++;
	}
	return (number);
}

static void ft_print_hex(int nbr)
{
	char *hex = "0123456789abcdef";

	if (nbr >= 16)
		ft_print_hex(nbr / 16);
	write(1, &hex[nbr % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_hex(ft_simple_atoi(argv[1]));
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