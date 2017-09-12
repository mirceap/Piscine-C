/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 11:34:45 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/25 00:37:35 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *dest;
	int lenght; 

	lenght = 0;
	while (*src != '\0')
	{
		lenght++;
		src++;
	}
	dest = (char*) malloc ((sizeof (*dest))* lenght);
	src -= lenght;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest - lenght);
}
