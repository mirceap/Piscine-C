/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 00:27:24 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/20 01:21:59 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int a;

	i = 0;
	while (i < size)
	{
		if (tab[i + 1] < tab[i])
		{
			a = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = a;
			i = 0;
		}
		else
			i++;
	}
}
