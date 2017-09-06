/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtanases <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 19:31:10 by vtanases          #+#    #+#             */
/*   Updated: 2017/09/06 01:41:51 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <stdio.h>

typedef struct s_meta
{
	int		lines;
	char	space;
	char	obs;
	char	square;
}			t_meta;

int		well_length(char *str);
int		only_digits(char *str, int length);
void	ft_printmap(char **map);
void	ft_putchar(char c);
int		ft_putnbr(int nbr);
void	ft_putstr(char *str);


#endif
