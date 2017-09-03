#include <unistd.h>
#include <stdio.h>


char	*ft_stdin(char *tab, int *count_lines)
{
	char	buff;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (read(0, &buff, 1) != 0)
	{
		tab[i] = buff;
		if (tab[i] == '\n')
		{
			j++;
		}
		i++;
	}
	*count_lines = j;
	return (tab);
}

void	index_of_last_new_line(char *tab, int *index, int size)
{
	int i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] == '\n')
			*index = i;
		i++;
	}
}


int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i++])
		;
	return (--i);
}


int	compare(char *tab, char *first_line,int index_of_last_nl, int size_of_first)
{
	int i;

	i = 0;
	printf("\n%c\n", tab[index_of_last_nl + 1]);
	if (tab[i] == 'o')
		return (0);
	else if (tab[i] == '/')
		return (1);
	else if (first_line[size_of_first - 2] == 'A')
		return (2);
	else if (first_line[size_of_first - 2] == 'C' && tab[index_of_last_nl] == 'A')
		return (3);
	else if (first_line[size_of_first - 2] == 'C' && tab[index_of_last_nl] == 'C')
		return (4);
		i++;
	return (-1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	no_of_lines;
	int	index_of_last;
	int 	size_of_tab;
	int	size_of_first;
	char	tab[10000];
	char	first_line[5000];

	i = 0;
	no_of_lines = 0;
	ft_stdin(tab, &no_of_lines);
	size_of_tab = ft_strlen(tab);
	
	while (i < ft_strlen(tab) - 1)
	{
		first_line[i] = tab[i];
		if (tab[i] == '\n')
			break;
		i++;
	}
	
	printf("Number of lines: %i\n", no_of_lines);
	printf("Number of columns: %i\n", i);
	size_of_first = ft_strlen(first_line);
	printf("Size of first: %i\n", size_of_first);
	index_of_last_new_line(tab, &index_of_last,size_of_tab);
	
	printf("Last index of new line:%i\n", index_of_last);
	printf("Compare res: %i\n", compare(tab, first_line, index_of_last + 1 , size_of_first));
	return (0);
}
