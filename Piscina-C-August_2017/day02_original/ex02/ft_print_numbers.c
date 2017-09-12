/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 04:43:59 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/17 11:29:58 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	int digit;

	digit = 48;
	while (digit < 58)
	{
		ft_putchar(digit);
		digit++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
