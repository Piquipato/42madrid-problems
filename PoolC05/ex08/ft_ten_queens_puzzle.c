/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:37:06 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/19 17:37:08 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_ten_queens_puzzle(void);
int		backtrack(int *board, int col, int n);
int		is_safe(int *board, int col, int row, int n);
void	print_list(int *list, int n);
void	ft_putnbr(int nb);

int	main(void)
{
	printf("Have I found a solution? %d\n", ft_ten_queens_puzzle());
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	*board;
	int	i;
	int	n;
	int	sum;

	n = 10;
	board = (int *) malloc(n * sizeof(int));
	i = 0;
	while (i < n)
		board[i++] = -1;
	while (backtrack(board, 0, n) && sum < 100)
	{
		i = 0;
		while (i < n)
			board[i++] = -1;
		sum++;
	}
	free(board);
	return (sum);
}

int	backtrack(int *board, int col, int n)
{
	int	row;

	if (col >= n)
	{
		print_list(board, n);
		return (1);
	}
	row = 0;
	while (row < n)
	{
		if (is_safe(board, col, row, n))
		{
			board[col] = row;
			if (backtrack(board, col + 1, n))
				return (1);
			board[col] = -1;
		}
		row++;
	}
	return (0);
}

int	is_safe(int *board, int col, int row, int n)
{
	int	i;
	int	j;

	j = 0;
	while (j < col)
		if (board[j++] == row)
			return (0);
	i = row;
	j = col;
	while (i >= 0 && j >= 0)
		if (board[j--] == i--)
			return (0);
	i = row;
	j = col;
	while (i < n && j >= 0)
		if (board[j--] == i++)
			return (0);
	return (1);
}

void	print_list(int *list, int n)
{
	int	i;

	i = 0;
	while (i < n)
		ft_putnbr(list[i++]);
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	int	letra;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		letra = nb + 48;
		write(1, &letra, 1);
	}
}
