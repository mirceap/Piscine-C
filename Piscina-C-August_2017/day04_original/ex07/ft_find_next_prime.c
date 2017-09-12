/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 05:52:09 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/20 06:30:02 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb);

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2 + 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
