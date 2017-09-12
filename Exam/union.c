/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 23:41:09 by mpavel            #+#    #+#             */
/*   Updated: 2017/09/06 00:13:30 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
void	ft_concat(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str1[i])
	{
	i++;
	}
	while (str2[j])
	{
		str1[i] = str2[j];
		j++;
		i++;
	}
	str1[i] = '\0';
}


int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_concat(argv[1], argv[2]);
	while (argv[1][i])
	{
		j = 0;
		while (j < i)
		{
			if (argv[1][i] == argv[1][j])
				break;
			j++;
		}
		if (j == i)
			write(1 , &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
