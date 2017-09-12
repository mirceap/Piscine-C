/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 19:25:45 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/20 22:39:43 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_iterative_factorial.c"
#include <time.h>

int		main(void)
{
	time_t start = clock();
	printf("%i", ft_iterative_factorial(-13));
	time_t end = clock();
	double diff = (double) (end - start)/CLOCKS_PER_SEC;
	printf("\nThe function took: %f seconds to run.\n", diff);
	return (0);
}
