/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtanases <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 23:43:59 by vtanases          #+#    #+#             */
/*   Updated: 2017/09/04 21:15:14 by vtanases         ###   ########.fr       */
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

