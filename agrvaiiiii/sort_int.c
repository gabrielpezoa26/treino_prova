#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int	i;
	int temp;

	if (!tab || size == 0)
		return ;
	i = 0;
	temp = 0;
	printf("antes ->%d\n", tab[0]);
	printf("antes ->%d\n", tab[1]);
	printf("antes ->%d\n", tab[2]);
	printf("antes ->%d\n", tab[3]);
	printf("antes ->%d\n", tab[4]);
	printf("antes ->%d\n", tab[5]);
	printf("antes ->%d\n", tab[6]);
	printf("antes ->%d\n", tab[7]);
	printf("antes ->%d\n", tab[8]);
	while(i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	printf("%d\n", tab[3]);
	printf("%d\n", tab[4]);
	printf("%d\n", tab[5]);
	printf("%d\n", tab[6]);
	printf("%d\n", tab[7]);
	printf("%d\n", tab[8]);
}

int main(void)
{
	int array[] = {1, 4, 2, 3, 53, 34, 765, 3};

	sort_int_tab(array, 8);
}

/*
Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.
*/