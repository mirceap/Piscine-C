/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 19:43:13 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/26 21:37:52 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int *ret;
	int i;

	ret = (int *)malloc(sizeof(int) * (lenght - 1));
	i = 0;
	while (i < lenght)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	return (ret);
}
