/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 00:22:11 by mpavel            #+#    #+#             */
/*   Updated: 2017/09/06 00:41:08 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_atoi(char *str);

int main (int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc != 2)
		return (0);
	printf("%i", ft_atoi(argv[1]));
	return (0);
}

int		ft_atoi(char *str)
{
	int res;
	int sign;
	int i;

	sign = 1;
	res = 0;
	i = 0;
	if (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r')
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = -1;
			i++;
		}
		if (str[i] == '-' || str[i] == '+')
			return (0);
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + sign * (str[i] - '0');
			i++;
		}
	}
	return (res);
}
