/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:53:45 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/08 21:41:41 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	dr_pattern(int len, int type)
{
	char	head;
	char	mid;

	head = 'o';
	mid = '-';
	if (type == 1)
	{
		head = '|';
		mid = ' ';
	}
	ft_putchar(head);
	while (--len >= 1)
	{
		if (len == 1)
		{
			ft_putchar(head);
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
			dr_pattern(x, 0);
			break ;
		}
		dr_pattern(x, 1);
	}
}
