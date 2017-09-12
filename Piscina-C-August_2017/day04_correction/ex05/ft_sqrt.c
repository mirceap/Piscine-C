/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciuresc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 09:03:12 by cciuresc          #+#    #+#             */
/*   Updated: 2017/08/20 09:03:20 by cciuresc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
