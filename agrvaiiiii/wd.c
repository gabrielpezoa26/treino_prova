#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int j;
	int k;
	char *temp;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while(argv[1][i] != '\0' && argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				temp[k] = argv[1][i];
				i++;
				k++;
				if ((temp = argv[1]))
				{
					k = 0;
					while (temp)
					{
						write(1, &temp[k], 1);
						k++;
					}
				}
			}
			j++;
		}
	}
	write(1, "\n", 1);
}

/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/