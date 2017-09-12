/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 08:30:41 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/17 15:01:20 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	int rev_nb;

	rev_nb = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	while (nb > 0)
	{
		rev_nb = rev_nb * 10 + nb % 10;
		nb /= 10;
	}
	while (rev_nb > 0)
	{
		ft_putchar(rev_nb % 10 + 48);
		rev_nb /= 10;
	}
}

int		main(void)
{
	ft_putnbr(-42);
	return (0);
}
