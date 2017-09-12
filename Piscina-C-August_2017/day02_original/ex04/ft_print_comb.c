/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 05:36:44 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/17 21:27:39 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		print_to_screen(int num1, int num2, int num3)
{
	ft_putchar(num1 + 48);
	ft_putchar(num2 + 48);
	ft_putchar(num3 + 48);
	if (num1 != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				print_to_screen(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
