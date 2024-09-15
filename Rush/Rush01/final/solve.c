/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:51:47 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/15 17:31:45 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

int	check_map(t_PuzzleData *data);
int	put_data(t_PuzzleData *data, int height, int row, int col);

int	solve(t_PuzzleData *data, int row, int col)
{
	int	height;

	if (row == SIZE)
	{
		if (check_map(data))
			return (1);
		return (0);
	}
	height = 1;
	while (height <= SIZE)
	{
		if (put_data(data, height, row, col) == 1)
			return (1);
		height++;
	}
	return (0);
}
