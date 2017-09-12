#include<stdio.h>
#include"ft_ultimate_div_mod.c"


int		main(void)
{
	int n1;
	int n2;
	int *ptr;
	ptr = &n1;
	*ptr = 14;
	n2 = 5;
	ft_ultimate_div_mod(&n1, &n2);
	printf("%i %i", n1, n2);
	return(0);
}
