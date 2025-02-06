#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int i;
	int max_value;
	
	if (!*tab || len == 0)
		return (1);
	max_value = tab[0];
	i = 1;
	while (i < len)
	{
		if (tab[i] > max_value)
			max_value = tab[i];
		i++;
	}
	return (max_value);
}

int main()
{
	int array[] = {1, 40, 9, 5};

	printf("%d\n", max(array, 4)); 
}
/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/