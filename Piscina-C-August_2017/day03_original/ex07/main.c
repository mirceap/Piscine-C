#include<stdio.h>
#include"ft_strrev.c"

int		main(void)
{
	char s[] = "Hello";
	
	int len;
	len = 0;
	printf("%s", ft_strrev(s));
	return(0);
}
