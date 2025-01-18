/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:54:57 by gabriel           #+#    #+#             */
/*   Updated: 2025/01/18 12:52:04 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)  //atoi simplificado
{
	int n;

	n = 0;
	while (*str != '\0')  //percorre str todo
	{
		n = n * 10;
		n = n + *str - '0';
		++str;
	}
	return (n);
}

void	ft_printhex(int n)
{
	char *hex_digits = "0123456789abcdef";

	if (n >= 16)
		ft_printhex(n / 16);
	write(1, &hex_digits[n % 16], 1);
}


void	ft_puthex(int *n)
{
	char	*beans = "abcdef0123456789";

	if (n >= 16)
		ft_puthex /= 16;
	write(1, &beans[n] % 16, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_printhex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}

/*
	atoi simplificado;

	na func -> declara o array de dígitos;  converte pra hexa;  

	na main -> valida o argc;  chama a printhex;  printa o \n
*/




/*Assignment name  : print_hex
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
$*/

