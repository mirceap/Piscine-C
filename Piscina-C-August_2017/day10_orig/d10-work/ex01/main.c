#include "header.h"

int		main(int argc, char **argv)
{
	int *tab;
	int len;

	if (argc == 3)
	{
		tab = ft_range(atoi(argv[1]), atoi(argv[2]));
		len = atoi(argv[2]) - atoi(argv[1]);
		ft_foreach(tab, len, &ft_putnbr);
	}
	// else
	// 	printf("please enter 2 params for range");
}