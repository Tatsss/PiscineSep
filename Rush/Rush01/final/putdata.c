/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putdata.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:17:14 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/15 17:18:05 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

int	solve(t_PuzzleData *data, int row, int col);

int	next_adjust(int row, int col, int type)
{
	int	value;

	if (type == 0)
	{
		if (col == SIZE - 1)
			value = row + 1;
		else
			value = row;
	}
	else
		value = (col + 1) % SIZE;
	return (value);
}

int	put_data(t_PuzzleData *data, int height, int row, int col)
{
	int	valid;
	int	i;

	valid = 1;
	i = 0;
	while (i < SIZE)
	{
		if (data->map[row][i] == height || data->map[i][col] == height)
		{
			valid = 0;
			break ;
		}
		i++;
	}
	if (valid)
	{
		data->map[row][col] = height;
		if (solve(data, next_adjust(row, col, 0), next_adjust(row, col, 1)))
			return (1);
		data->map[row][col] = 0;
	}
	return (0);
}
