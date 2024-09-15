/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagashi <hnagashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:46:32 by hnagashi          #+#    #+#             */
/*   Updated: 2024/09/15 07:55:01 by hnagashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

#define SIZE 4

// データを構造体で管理
typedef struct
{
	int	map[SIZE][SIZE];
	int	colup[SIZE];
	int	coldown[SIZE];
	int	rowleft[SIZE];
	int	rowright[SIZE];
}		PuzzleData;

// エラーメッセージの表示
void	print_error(void)
{
	printf("Error\n");
	exit(1);
}

// ビューのチェック
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

// マップのチェック
int	check_map(PuzzleData *data)
{
	int	col[SIZE];
	int	row[SIZE];
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
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
		i++;
	}
	i = 0;
	while (i < SIZE)
	{
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
		i++;
	}
	return (1);
}

// 解決関数
int	solve(PuzzleData *data, int row, int col)
{
	int	next_row;
	int	next_col;
	int	height;
	int	valid;
	int	i;

	if (row == SIZE)
	{
		if (check_map(data))
			return (1);
		return (0);
	}
	next_row = (col == SIZE - 1) ? row + 1 : row;
	next_col = (col + 1) % SIZE;
	height = 1;
	while (height <= SIZE)
	{
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
			if (solve(data, next_row, next_col))
				return (1);
			data->map[row][col] = 0;
		}
		height++;
	}
	return (0);
}

// 入力の解析
void	parse_input(PuzzleData *data, char *input)
{
	int	i;

	i = 0;
	if (strlen(input) != 31)
		print_error();
	while (i < SIZE * 4)
	{
		if (input[i * 2] < '1' || input[i * 2] > '4')
			print_error();
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
}

// メイン関数
int	main(int argc, char **argv)
{
	PuzzleData	data;
	int			i;
	int			j;

	if (argc != 2)
		print_error();
	memset(&data, 0, sizeof(data));
	parse_input(&data, argv[1]);
	if (solve(&data, 0, 0))
	{
		i = 0;
		while (i < SIZE)
		{
			j = 0;
			while (j < SIZE)
			{
				printf("%d ", data.map[i][j]);
				j++;
			}
			printf("\n");
			i++;
		}
	}
	else
	{
		print_error();
	}
	return (0);
}
