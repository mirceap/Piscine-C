/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainv2.0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtanases <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 23:32:19 by vtanases          #+#    #+#             */
/*   Updated: 2017/09/06 05:04:38 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h" 

/*
 * @param dimension[2]
 *     - row (rows)
 *     - col (columns)
 */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	write(1, &i, 1);
	if (str)
	{
		while (str[i])
			i++;
	}
	write(1, &i, 1);
	return (i);
}

void	malloc_map(char **map, int lines, int columns, char *aux)
{
	int dimension[2];
	int i;

	dimension[0] = 0;
	dimension[1] = 0;
	i = 0;
	map = (char **)malloc(sizeof(map) * lines);

	while (dimension[0] < lines)
	{

		map[dimension[0]] = (char *)malloc(sizeof(map[dimension[0]]) * (columns + 1));
		dimension[1] = 0;
		while (dimension[1] < columns)
		{
			if (aux[i] != '\n')
			{
				map[dimension[0]][dimension[1]] = aux[i];
				i++;
			}
			dimension[1]++;
		}
		dimension[0]++;
	}
	free(aux);
}

char		*ft_append(char *dest, char *buf, int *ok)
{
	int i;
	int columns;
	char *concat;
	int destLen;

	write(1, "\nSTART ft_append()\n", 19);
	i = 0;
	//columns = (int *)malloc(sizeof(int));
	columns = 0;
	ft_putstr("buffii : \n");
	ft_putstr(buf);
	ft_putchar('\n');
	destLen = ft_strlen(dest);
	concat = (char *)malloc(destLen + ft_strlen(buf) + 1);
	if (dest)
	{
		while (dest[i] != '\0')
		{
			concat[i] = dest[i];
			i++;
		}
	}
	while (buf[i] != '\0')
	{
		if (buf[i] != '\n' && *ok != 1)
		{
			columns++;
		}
		else
			*ok = 1;
		concat[i] = buf[i - destLen];
		i++;
	}
	printf("\nCOL: %i\n", columns);

	ft_putstr("\nconcat is : \n");
	ft_putstr(concat);
	write(1, "\nEND ft_append()\n", 17);
//	free(dest);
	return (concat);
}


int		well_first_line(int file, char *aux)
{
	int columns;
	char *buffer;
	int len;
	int i;
	int ok;

	ok = 0;
	i = 0;
	columns = 0;
	buffer = (char *)malloc(sizeof(buffer) * 33);
//	aux = (char *)malloc(sizeof(char) * columns + 1);
	aux = ft_append(aux, buffer, &ok);
	while ((len = read(file, buffer, 32)) != 0)
	{
		buffer[len + 1] = '\0';
		while (buffer[i])
			ft_putchar(buffer[i++]);

		if (ok ==1)
				break;
	}
	return (columns);
}

char	*ft_strconcat(char *str, char buf)
{
	int i;
	char	*copy;

	copy = (char *)malloc(ft_strlen(str) + 2);
	i = 0;
	if (str)
	{
		while (str[i])
		{
			copy[i] = str[i];
			i++;
		}
	}
	copy[i] = buf;
	copy[i + 1] = '\0';
	free(str);
	return (copy);
}

int		ft_readmeta(int file, t_meta *info)
{
	char	buffer;
	char	*str;
	int		i;
	int		len;

	str = NULL;
	while (read(file, &buffer, 1) != 0 && buffer != '\n')
		str = ft_strconcat(str, buffer);
	if (!well_length(str))
	{
		return (0);
	}
	len = ft_strlen(str);
	if (!only_digits(str, len - 3))
	{	
		return (0);
	}
	info->square = str[len - 1];
	info->obs = str[len - 2];
	info->space = str[len - 3];
	info->lines = 0;
	i = 0;
	while (i < len - 3)
	{
		info->lines = info->lines * 10 + (str[i] - '0');
		i++;
	}
	return (1);
}

int		read_files(int argc, char **argv)
{
	int	i;
	int file;
	int columns;
//	char *buffer;
	char **map;
	char aux[100];
	t_meta *info;

//	aux = NULL;
	map = NULL;
	info = (t_meta *)malloc(sizeof(t_meta));
	i = 1;
	while (i < argc)
	{
		if ((file = open(argv[i], O_RDONLY)) == -1)
		{
			write(1, "err1", 4);
			return (errno);
		}
		if (!ft_readmeta(file, info))
		{
			write(1, "err2", 4);
			return (0);
		}
		if ((columns = well_first_line(file, aux)) == 0)
		{
			write(1, "err3", 4);
			return (0);
		}
		ft_putstr("\nAux: ");
		ft_putstr(aux);
		ft_putnbr(ft_strlen(aux));
		ft_putstr("\n");
		malloc_map(map, info->lines, columns, aux);
		ft_printmap(map);
		/*while (read(file, buffer, 32) != 0 )
		  {

		  }*/
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		write(1, "\n", 1);
		if (!read_files(argc, argv))
			write(2, "map error\n", 10);
		// printf("\n%d\n", read_files(argc, argv));
	}
	//else
	//read_stdinput();
	// write(1, "\nEND main()\n", 12);
	return (0);
}
