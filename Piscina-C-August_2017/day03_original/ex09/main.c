#include <stdio.h>
#include "ft_sort_integer_table.c"

int		main(void)
{
	int tabel[10] = {1, 3, 4, 10, -3, 2, -9, 12};
	int size;

	size = 8;
	ft_sort_integer_table(tabel, size);
	for(int i = 0; i < size; i++)
	{
		printf("%i", tabel[i]);
	}
	return 0;
}
