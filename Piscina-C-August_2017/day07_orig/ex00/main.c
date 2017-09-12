/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 11:37:18 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/23 12:07:52 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strdup.c"
#include <string.h>
#include <stdio.h>
int		main(void)
{
	char *a = "String is here";
	char *b = ft_strdup(a);
	char *c = strdup(a);
	printf("%s\n", b);
	printf("%s\n", c);
	free(b);
	free(c);
	return (0);
}
