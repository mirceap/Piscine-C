#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));
int 	plus_42(int i);
int		main(void)
{
	int ret[3];
	int *ret2;
	ret[0] = 100;
	ret[1] = 200;
	ret[2] = 300;

	ret2 = ft_map(ret, 3, &plus_42);
	int i;
	i = 0;
	while(i < 3)
	{
		printf("%d \n", ret[i]);
		i++;
	}

	printf("\n");

	i = 0;
	while(i < 3)
	{
		printf("%d \n", ret2[i]);
		i++;
	}
	return (0);
}

int plus_42(int i)
{
	return (i + 42);
}
