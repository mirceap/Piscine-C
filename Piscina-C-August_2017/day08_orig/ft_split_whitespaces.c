/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 18:06:47 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/25 21:04:38 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int		find_lenght_of_param(char *argv)
{
	int len;
	
	len = 0;
	while (argv[len++])
		;
	return (--len);
}

int		find_no_of_words(char *str, int lenght)
{
	int index;
	int no_of_words;

	index = 0;
	no_of_words = 0;
	while(index <= lenght)
	{
		if (str[index] != ' ' && str[index] != '\t' && str[index] != '\n')
		{
			if (str[index+1] == ' ' || str[index+1] == '\n' || str[index+1] == '\t' || str[index+1] == 0) 
				no_of_words++;
		}
		index++;
	}
	return (no_of_words);
}

int		letters_in_word(char *str, int index)
{
	while (str[index] != ' ' || str[index] != '\t' ||
			str[index] != '\n' || str[index] != '\0')
	{
		index++;
	}
	return (index);
}


char		**ft_split_whitespaces(char *str)
{
	int len;
	int no_of_words;
	int index;
	int index_of_word;
	char **res;
	char *word;

	index = 0;
	int j = 0;
	index_of_word = 0;
	len = find_lenght_of_param(str);
	no_of_words = find_no_of_words(str, len);
	res = (char**)malloc(sizeof(res) * (no_of_words + 1));
	while (index <= no_of_words)
	{
		word = (char*)malloc(sizeof(char*) * letters_in_word(str,index_of_word));
		while (str[index] != 0)
			{
				word[j++] = str[index];
				index++;
			}
	}
	return (res);
}

int		main(int argc, char **argv)
{
	char **a = ft_split_whitespaces(argv[1]);
	int i = 0;
	int j = 0;
	if (argc != 2)
		return (0);
	while (a[i][j] != 0)
	{
		j = 0;
		while (a[i][j] != 0)
		{
			printf("%c", a[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
