void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		length;
	int		i;
	char	*tmp;

	length = 0;
	while (tab[length])
		length++;
	i = 0;
	while (i < (length - 1))
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}