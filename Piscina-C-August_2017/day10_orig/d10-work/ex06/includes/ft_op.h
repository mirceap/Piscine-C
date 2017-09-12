/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 06:30:45 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/27 06:30:50 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OP_H
# define FT_OP_H

# include <unistd.h>

typedef struct	s_cal
{
	char	op;
	int		(*f)(int, int);
}				t_cal;

int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nbr);
void			ft_putstr(char *str);
int				ft_do_op(int a, char op, int b);
int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_mod(int a, int b);
int				ft_div(int a, int b);

#endif
