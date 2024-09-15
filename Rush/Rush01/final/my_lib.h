/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:14:14 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/15 17:31:27 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_LIB_H
# define MY_LIB_H

# include <unistd.h>
# define SIZE 4

typedef struct PuzzleData
{
	int	map[SIZE][SIZE];
	int	colup[SIZE];
	int	coldown[SIZE];
	int	rowleft[SIZE];
	int	rowright[SIZE];
	int	board[SIZE][SIZE];
}		t_PuzzleData;

#endif

