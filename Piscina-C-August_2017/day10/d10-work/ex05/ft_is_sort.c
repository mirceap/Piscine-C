#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int sorted;

	i = 0;
	sorted = 1;
	if (length < 2)
		return (1);
	while (i < length - 1 && sorted)
	{
		printf("Evaluating %d < %d \n", tab[i], tab[i + 1]);
		printf("Response: %d \n", f(tab[i], tab[i + 1]));
		if (f(tab[i], tab[i + 1]) > 0)
			sorted = 0;
		i++;
	}
	return (sorted);
}