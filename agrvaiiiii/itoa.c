#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	char *result;
	int len;
	int temp = nbr;

	if(nbr == -2147483648)
		return("-2147483648\0");  // trata erro

	temp = nbr;
	len = 0;
	if (nbr <= 0)  // '-'
		len++;
	while (temp != 0)  //calcula o len 
	{
		temp /= 10;
		len++;
	}

	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL) 
		return NULL;

	result[len] = '\0';

	if (nbr == 0)  //trata "erro"
	{
		result[0] = '0';
		return(result);
	}

	if (nbr < 0) 
	{
		result[0] = '-';
		nbr = -nbr;
	}

	while (nbr != 0) 
	{
		result[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (result);
}

int main()
{
	int number = -123;

	printf("%s\n", ft_itoa(number));
}

/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/