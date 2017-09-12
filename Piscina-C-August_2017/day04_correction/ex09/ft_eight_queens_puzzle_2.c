/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spurice <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:33:52 by spurice           #+#    #+#             */
/*   Updated: 2017/08/19 18:39:51 by spurice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	display_board(int *board)
{
	int index;

	index = 0;
	while (index < 8)
	{
		ft_putchar(board[index] + '0');
		index++;
	}
	ft_putchar('\n');
}

int		safe_row(int *board, int col)
{
	int index;

	index = 0;
	if (0 < board[col] && board[col] < 9)
	{
		while (index < col)
		{
			if (board[index] == board[col])
				return (0);
			if (board[index] - index == board[col] - col)
				return (0);
			if (board[index] + index == board[col] + col)
				return (0);
			index++;
		}
		return (1);
	}
	else
		return (0);
}

void	make_solutions(int *board, int col)
{
	if (col == 8)
	{
		display_board(board);
		return ;
	}
	while (board[col] < 9)
	{
		if (safe_row(board, col))
			make_solutions(board, col + 1);
		board[col]++;
	}
	board[col] = 0;
}

void	ft_eight_queens_puzzle(void)
{
	int i;
	int board[8];

	i = 0;
	while (i < 8)
	{
		board[i] = 0;
		i++;
	}
	make_solutions(board, 0);
	return ;
}
