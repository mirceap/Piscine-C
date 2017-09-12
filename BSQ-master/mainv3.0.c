/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainv3.0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 18:00:00 by mpavel            #+#    #+#             */
/*   Updated: 2017/09/06 18:32:18 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*
 *  * @param dimension[2]
 *   *     - row (rows)
 *    *     - col (columns)
 *     */

int     ft_strlen(char *str)
{
	int i;

	i = 0;
	write(1, &i, 1);
	if (str)
	{
		while (str[i])
			i++;
	}
	//  write(1, &i, 1);
	return (i);
}

void    malloc_map(char **map, int lines, int columns, char *aux)
{
	int size[2];
	int i;

	write(1, "\nSTART malloc_map()\n", 19);
	size[0] = 0;
	size[1] = 0;
	i = 0;
	map = (char **)malloc(sizeof(char) * (lines + 1));

	while (size[0] < lines)
	{

		map[size[0]] = (char *)malloc(sizeof(char) * (columns + 1));
		size[1] = 0;
		ft_putchar('\n');
		write(1, "lines: ", 7);
		ft_putnbr(lines);
		ft_putchar('\n');
		write(1, "col: ", 5);
		ft_putnbr(columns);
		ft_putchar('\n');
		ft_putnbr(ft_strlen(aux));
		while (size[1] < columns)
		{
			//write(1, "a", 2);
			if (aux[i] != '\n')
			{
				//write(1, "aa", 2);
				//printf("\nsize0 : %i size 1: %i = %c\n", size[0], size[1], aux[i]);
				map[size[0]][size[1]] = aux[i];
				i++;
			}
			size[1]++;
			//          write(1, "\na\n", 3);
		}
		size[0]++;
	}
	printf("size[0] = %i",size[0]);
	map[size[0]] = "\0";
	printf("\nLast aux: %s\n", aux);
	write(1, "\nEND malloc_map()\n", 17);
	free(aux);
}

char    *ft_append(char *dest, char *buf, int *columns, int *ok)
{
	int i;
	char *concat;
	int destLen;

	write(1, "\nSTART ft_append()\n", 19);
	i = 0;
	destLen = ft_strlen(dest);
	concat = (char *)malloc(destLen + ft_strlen(buf) + 1);
	printf("\n\n\n0th time :\ndest is : %s,\nbuff is: %s, \nconcat %s\n", dest, buf, concat);
	if (dest)
	{
		ft_putstr("\n: dest  is not null: ");
		ft_putstr(dest);
		ft_putstr("\n");
		while (dest[i] != '\0')
		{
			concat[i] = dest[i];
			i++;
		}
	}
	printf("\n\n\nFirst time :\ndest is : %s,\nbuff is: %s, \nconcat %s\n", dest, buf, concat);
	ft_putstr("\nbuff: ");
	ft_putstr(buf);
	ft_putstr("\n");
	while (buf[i] != '\0')
	{
		if (buf[i] != '\n' && *ok != 1)
			(*columns)++;
		else
			*ok = 1;
		ft_putnbr(i);
		concat[i] = buf[i - destLen];
		i++;
	}
	printf("\n\n\nSecond time :\ndest is : %s,\nbuff is: %s, \nconcat %s\n", dest, buf, concat);
	write(1, "\nEND ft_append()\n", 17);
	ft_putstr("\ndest is ");
	ft_putstr(dest);
	//  free(dest);
	return (concat);
}


int     well_first_line(int file, char *aux)
{
	int columns;
	char *buffer;
	int len;
	int ok;

	ok = 0;
	write(1, "\nSTART well_first_line()\n", 25);
	columns = 0;
	buffer = (char *)malloc(sizeof(buffer) * 33);
	while ((len = read(file, buffer, 32)) != 0)
	{
		buffer[len] = '\0';
		aux = ft_append(aux, buffer, &columns, &ok);
		ft_putstr("\nsay aux: \n");
		ft_putstr(aux);
		ft_putstr("\n");
		if (ok ==1)
			break;
	}
	write(1, "\nEND well_first_line()\n", 23);
	return (columns);
}

char    *ft_strconcat(char *str, char buf)
{
	int i;
	char    *copy;

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

int     ft_readmeta(int file, t_meta *info)
{
	char    buffer;
	char    *str;
	int     i;
	int     len;

	str = NULL;
	//printf("Start READMETA\n");
	write(1, "\nSTART ft_readmeta()\n", 21);
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

int     read_files(int argc, char **argv)
{
	int i;
	int file;
	int columns;
	//  char *buffer;
	char **map;
	char    *aux;
	t_meta *info;

	map = NULL;
	aux = (char *)malloc(sizeof(char) * 100);
	info = (t_meta *)malloc(sizeof(t_meta));
	write(1, "\nSTART read_files()\n", 20);
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
			return (1);
		}
		if ((columns = well_first_line(file, aux)) == 0)
		{
			//write(1, "3", 1);
			return (2);
		}
		ft_putstr("\nAux: ");
		ft_putstr(aux);
		ft_putnbr(ft_strlen(aux));
		ft_putstr("\n");
		malloc_map(map, info->lines, columns, aux);
		//ft_printmap(map);
		//  ft_print_map(map, info->lines, columns);
		/*while (read(file, buffer, 32) != 0 )
		  {
		  }*/
		i++;
	}
	// write(1, "\nEND read_files()\n", 17);
	return (0);
}

int     main(int argc, char **argv)
{
	// write(1, "\nSTART main()\n", 14);
	if (argc > 1)
	{
		write(1, "\n", 1);
		if (read_files(argc, argv))
			write(2, "map error\n", 10);
		// printf("\n%d\n", read_files(argc, argv));
	}
	//else
	//read_stdinput();
	// write(1, "\nEND main()\n", 12);
	return (0);
}
