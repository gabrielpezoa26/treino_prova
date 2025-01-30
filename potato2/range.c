#include <stdlib.h>
#include <stdio.h>

static int	*ft_range(int start, int end)
{
	int	i;
	int	*dest;

	dest = (int *)malloc((end - start) * sizeof(int));
	if (dest == NULL || start >= end)
		return (NULL);
	i = 0;
	if (start < end)
	{
		while((start + i) <= end)
		{
			dest[i] = start + i;
			i++;
		}
	}
	return (dest);
}

int	main()
{
	int	j;
	int	end;
	int	start;
	int	*kartoffel;

	start = -1;
	end = 20;
	j = 0;
	if (start == end)
		return (1);
	kartoffel = ft_range(start, end);
	while (j != (end - start + 1))
	{
		printf("%d\n", kartoffel[j]);
		j++;
	}
	free(kartoffel);
	return (0);
}

/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/