/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:25:59 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/15 17:31:18 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

int	check_view(int view, int *line)
{
	int	max;
	int	visible_boxes;
	int	i;

	max = 0;
	visible_boxes = 0;
	i = 0;
	while (i < SIZE)
	{
		if (line[i] > max)
		{
			max = line[i];
			visible_boxes++;
		}
		i++;
	}
	return (visible_boxes == view);
}

int	col_check(t_PuzzleData *data, int i)
{
	int	col[SIZE];
	int	j;

	j = 0;
	while (j < SIZE)
	{
		col[j] = data->map[j][i];
		j++;
	}
	if (!check_view(data->colup[i], col))
		return (0);
	j = 0;
	while (j < SIZE)
	{
		col[j] = data->map[SIZE - 1 - j][i];
		j++;
	}
	if (!check_view(data->coldown[i], col))
		return (0);
	return (1);
}

int	row_check(t_PuzzleData *data, int i)
{
	int	row[SIZE];
	int	j;

	j = 0;
	while (j < SIZE)
	{
		row[j] = data->map[i][j];
		j++;
	}
	if (!check_view(data->rowleft[i], row))
		return (0);
	j = 0;
	while (j < SIZE)
	{
		row[j] = data->map[i][SIZE - 1 - j];
		j++;
	}
	if (!check_view(data->rowright[i], row))
		return (0);
	return (1);
}

int	check_map(t_PuzzleData *data)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (col_check(data, i) == 0)
			return (0);
		i++;
	}
	i = 0;
	while (i < SIZE)
	{
		if (row_check(data, i) == 0)
			return (0);
		i++;
	}
	return (1);
}
