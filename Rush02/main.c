#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE_OF_BUF 1

int	ft_strlen(char *str);



char	*ft_stdin(char *tab, int *count_lines)
{
	char	buff;
	int		i;
	int		j;
	int 	len;
	//	char 	*temp;

	i = 0;
	j = 0;
	len = 0;
	while (read(0, &buff, SIZE_OF_BUF) != 0)
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


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int v[11];
	int nr;

	nr = 0;
	if (nb < 0)
		ft_putchar('-');
	if (nb % 10 < 0)
		v[nr++] = -(nb % 10);
	else
		v[nr++] = nb % 10;
	nb /= 10;
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		v[nr++] = nb % 10;
		nb /= 10;
	}
	while (--nr > -1)
		ft_putchar(v[nr] + '0');
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i++])
		;
	return (--i);
}

void	print_conflict(int	line_no)
{
		ft_putstr("[rush-02] [1] [");
		ft_putnbr(line_no);
		ft_putstr("] || [rush-04] [1] [");
		ft_putnbr(line_no);
		ft_putstr("]");
}

void	print_conflict2(int	col_no)
{
		ft_putstr("[rush-03] [");
		ft_putnbr(col_no);
		ft_putstr("] [1] || [rush-04] [");
		ft_putnbr(col_no);
		ft_putstr("] [1]");
}

void····print_conflict3(int··line_no)
{
········ft_putstr("[rush-03] [1] [");
········ft_putnbr(line_no);
········ft_putstr("]");
}

void····print_conflict4(int·col_no)
{
········ft_putstr("[rush-02] [");
········ft_putnbr(col_no);
········ft_putstr("]");
}

int	compare(char *tab, char *first_line,int index_of_last_nl, int size_of_first)
{
	int i;
	int size_of_first_line;

	i = 0;
	size_of_first_line = ft_strlen(first_line);
	printf("\n%c\n", tab[index_of_last_nl + 1]);
	if (tab[i] == 'o')
		return (0);
	else if (tab[i] == '/')
		return (1);
	else if (first_line[size_of_first - 2] == 'A' || first_line[size_of_first -1] == 'A')
		return (2);
	else if (first_line[0] == 'A' && tab[2] == 'A')
		return (6);
	else if (first_line[size_of_first - 2] == 'C' && tab[index_of_last_nl] == 'A')
		return (3);
	else if (first_line[size_of_first - 2] == 'C' && tab[index_of_last_nl] == 'C')
		return (4);
	else if (first_line[0] == 'A' && first_line[size_of_first - 1] == 'C')
		return (5);
	i++;
	return (-1);
}


void	print_exceptions(int no_of_lines, int no_of_col) //int compare_res, int no_of_col)//,char *tab)
{
	if (no_of_lines == 1 && no_of_col == 1 && tab[0] == 'A')
	{
		ft_putstr("[rush-02] [1] [1] || [rush-03] [1] [1] || [rush-04] [1] [1]");
		return ;
	}
	if (compare_res == 6)
	{
		print_conflict3(no_of_lines);
		return ;
	}
	if (no_of_lines == 1 && compare_res == 5)
	{
		print_conflict2(no_of_col);
		return ;
	}
	if (no_of_col == 1 && compare_res == 2)
	{
		print_conflict(no_of_lines);
		return ;
	}
}

int	main()//int argc, char **argv)
{
	int	no_of_col;
	int	no_of_lines;
	int	index_of_last;
	int 	size_of_tab;
	int	size_of_first = 0;
	char	tab[100000];
	char	first_line[5000];

	no_of_col = 0;
	no_of_lines = 0;
	ft_stdin(tab, &no_of_lines);
	size_of_tab = ft_strlen(tab);

	while (no_of_col < ft_strlen(tab) - 1)
	{
		first_line[no_of_col] = tab[no_of_col];
		if (tab[no_of_col] == '\n')
			break;
		no_of_col++;
	}



	printf("Number of lines: %i\n", no_of_lines);
	printf("Number of columns: %i\n", no_of_col);
	size_of_first = ft_strlen(first_line);
	//printf("Size of first: %i\n", size_of_first);
	index_of_last_new_line(tab, &index_of_last,size_of_tab);
	int compare_res = compare(tab, first_line, index_of_last + 1 , size_of_first);
	print_exceptions(no_of_lines, no_of_col); //compare_res, tab);
	printf("Compare res: %i\n", compare_res); //compare(tab, first_line, index_of_last + 1 , size_of_first));
	
	printf("Last index of new line:%i\n", index_of_last);



	return (0);
}
