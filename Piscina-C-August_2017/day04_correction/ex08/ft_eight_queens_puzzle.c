/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spurice <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:23:03 by spurice           #+#    #+#             */
/*   Updated: 2017/08/19 18:27:08 by spurice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	make_solutions(int *board, int col, int *counter)
{
	if (col == 8)
	{
		*counter = *counter + 1;
		return ;
	}
	while (board[col] < 9)
	{
		if (safe_row(board, col))
			make_solutions(board, col + 1, counter);
		board[col]++;
	}
	board[col] = 0;
}

int		ft_eight_queens_puzzle(void)
{
	int counter;
	int board[8];
	int i;

	i = 0;
	while (i < 8)
	{
		board[i] = 0;
		i++;
	}
	counter = 0;
	make_solutions(board, 0, &counter);
	return (counter);
}
