/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 04:35:16 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/17 11:17:07 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	int letter;

	letter = 122;
	while (letter >= 97)
	{
		ft_putchar(letter);
		letter--;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
