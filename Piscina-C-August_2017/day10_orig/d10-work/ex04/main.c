#include <stdio.h>
#include <string.h>

int		ft_count_if(char **tab, int (*f)(char*));

int is_42(char *i)
{
	return (!strcmp(i,"42"));
}

int		main(int argc, char **argv)
{
	int response;

	if (argc > 1)
	{
		response = ft_count_if(argv, &is_42);
		printf("%d \n", response);
	}
	else
		printf("Please enter at least one param");

	return (0);
}