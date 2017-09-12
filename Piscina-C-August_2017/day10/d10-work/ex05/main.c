#include <stdio.h>
#include <string.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int in_order(int a, int b)
{
	return (a - b);
}

int		main(void)
{
	int response;
	int test[10] = { 0, 1, 2, 2, 9, 5, 6, 7, 8, 9};

	response = ft_is_sort(test, 10, &in_order);
	printf("===================== \n");
	printf("SORT RESPONSE : %d \n", response);

	return (0);
}