/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 04:47:42 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/27 04:48:09 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int final_number;
	int sign;
	int number_start;

	sign = 1;
	final_number = 0;
	number_start = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			number_start = 1;
			final_number = final_number * 10 + (*str - '0') * sign;
		}
		else if ((*str == '-' || *str == '+') && number_start == 0)
		{
			number_start = 1;
			if (*str == '-')
				sign = -1;
		}
		else if (number_start == 1 || (int)*str > 32)
			return (final_number);
		str++;
	}
	return (final_number);
}
