/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainv2.0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtanases <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 23:32:19 by vtanases          #+#    #+#             */
/*   Updated: 2017/09/06 04:00:06 by mpavel           ###   ########.fr       */
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

	write(1, "\nSTART malloc_map()\n", 19);
	dimension[0] = 0;
	dimension[1] = 0;
	i = 0;
	map = (char **)malloc(sizeof(map) * lines);

	while (dimension[0] < lines)
	{

		map[dimension[0]] = (char *)malloc(sizeof(map[dimension[0]]) * (columns + 1));
		dimension[1] = 0;
		ft_putchar('\n');
		write(1, "lines: ", 7);
		ft_putnbr(lines);
		ft_putchar('\n');
		write(1, "col: ", 5);
		ft_putnbr(columns);
		ft_putchar('\n');
		ft_putnbr(ft_strlen(aux));
		while (dimension[1] < columns)
		{
			write(1, "a", 2);
			if (aux[i] != '\n')
			{
				write(1, "aa", 2);
				map[dimension[0]][dimension[1]] = aux[i];
				i++;
			}
			dimension[1]++;
			write(1, "\na\n", 3);
		}
		dimension[0]++;
	}
	write(1, "\nEND malloc_map()\n", 17);
	free(aux);
}

int		*ft_append(char *dest, char *buf, char *concat, int *ok)
{
	int i;
	int *columns;
//	char *concat;
	int destLen;

	write(1, "\nSTART ft_append()\n", 19);
	i = 0;
	columns = (int *)malloc(sizeof(int));
	*columns = 0;
	destLen = ft_strlen(dest);

	concat = (char *)malloc(destLen + ft_strlen(buf) + 1);
	if (dest)
	{
		ft_putstr("\n: dest: ");
		ft_putstr(dest);
		ft_putstr("\n");
		while (dest[i] != '\0')
		{
			concat[i] = dest[i];
			i++;
		}
	}
	ft_putstr("buff : \n");
//	ft_putstr(buf);
	ft_putchar('\n');
	while (buf[i] != '\0')
	{
		ft_putchar(buf[i]);
		if (buf[i] != '\n' && *ok != 1)
			(*columns)++;
		else
			*ok = 1;
//		ft_putnbr(i);
		concat[i] = buf[i - destLen];
		i++;
	}

	ft_putstr("\nconcat is : \n");
	ft_putstr(concat);
	write(1, "\nEND ft_append()\n", 17);
//	free(dest);
	return (columns);
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
	write(1, "\nSTART well_first_line()\n", 25);
	//columns = 0;
	buffer = (char *)malloc(sizeof(buffer) * 33);
	columns = *ft_append(aux, buffer, aux, &ok);
	while ((len = read(file, buffer, 32)) != 0)
	{
		buffer[len + 1] = '\0';
		ft_putstr("num: ");
		ft_putnbr(len);
		ft_putstr("\nBUFFer: \n");
		while (buffer[i])
			ft_putchar(buffer[i++]);
		aux = (char *)malloc(sizeof(char) * columns + 1);
		ft_putstr("\naux: \n");
		ft_putstr(aux);
		ft_putstr("\n");
		if (ok ==1)
				break;
	}
	write(1, "\nEND well_first_line()\n", 23);
	return (columns);
}

char	*ft_strconcat(char *str, char buf)
{
	int i;
	char	*copy;

	write(1, "\nSTART ft_strconcat()\n", 22);
	copy = (char *)malloc(ft_strlen(str) + 2);
	i = 0;
	//write(1, "k\nBEFORE while\n", 15);
	if (str)
	{
		while (str[i])
		{
			//write(1, "\nSTART while\n", 22);
			copy[i] = str[i];
			i++;
		}
	}
	copy[i] = buf;
	copy[i + 1] = '\0';
	free(str);
	// printf("\ncopy: %s\n", str);
	write(1, "\nEND ft_strconcat()\n", 20);
	return (copy);
}

int		ft_readmeta(int file, t_meta *info)
{
	char	buffer;
	char	*str;
	int		i;
	int		len;

	str = NULL;
	//printf("Start READMETA\n");
	//write(1, "\nSTART ft_readmeta()\n", 21);
	while (read(file, &buffer, 1) != 0 && buffer != '\n')
		str = ft_strconcat(str, buffer);
	//printf("\n%s\n", str);
	// printf("LUNGIMEA: %d\n", ft_strlen(str));
	if (!well_length(str))
	{
		//write(1, "readmeta - 1\n", 11);
		return (0);
	}
	len = ft_strlen(str);
	if (!only_digits(str, len - 3))
	{	
		//write(1, "ana",3);
		//printf("\nstr[len - 3]: %c\n", str[len - 3]);
		//write(1, "\nreadmeta - 2\n", 20);
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
	// write(1, "\nEND ft_readmeta()\n", 19);
	return (1);
}

int		read_files(int argc, char **argv)
{
	int	i;
	int file;
	int columns;
//	char *buffer;
	char **map;
	char *aux;
	t_meta *info;

	aux = NULL;
	map = NULL;
	info = (t_meta *)malloc(sizeof(t_meta));
//	write(1, "\nSTART read_files()\n", 20);
	i = 1;
	while (i < argc)
	{
		if ((file = open(argv[i], O_RDONLY)) == -1)
		{
			//write(1, "1", 1);
			return (errno);
		}
		if (!ft_readmeta(file, info))
		{
			//write(1, "2", 1);
			return (0);
		}
		if ((columns = well_first_line(file, aux)) == 0)
		{
			//write(1, "3", 1);
			return (0);
		}
		ft_putstr("\nAux: ");
		//ft_putstr(aux);
		ft_putnbr(ft_strlen(aux));
		ft_putstr("\n");
		malloc_map(map, info->lines, columns, aux);
		ft_printmap(map);
		/*while (read(file, buffer, 32) != 0 )
		  {

		  }*/
		i++;
	}
	// write(1, "\nEND read_files()\n", 17);
	return (0);
}

int		main(int argc, char **argv)
{
	// write(1, "\nSTART main()\n", 14);
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
