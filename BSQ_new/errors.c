/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtanases <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 17:33:34 by vtanases          #+#    #+#             */
/*   Updated: 2017/09/05 21:07:38 by vtanases         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		well_length(char *str)
{
	int i;

	//printf("Start WELL_LENGTH with: %s\n", str);
	i = 0;
	while (str[i])
		i++;
	if (i < 4 ||i > 14)
	{
		//printf("JUST FAILED\n");
		return (0);
	}
	return (1);
}

int		first_is_digit(char *str)
{
	if (str[0] < '0' || str[0] > '9')
		return (0);
	return (1);
}

int		only_digits(char *str, int length)
{
	int i;

	//printf("Start only_digits with: %s and len: %d\n", str, length);
	i = 0;
	while (i < length)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int		well_map_content(char *str, char a, char b)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != a && str[i] != b && str[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}
/*
int		availables_spaces(char *str, char a)
{
	
}

int		same_lenght(char *str)
{
	
}*/
