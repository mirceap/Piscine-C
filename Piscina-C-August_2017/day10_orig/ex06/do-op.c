/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 04:01:51 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/27 07:06:35 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include "ft_atoi.c"
#include <unistd.h>

int		ft_add(int a, int b)
{
	return (a + b);
}

int		ft_sub(int a, int b)
{
	return (a - b);
}

int		ft_div(int a, int b)
{
	return (a / b);
}

int		ft_mul(int a, int b)
{
	return (a * b);
}

int		ft_mod(int a, int b)
{
	return (a % b);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_putstr(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	return (0);
}

int		calculate(int no1, char op, int no2)
{
	if (op == '+')
		return (ft_add(no1, no2));
	else if (op == '-')
		return (ft_sub(no1, no2));
	else if (op == '/')
	{
		if (no2 == 0)
			ft_putstr("Stop: division by zero");
		return (ft_div(no1, no2));
	}
	else if (op == '*')
	{
		printf("I'm a star");
		return (ft_mul(no1, no2));
	}
	else if (op == '%')
	{
		if (no2 == 0)
			ft_putstr("Stop : modulo by zero");
		return (ft_mod(no1, no2));
	}
	else
	{
		printf("%c", op);
		return (0);
	}
//	return (0);
}

int main(int argc, char *argv[])
{
	int n1;
	int n2;
	char op;
	if (argc != 4)
		return (0);
	op = argv[2][0];
	printf("%c\n", op);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	printf("Mesaj: %i\n", calculate(n1, op, n2));
	return (0);
}
