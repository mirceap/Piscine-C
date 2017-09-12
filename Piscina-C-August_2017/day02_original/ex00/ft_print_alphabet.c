/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 04:23:36 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/17 10:57:04 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int letter;

	letter = 97;
	while (letter < 123)
	{
		ft_putchar(letter);
		letter++;
	}
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
