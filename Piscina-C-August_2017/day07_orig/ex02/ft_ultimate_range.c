/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 00:24:50 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/25 01:32:25 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *start;

	if (min >= max)
		return (0);
	i = 0;
	start = (int*)malloc(sizeof(min - max + 1));
	while (i != max)
	{
		start[i] = min;
		min++;
	}
	return (range);
}
