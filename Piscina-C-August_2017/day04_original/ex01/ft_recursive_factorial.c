/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 20:10:16 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/19 20:51:26 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 0 || nb < 50)
	{
		while (nb > 0)
		{
			return (nb * ft_recursive_factorial(nb - 1));
		}
		return (1);
	}
	else
		return (0);
}
