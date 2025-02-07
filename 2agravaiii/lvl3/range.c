#include <stdlib.h>
#include <stdio.h>


// #include <stdlib.h>

// int *ft_range(int start, int end)
// {
// 	int i = 0;
// 	int len = abs((end - start)) + 1;
// 	int *result = (int *)malloc(sizeof(int) * len);
	
// 	while (i < len)
// 	{
// 		if (start < end)  // "normal"
// 		{
// 			result[i] = start;
// 			start++;
// 			i++;
// 		}
// 		else
// 		{
// 			result[i] = start;
// 			start--;
// 			i++;
// 		}
// 	}
// 	printf("%d\n", result[0]);
// 	printf("%d\n", result[1]);
// 	printf("%d\n", result[2]);
// 	printf("%d\n", result[3]);
// 	printf("%d\n", result[4]);
// 	printf("%d\n", result[5]);
// 	printf("%d\n", result[6]);
// 	printf("%d\n", result[7]);
// 	printf("%d\n", result[8]);
// 	printf("%d\n", result[9]);
// 	printf("%d\n", result[10]);

// 	return (result);
// }
// -1  0  1  2  3  


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

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/
int	*ft_range(int start, int end)
{
	int	*result;
	int	size;
	int i;

	i = 0;
	if (start < end)
		size = end - start + 1;
	else
		size = start - end + 1;
	printf("size: %d\n", size);
	result = (int *)malloc(sizeof(int) * size);
	if (!result)
		return (NULL);
	while(i < size)
	{
		result[i] = start;
		i++;
		start++;
	}
	printf("%d\n", result[0]);
	printf("%d\n", result[1]);
	printf("%d\n", result[2]);
	printf("%d\n", result[3]);
	printf("%d\n", result[4]);
	printf("%d\n", result[5]);
	printf("%d\n", result[6]);
	printf("%d\n", result[7]);
	return (result);
}

int	main()
{
	int	potato = 3;
	int beans = -2;

	ft_range(potato, beans);
}