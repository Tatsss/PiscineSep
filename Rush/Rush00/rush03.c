/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:28:02 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/08 22:03:39 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	dr_pattern(int len, int type)
{
	char	head;
	char	tail;
	char	mid;

	head = 'A';
	mid = 'B';
	tail = 'C';
	if (type == 1)
	{
		head = 'B';
		mid = ' ';
		tail = 'B';
	}
	ft_putchar(head);
	while (--len >= 1)
	{
		if (len == 1)
		{
			ft_putchar(tail);
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
