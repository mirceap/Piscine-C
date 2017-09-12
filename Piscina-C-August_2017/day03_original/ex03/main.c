#include<stdio.h>
#include"ft_div_mod.c"

int		main(void)
{
	int n1;
	int n2;
	int divide;
	int mode;
	char a[10];
	
	n1 = 14;
	n2 = 5;
	ft_div_mod(n1, n2, &divide, &mode);
	printf("%i / %i =  %d rest %d",n1, n2, divide  , mode);

	return(0);
}
