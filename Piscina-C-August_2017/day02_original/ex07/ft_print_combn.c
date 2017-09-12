/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 10:15:11 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/17 10:49:03 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write (1 ,  &c, 1);
	return (0);
}


void ft_print_combn(int n)
{
	if (n > 10 || n < 0) 
	{
		return;
	}
	else 
	{
		
	}
}


int main (void)
{
	ft_print_combn(2);
	return(0);
}

