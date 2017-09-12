/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 05:11:06 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/19 06:27:50 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	*rev_str;
	int		lenght;
	int		len;

	lenght = 0;
	len = 0;
	while (str[lenght])
		lenght++;
	lenght--;
	while (len <= lenght)
	{
		rev_str[len] = str[lenght - len];
		len++;
	}
	return (rev_str);
}
