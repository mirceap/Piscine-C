/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 21:30:47 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/26 21:43:30 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_map.c"

int		ft_num_min_one(int c)
{
	return (--c);
}

int main(int argc, char *argv[])
{
	argc--;
	int a[] = {atoi(argv[1]), atoi(argv[2])};
	int *res = ft_map(a, 2, &ft_num_min_one);
	int i = 0;
	while (i < 2)
	{
		printf("%i", res[i++]);
		printf("\n");
	}
	return (0);

}
