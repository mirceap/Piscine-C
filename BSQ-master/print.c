/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtanases <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 19:27:47 by vtanases          #+#    #+#             */
/*   Updated: 2017/09/06 01:44:56 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_printmap(char **map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	// write(1, "\nSTART ft_printmap()\n", 21);
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
	// write(1, "\nEND ft_printmap()\n", 19);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}



void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
	return (0);
}
