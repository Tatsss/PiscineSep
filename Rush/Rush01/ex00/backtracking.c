/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnagashi <hnagashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:46:32 by hnagashi          #+#    #+#             */
/*   Updated: 2024/09/14 18:18:20 by hnagashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 4

int		g_map[SIZE][SIZE];
int		g_colup[SIZE], g_coldown[SIZE], g_rowleft[SIZE], g_rowright[SIZE];

void	print_error(void)
{
	printf("Error\n");
	exit(1);
}

int	check_view(int *view, int *line)
{
	int	max;
	int	visible_boxes;

	max = 0;
	visible_boxes = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (line[i] > max)
		{
			max = line[i];
			visible_boxes++;
		}
	}
	return (visible_boxes == *view);
}

int	check_map(void)
{
	int	col[SIZE], row[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
			col[j] = g_map[j][i];
		if (!check_view(&g_colup[i], col))
			return (0);
		for (int j = 0; j < SIZE; j++)
			col[j] = g_map[SIZE - 1 - j][i];
		if (!check_view(&g_coldown[i], col))
			return (0);
	}
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
			row[j] = g_map[i][j];
		if (!check_view(&g_rowleft[i], row))
			return (0);
		for (int j = 0; j < SIZE; j++)
			row[j] = g_map[i][SIZE - 1 - j];
		if (!check_view(&g_rowright[i], row))
			return (0);
	}
	return (1);
}

int	solve(int row, int col)
{
	int	next_row;
	int	next_col;
	int	valid;

	if (row == SIZE)
	{
		if (check_map())
			return (1);
		return (0);
	}
	next_row = (col == SIZE - 1) ? row + 1 : row;
	next_col = (col + 1) % SIZE;
	for (int height = 1; height <= SIZE; height++)
	{
		valid = 1;
		for (int i = 0; i < SIZE; i++)
		{
			if (g_map[row][i] == height || g_map[i][col] == height)
			{
				valid = 0;
				break ;
			}
		}
		if (valid)
		{
			g_map[row][col] = height;
			if (solve(next_row, next_col))
				return (1);
			g_map[row][col] = 0;
		}
	}
	return (0);
}

void	parse_input(char *input)
{
	if (strlen(input) != 31)
		print_error();
	for (int i = 0; i < SIZE * 4; i++)
	{
		if (input[i * 2] < '1' || input[i * 2] > '4')
			print_error();
		if (i < SIZE)
			g_colup[i] = input[i * 2] - '0';
		else if (i < SIZE * 2)
			g_coldown[i - SIZE] = input[i * 2] - '0';
		else if (i < SIZE * 3)
			g_rowleft[i - SIZE * 2] = input[i * 2] - '0';
		else
			g_rowright[i - SIZE * 3] = input[i * 2] - '0';
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		print_error();
	parse_input(argv[1]);
	memset(g_map, 0, sizeof(g_map));
	if (solve(0, 0))
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
				printf("%d ", g_map[i][j]);
			printf("\n");
		}
	}
	else
	{
		print_error();
	}
	return (0);
}
