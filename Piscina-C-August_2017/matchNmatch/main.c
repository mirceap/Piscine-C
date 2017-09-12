/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 21:14:27 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/27 21:21:47 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../Match-N-Match/ex00/match.c"
#include "../Match-N-Match/ex01/nmatch.c"

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc - 1)
	{
		printf("It matches(1) or not (0): %i\n", match(argv[i], argv[i + 1]));
		printf("Number of times it matches: %i\n", nmatch(argv[i], argv[i + 1]));
		i++;
	}
	return (0);
}
