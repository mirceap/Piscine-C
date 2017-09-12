/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 00:28:22 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/25 01:53:39 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int     find_lenght_of_param(char *argv)
{
	int len;

	len = 0;
	while (argv[len++] != '\0')
		;
	return (--len);
}

char    *ft_concat_params(int argc, char *argv[])
{
	int m;
	int counter;
	char *dest;
	int i;
	int index;
	char p;
	dest = &p;
	int c;
	int z;
	int cnt;

	m = 0;
	counter = 0;
	index = 0;
	i = 0;
	while (index < argc)
	{
		i += find_lenght_of_param(argv[index]);
		index++;       
	}  
	dest = (char*)malloc(sizeof(*dest) * (argc + i + 1));
	z = 0;
	cnt = 0;
	while (z < argc)
	{
		c = 0;
		while (argv[z][c] != '\0')
		{
			dest[cnt] = argv[z][c];
			c++;
			cnt++;
		}
		z++;
		dest[++cnt] = 10;
	}
	dest[++cnt] = '\0';
	return (dest);
}
