#include <stdlib.h>

int		ft_is_separator(char c)
{
	if (c == '\t' || c == ' ' || c == '\n')
		return (1);
	else
		return (0);
}

int		ft_nb_words(char *str, int *nb_words)
{
	int i;
	int symb_flag;

	i = 0;
	symb_flag = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (!ft_is_separator(str[i]) && str[i])
		{
			symb_flag = 1;
			i++;
		}
		if (!str[i])
			*nb_words = *nb_words + 1;
		if (ft_is_separator(str[i]) || str[i])
		{
			if (symb_flag)
				*nb_words = *nb_words + 1;
			symb_flag = 0;
			i++;
		}
	}
	return (*nb_words);
}

int		ft_len_word(char *str, int i)
{
	int count;

	count = 0;
	while (!ft_is_separator(str[i]) && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**r;
	int		i;
	int		i_arr;
	int		i_word;
	int		nb_words;

	i = 0;
	i_arr = 0;
	nb_words = 0;
	r = (char**)malloc(sizeof(char*) * (ft_nb_words(str, &nb_words) + 1));
	while (str[i])
	{
		while (ft_is_separator(str[i]) && str[i])
			i++;
		if (str[i])
		{
			i_word = 0;
			r[i_arr] = (char*)malloc(sizeof(char) * ft_len_word(str, i) + 1);
			while (!ft_is_separator(str[i]) && str[i])
				r[i_arr][i_word++] = str[i++];
			r[i_arr++][i_word] = '\0';
		}
	}
	r[i_arr] = NULL;
	return (r);
}