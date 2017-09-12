#include<stdio.h>
#include"ft_is_prime.c"

int		main(void)
{
	printf("%i\n", ft_is_prime(1));
	printf("%i\n", ft_is_prime(0));
	printf("%i\n", ft_is_prime(-11));
	printf("%i\n", ft_is_prime(-4261));

	printf("%i\n", ft_is_prime(21));
	printf("%i\n", ft_is_prime(4261));
	return (0);
}
