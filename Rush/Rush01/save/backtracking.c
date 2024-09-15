/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:46:32 by hnagashi          #+#    #+#             */
/*   Updated: 2024/09/15 15:31:46 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

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

int		solve(t_PuzzleData *data, int row, int col);

void	put_nbr(t_PuzzleData data, int i)
{
	int		j;
	char	val;

	j = 0;
	while (j < SIZE)
	{
		val = (data.map[i][j]) + '0';
		write(1, &val, 1);
		write(1, " ", 1);
		j++;
	}
}

// エラーメッセージの表示
void	print_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

// 入力の解析
void	parse_input(t_PuzzleData *data, char *input)
{
	int	i;

	i = 0;
	if (strlen(input) != (SIZE * SIZE) * 2 - 1)
	{
		print_error();
	}
	while (i < SIZE * 4)
	{
		if (input[i * 2] < '1' || input[i * 2] > '4')
		{
			print_error();
		}
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
	t_PuzzleData	data;
	int				i;

	if (argc != 2)
		print_error();
	memset(&data, 0, sizeof(data));
	parse_input(&data, argv[1]);
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
		print_error();
	return (0);
}
