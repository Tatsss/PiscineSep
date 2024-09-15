/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:51:47 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/15 14:03:34 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

// データを構造体で管理
typedef struct PuzzleData
{
	int	map[SIZE][SIZE];
	int	colup[SIZE];
	int	coldown[SIZE];
	int	rowleft[SIZE];
	int	rowright[SIZE];
}		t_PuzzleData;

int		check_map(t_PuzzleData *data);
int		put_data(t_PuzzleData *data, int height, int row, int col);

// 解決関数
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
