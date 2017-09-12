#include "../includes/ft_op.h"

int		ft_add(int a, int b)
{
	return (a + b);
}

int		ft_sub(int a, int b)
{
	return (a - b);
}

int		ft_mul(int a, int b)
{
	return (a * b);
}

int		ft_mod(int a, int b)
{
	return (a % b);
}

int		ft_div(int a, int b)
{
	return (a / b);
}

int		ft_usage(int a, int b)
{
	a = 0;
	b = 0;
	ft_putstr("error : only [ - + * / % ] are accepted.");
	return (0);
}