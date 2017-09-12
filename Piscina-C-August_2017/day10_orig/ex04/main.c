/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 00:11:11 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/27 01:13:00 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_count_if.c"
#include <string.h>

int		return_ascii_sum(char *str)
{
	int res;
	
	res = 0;
	while (*str)
	{
		res += (int)(*str);
		str++;
//		printf("\n%i\n", res);
	}
	return (res);
}

int is_42(char *s)
{
	return (!strcmp(s, "42"));
}

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{		printf("%i", ft_count_if(argv, &is_42)); i++;}
	return (0);
}
