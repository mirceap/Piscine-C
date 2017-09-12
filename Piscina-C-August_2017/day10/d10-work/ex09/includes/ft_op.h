#ifndef FT_OP_H
# define FT_OP_H

# include <unistd.h>

typedef struct	s_cal
{
	char	*op;
	int		(*f)(int a, int b);
}				t_opp;

int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nbr);
void			ft_putstr(char *str);
int				ft_do_op(int a, char *op, int b);
int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_usage(int a, int b);

#endif