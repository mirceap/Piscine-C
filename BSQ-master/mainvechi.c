/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtanases <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 23:43:59 by vtanases          #+#    #+#             */
/*   Updated: 2017/09/05 19:26:38 by vtanases         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int lenght;

	lenght = 0;
	while(*str++)
		lenght++;
	return (lenght);
}

int		ft_smart_counter(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_count_break_lines(char *str)
{
	int counter;
	int i;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{ 
		if (str[i] == '\n')
			counter++;
		i++;
	}
	return (counter);
}

void	ft_printmap(char **map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	write(1, "\nSTART ft_printmap()\n", 21);
	if (map)
	{
		if (map[i])
		{
			j = 0;
			while (map[i] && map[i][j] != '\n')
			{
				if (map[i][j] == '\0')
				{
					i++;
					j = 0;
					printf("\n");
				}
				write(1, &map[i][j], 1);
				j++;
			}
		}
	}
	write(1, "\nEND ft_printmap()\n", 19);
}

int		ft_tabellen(char **tabel)
{
	int i;
	int j;

	i = 0;
	j = 0;

	if (tabel)
	{
		if (tabel[i])
		{
			j = 0;
			while (tabel[i] && tabel[i][j] != '\n')
			{
				if (tabel[i][j] == '\0')
				{
					i++;
					j = 0;
				}
				j++;
			}
		}
	}
	return (i);
}

int		ft_has_break_line(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'n')
			return (1);
		i++;
	}
	return (0);
}

char	**ft_append(char **dest, char *src, int len)
{
	int i;
	int j;
	char **map;

	i = 0;
	j = 0;

	write(1, "\nif (dest) -> true\n", 19);
  //(ft_tabellen(dest) + ft_count_break_lines(src) + 10);

	//printf("\nft_tabellen: %d\nft_count_break_lines: %d\n", ft_tabellen(dest), ft_count_break_lines(src));	
	map = (char **)malloc(sizeof(map) * 9);
	write(1, "\nif (dest[i])\n", 14);
	map[i] = (char *)malloc(ft_strlen(dest[i]) + 10);
	while (dest[i] && dest[i][j] != '\n')
	{
		write(1, "\nwhile()\n", 9);
		map[i][j] = dest[i][j];
		if (dest[i][j] == '\0')
		{
			i++;
			j = 0;
			if (ft_has_break_line(dest[i]))
				map[i] = (char *)malloc(ft_strlen(dest[i]) + ft_smart_counter(src) + 10);
			else
				map[i] = (char *)malloc(ft_strlen(dest[i]) + 10);
		}
		j++;
	}
	printf("\ni: %d\nj: %d\n", i, j);
	printf("\nbuffer: %s (%d)\n", src, ft_strlen(src));

	while(*src != '\0')
	{
		write(1, "dadadada", 8);
		if (*src == '\n')
		{
			write(1, "\nif (*src == break)\n)", 21);
			map[i][j] = '\0';
			i++;
			map[i] = (char *)malloc(ft_smart_counter(src) + 10);
			j = 0;
		}
		else
		{
			write(1, "\nelse\n", 6);
			map[i][j] = *src;
			write(1, "=====\n", 6);
			write(1, &map[i][j], 1);
			write(1, "\n=====\n", 7);
			j++;
		}
		src++;
	}
	map[i][j] = '\n';
	write(1, "\nEND ft_append()", 14);
	return (map);
}

int		main()
{
	char	*buffer;
	char	**map;
	char	lines;
	int		len;
	int		i;
	char	*meta;


	printf("START---------------\n");

	meta = (char *)malloc(sizeof(char) * 1);
	lines = 0;
	buffer = (char *)malloc(sizeof(char) * 20);
	//while ((len = read(0, buffer, 1)) != 0 && buffer != '\n')
	//	{

	//	}
	map = (char **)malloc(sizeof(map) * 9);
	while ((len = read(0, buffer, 10)) != 0)
	{
		printf("\nNEW ");
		buffer[len] = '\0';
		printf("BUFFER\n");
		map = ft_append(map, buffer, len);
		ft_printmap(map);
	}
	return (0);
}
