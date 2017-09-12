#ifndef HEADER_H
# define HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		*ft_range(int min, int max);

#endif