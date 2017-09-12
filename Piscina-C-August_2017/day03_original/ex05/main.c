#include<stdio.h>
#include<unistd.h>
#include"ft_putstr.c"

int		main(void)
{
	char *s;

	s = "Hello world!\n";
	ft_putstr(s);

	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
