/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 00:40:59 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/25 01:41:12 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include<stdlib.h>
#include"ft_concat_params.c"

int main(int argc, char *argv[])
{
	char *a;
	char b;
	a = &b;
	a = ft_concat_params(argc, argv);
	printf("%s", a);

	return (0);
}
