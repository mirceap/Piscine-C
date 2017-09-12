/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spurice <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:19:20 by spurice           #+#    #+#             */
/*   Updated: 2017/08/20 19:03:20 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i <= nb / 2)
	{
		if (nb % 2 == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (nb)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
