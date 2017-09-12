/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 04:14:13 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/19 04:38:52 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int lenght;

	lenght = 0;
	while (str[lenght])
	{
		ft_putchar(str[lenght]);
		lenght++;
	}
}
