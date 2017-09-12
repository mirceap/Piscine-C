/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 17:27:59 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/20 21:05:01 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		print_header(int x, int max)
{
	if (x == 1 || x == max)
		ft_putchar('A');
	else 
		ft_putchar('B');
	return (0);
}

int		print_footer(int x, int max)
{
	if (x == 1 || x == max)
		ft_putchar('C');
	else 
		ft_putchar('B');
	return (0);
}

int		print_body(int x, int max)
{
	if (x == 1 || x == max)
		ft_putchar('B');
	else 
		ft_putchar(' ');	
	return (0);
}

int		rush(int x, int y)
{
	int height;
	int width; 
	
	height = 1;
	while (height <= y)
	{
		width = 1;
		while (width <= x)
		{
			if (height == 1)
				print_header(width, y);
			else if (height == y)
				print_footer(width, y);
			else 
				print_body(width, y);
			width++;
		}
		ft_putchar('\n');
		height++;
	}

	return (0);
}
