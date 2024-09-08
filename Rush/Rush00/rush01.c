/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:28:02 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/08 21:41:45 by tokuda           ###   ########.fr       */
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

	head = '/';
	tail = '\\';
	mid = '*';
	if (type == 1)
	{
		head = '*';
		mid = ' ';
		tail = '*';
	}
	if (type == 2)
		ft_swap(&head, &tail);
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
}

void	rush(int x, int y)
{
	dr_pattern(x, 0);
	ft_putchar('\n');
	while (--y >= 1)
	{
		if (y == 1)
		{
			dr_pattern(x, 2);
			break ;
		}
		dr_pattern(x, 1);
		ft_putchar('\n');
	}
}
