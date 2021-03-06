/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciuresc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 09:09:28 by cciuresc          #+#    #+#             */
/*   Updated: 2017/08/20 09:09:34 by cciuresc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	else
	{
		i = 2;
		while (i * i < nb)
			i++;
		while (i >= 2)
		{
			if (nb % i == 0)
			{
				return (0);
			}
			else
				i--;
		}
	}
	return (1);
}
