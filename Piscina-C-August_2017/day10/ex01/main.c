/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 21:01:37 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/26 21:29:15 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
//#include "header.h"
#include "ft_putnbr.c"
#include <stdlib.h>
#include "ft_range.c"
#include "ft_foreach.c"
#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main(int argc, char **argv)
{
/*	int *tab;
	int len;

	if (argc == 3)
	{
		tab = ft_range(atoi(argv[1]), atoi(argv[2]));
		len = atoi(argv[2]) - atoi(argv[1]);
		ft_foreach(tab, len, &ft_putnbr);
	}
	else
		printf("Enter 2 params for range:");
		*/
	argc = 3;
	int a[] = {atoi(argv[1]), atoi(argv[2])};
	ft_foreach(a, 2, &ft_putnbr);
	return (0);
}
