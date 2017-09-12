/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciuresc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 08:55:31 by cciuresc          #+#    #+#             */
/*   Updated: 2017/08/20 08:55:53 by cciuresc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;

	if (nb > 12)
		return (0);
	else
	{
		fact = 1;
		while (nb >= 1)
		{
			fact *= nb;
			nb--;
		}
		return (fact);
	}
}
