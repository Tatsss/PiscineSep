/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:46:32 by hnagashi          #+#    #+#             */
/*   Updated: 2024/09/17 10:46:14 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

int		solve(t_PuzzleData *data, int row, int col);

int	my_strlen(const char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

void	put_nbr(t_PuzzleData data, int i)
{
	int		j;
	char	val;

	j = 0;
	while (j < SIZE)
	{
		val = (data.map[i][j]) + '0';
		write(1, &val, 1);
		if (j != SIZE - 1)
			write(1, " ", 1);
		j++;
	}
}

int	parse_input(t_PuzzleData *data, char *input)
{
	int	i;

	i = 0;
	if (my_strlen(input) != (SIZE * 4) * 2 - 1)
		return (1);
	while (i < SIZE * 4)
	{
		if (input[i * 2] < '1' || input[i * 2] > '4')
			return (1);
		if (i < SIZE)
			data->colup[i] = input[i * 2] - '0';
		else if (i < SIZE * 2)
			data->coldown[i - SIZE] = input[i * 2] - '0';
		else if (i < SIZE * 3)
			data->rowleft[i - SIZE * 2] = input[i * 2] - '0';
		else
			data->rowright[i - SIZE * 3] = input[i * 2] - '0';
		i++;
	}
	return (0);
}

void	my_memset(t_PuzzleData *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			data->board[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_PuzzleData	data;
	int				i;

	if (argc != 2)
		write(1, "Error\n", 6);
	my_memset(&data);
	if (parse_input(&data, argv[1]) == 0)
	{
		if (solve(&data, 0, 0))
		{
			i = 0;
			while (i < SIZE)
			{
				put_nbr(data, i);
				write(1, "\n", 1);
				i++;
			}
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
