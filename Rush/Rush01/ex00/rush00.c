/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagashi <hnagashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:04:20 by hnagashi          #+#    #+#             */
/*   Updated: 2024/09/14 18:14:16 by hnagashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_visible_buildings(int line[9], int size)
{
	int	max_height;
	int	visible_count;
	int	i;

	max_height = 0;
	visible_count = 0;
	i = 0;
	while (i < size)
	{
		if (line[i] > max_height)
		{
			max_height = line[i];
			visible_count++;
		}
		i++;
	}
	return (visible_count);
}

int	is_valid_solution(int base[9][9], char *data, int size)
{
	int	i;
	int	col[9];
	int	row[9];
	int	expected_visible;

	i = 0;
	while (i < size)
	{
		// 左から右へ行をチェック
		expected_visible = data[i] - '0';
		int j = 0;       // ここでループ変数を初期化
		while (j < size) // forをwhileに書き換え
		{
			row[j] = base[i][j];
			j++;
		}
		if (count_visible_buildings(row, size) != expected_visible)
		{
			write(1, "Left to right check failed\n", 27);
			return (0);
		}
		// 右から左へ行をチェック
		expected_visible = data[size + i] - '0';
		j = 0;           // ループ変数を再初期化
		while (j < size) // forをwhileに書き換え
		{
			row[j] = base[i][size - 1 - j];
			j++;
		}
		if (count_visible_buildings(row, size) != expected_visible)
		{
			write(1, "Right to left check failed\n", 27);
			return (0);
		}
		// 上から下へ列をチェック
		expected_visible = data[2 * size + i] - '0';
		j = 0;           // ループ変数を再初期化
		while (j < size) // forをwhileに書き換え
		{
			col[j] = base[j][i];
			j++;
		}
		if (count_visible_buildings(col, size) != expected_visible)
		{
			write(1, "Top to bottom check failed\n", 27);
			return (0);
		}
		// 下から上へ列をチェック
		expected_visible = data[3 * size + i] - '0';
		j = 0;           // ループ変数を再初期化
		while (j < size) // forをwhileに書き換え
		{
			col[j] = base[size - 1 - j][i];
			j++;
		}
		if (count_visible_buildings(col, size) != expected_visible)
		{
			write(1, "Bottom to top check failed\n", 27);
			return (0);
		}
		i++;
	}
	return (1);
}

int	is_safe(int want, int base[9][9], int size, int x, int y)
{
	int	xx;
	int	yy;

	yy = 0;
	while (yy < size)
	{
		xx = 0;
		while (xx < size)
		{
			if ((base[x][yy] == want && y != yy) || (base[xx][y] == want
					&& x != xx))
				return (0);
			xx++;
		}
		yy++;
	}
	return (1);
}

void	print_solution(int base[9][9], int size)
{
	int		x;
	int		y;
	char	base2;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			base2 = base[x][y] + '0';
			write(1, &base2, 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

int	solve(int base[9][9], char *data, int size, int x, int y)
{
	int	want;

	if (x == size)
		return (is_valid_solution(base, data, size));
	if (y == size)
		return (solve(base, data, size, x + 1, 0));
	want = 1;
	while (want <= size)
	{
		if (is_safe(want, base, size, x, y))
		{
			base[x][y] = want;
			if (solve(base, data, size, x, y + 1))
				return (1);
			base[x][y] = 0;
		}
		want++;
	}
	return (0);
}

void	rush(char *data, int base[9][9], int size)
{
	if (!solve(base, data, size, 0, 0))
		write(1, "Error\n", 6);
	else
		print_solution(base, size);
}

int	main(int argc, char *argv[])
{
	char	array[200];
	int		base[9][9];
	int		size;
	int		i;

	i = 0;
	size = 0;
	if (argc == 2)
	{
		// argv[1] の文字列を処理
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] != ' ' && size < 200) // arrayのサイズチェック
			{
				array[size] = argv[1][i];
				size++;
			}
			i++;
		}
		rush(array, base, size / 4);
	}
	else if ((argc - 1) % 4 == 0) // argcのチェック
	{
		// argvの残りの引数を処理
		while ((1 + size < argc) && argv[1 + size][0] != '\0')
		// argcの範囲チェック
		{
			if (argv[1 + size][0] > ((argc - 1) / 4) + '0') // 不正な引数のチェック
				return (-1);
			if (size < 200) // arrayのサイズチェック
			{
				array[size] = argv[1 + size][0]; // 数字を格納
				size++;
			}
		}
		rush(array, base, (argc - 1) / 4);
	}
	else
	{
		// 引数の数が間違っている場合
		write(1, "The number of arguments is wrong!!\n", 35);
	}
	return (0);
}
