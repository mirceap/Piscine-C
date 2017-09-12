/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 01:35:59 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/27 07:15:13 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int		index;
	int		flag_c;
	int		flag_d;

	index = 0;
	flag_c = 0;
	flag_d = 0;
	if (lenght <= 2)
		return (1);
	while (index < lenght - 1)
	{
		if (f(tab[index], tab[index + 1]) >= 0)
			flag_c++;
		if (f(tab[index], tab[index + 1]) <= 0)
			flag_d++;
		index++;
	}
	if (flag_c == lenght - 1 || flag_d == lenght - 1)
		return (1);
	else
		return (0);
}
