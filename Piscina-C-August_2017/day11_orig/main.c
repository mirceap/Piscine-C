/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 22:02:15 by mpavel            #+#    #+#             */
/*   Updated: 2017/08/29 22:02:29 by mpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void print(t_list *head)
{
	t_list *temp = head;
	while (temp != NULL)
	{
		printf(" %d ", temp -> data);
		temp = temp -> next;
	}
	printf("\n");
}
//operatii asupra datelor?
void	print_int(int *i)
{
	printf("  %d\n",i);
}

int	cmp_int(int a, int b)
{
	if (a > b)
		return (-1);
	else if (b > a)
		return (1);
	else
		return (0);
}


int main(int argc, char **argv)
{
	t_list *start;
	
	int a[] = {14};
	int b[] = {10};
	int c[] = {9};
	int size;
	
	size = 0;
	
	//size = ft_list_size(start);
	//printf("List size is: %i\n", size);
	start = ft_create_elem(*a);
	//size = ft_list_size(start);
	//printf("List size is: %i\n", size);
	ft_list_push_back(&start, *b);
	ft_list_push_front(&start, *c);
	//print(start);
	//size = ft_list_size(start);
	//printf("List size is: %i\n", size);
	//print(ft_list_last(start));
	//start = ft_list_push_params(argc, argv);
	//print(start);
	//print(ft_list_at(start, 3));
	//printf("List is: ");
	//ft_list_clear(&start);
	//print(start);
	//ft_list_reverse(&start);
	//ft_list_foreach(start, &print_int);
	ft_list_foreach_if(start, &print_int, 10, &cmp_int);
	printf("List is: ");
	print(start);	
}
