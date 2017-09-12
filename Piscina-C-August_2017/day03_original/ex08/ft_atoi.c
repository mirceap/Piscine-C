/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 00:00:36 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/20 00:04:31 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int lenght;
	int sign;
	int return_i;

	sign = 1;
	return_i = 0;
	lenght = 0;
	while (str[lenght] == ' ' || str[lenght] == '\t' ||
			str[lenght] == '\n' || str[lenght] == '\v' ||
			str[lenght] == '\f' ||  str[lenght] == '\r')
		lenght++;
	if (str[lenght] == '-')
	{
		sign = -1;
		lenght++;
	}
	if (str[lenght] == '+')
		lenght++;
	while (str && str[lenght] >= '0' && str[lenght] <= '9')
	{
		return_i = return_i * 10 + (str[lenght] - '0');
		lenght++;
	}
	return (sign * return_i);
}
