/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 12:15:11 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/25 00:46:03 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *i;
	int lenght;
	int counter;

	counter = 0;
	lenght = max - min;
	if (lenght > 0)
	{
		i = (int*)malloc(sizeof(*i) * (lenght + 1));
		while (counter < lenght)
		{
			i[counter] = min + counter;
			counter++;
		}
		return (i);
	}
	return (NULL);
}
