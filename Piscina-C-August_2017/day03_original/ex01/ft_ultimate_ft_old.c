#include<unistd.h>
#include<stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
 *********nbr = 42;
}

int		main(void)
{
	int a = 0;
	int *z;
	int **b;
	int ***c;
	int ****d;
	int *****e;
	int ******f;
	int *******g;
	int ********h;
	int *********i;
		
	z = &a;
	b = &z;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;
	ft_ultimate_ft(i);
	write(1, ********i , 1);
	printf("%d", *********i);
}
