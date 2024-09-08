/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:28:02 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/08 22:03:49 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	dr_pattern(int len, int type)
{
	char	end;
	char	mid;

	end = 'A';
	mid = 'B';
	if (type == 1)
	{
		end = 'B';
		mid = ' ';
	}
	if (type == 2)
		end = 'C';
	ft_putchar(end);
	while (--len >= 1)
	{
		if (len == 1)
		{
			ft_putchar(end);
			break ;
		}
		ft_putchar(mid);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	dr_pattern(x, 0);
	while (--y >= 1)
	{
		if (y == 1)
		{
			dr_pattern(x, 2);
			break ;
		}
		dr_pattern(x, 1);
	}
}
