/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagashi <hnagashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:50:53 by hnagashi          #+#    #+#             */
/*   Updated: 2024/09/14 19:14:23 by hnagashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //消す
#include <unistd.h>

int	is_safe(int want, int base[9][9], int size, int x, int y)
{
	int xx, yy;
	// 行と列を確認
	for (yy = 0; yy < size; yy++)
	{
		if (base[x][yy] == want && y != yy)
			return (0); // 安全ではない
		if (base[yy][y] == want && x != yy)
			return (0); // 安全ではない
	}
	// 正常
	return (1);
}

void	print_solution(int base[9][9], int size)
{
	char	base2;

	int x, y;
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
	write(1, "End of Solution\n", 17); // デバッグ用
}

void	rush(char *data, int base[9][9], int size)
{
	int i, j, g;
	g = 0;
	while (g < 4)
	{
		i = 0;
		while (i < size)
		{
			if (data[g * size + i] == '1')
			{
				if (g == 0 && is_safe(size, base, size, 0, i))
					base[0][i] = size; // 上
				else if (g == 1 && is_safe(size, base, size, i, size - 1))
					base[i][size - 1] = size; // 右
				else if (g == 2 && is_safe(size, base, size, size - 1, i))
					base[size - 1][i] = size; // 下
				else if (g == 3 && is_safe(size, base, size, i, 0))
					base[i][0] = size; // 左
			}
			else if (data[g * size + i] == size + '0')
			{
				j = 0;
				while (j < size)
				{
					if (g == 0 && is_safe(j + 1, base, size, i, j))
						base[i][j] = j + 1; // 上
					else if (g == 1 && is_safe(j + 1, base, size, size - 1 - j,
							i))
						base[size - 1 - j][i] = j + 1; // 右
					else if (g == 2 && is_safe(j + 1, base, size, size - 1 - i,
							size - 1 - j))
						base[size - 1 - i][size - 1 - j] = j + 1; // 下
					else if (g == 3 && is_safe(j + 1, base, size, j, size - 1
							- i))
						base[j][size - 1 - i] = j + 1; // 左
					j++;
				}
			}
			i++;
		}
		g++;
	}
	print_solution(base, size); // sizeを渡す
}

int	main(int argc, char *argv[])
{
	char	array[200];
	int		base[9][9] = {0};
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
