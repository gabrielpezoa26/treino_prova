#include <stdlib.h>
#include <stdio.h>

static int	ft_atoi(const char *str)
{
	int	number;
	int	signal;

	number = 0;
	signal = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32 || *str == '+')
		str++;
	if (*str == '-')
	{
		signal = (-1);
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * signal);
}

int	main()
{
	char	*string = "--123";

	printf("%d\n", ft_atoi(string));
	printf("func orija: %d\n", atoi(string));


}