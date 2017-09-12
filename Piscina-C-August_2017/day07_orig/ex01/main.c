/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 12:10:16 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/25 00:24:01 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_range.c"
#include<unistd.h>

int main() {
	int *dest;
	int min = -3;
	int max = 10;
	int i = max - min;
	int len = 0;


	int res;
	dest = &res;

	dest = ft_range(min, max);

	while (len < i)
	{
		printf("%i ", dest[len]);
		len++;
	}
	free(dest);
}
