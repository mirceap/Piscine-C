#include "includes/ft_op.h"
#include "includes/ft_opp.h"

int		ft_do_op(int a, char *op, int b)
{
	int		i;

	i = 0;
	while (i < 6)
	{
		if (op[0] == g_opptab[i].op[0])
			return (g_opptab[i].f(a, b));
		i++;
	}
	return (0);
}

int		check(char *op, int b)
{
	if (*op == '/' && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (*op == '%' && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

char	*get_op(char *str)
{
	int i;

	i = 0;
	while (i < 6)
	{
		if (str[0] == g_opptab[i].op[0])
			return (str);
		i++;
	}
	return ("");
}

int		main(int argc, char **argv)
{
	int a;
	int b;
	char *op;
	int res;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		op = get_op(argv[2]);
		b = ft_atoi(argv[3]);
		if (check(op, b))
		{
			res = ft_do_op(a, op, b);
			if (*op)
				ft_putnbr(res);
				ft_putchar('\n');
		}
	}
	return (0);
}