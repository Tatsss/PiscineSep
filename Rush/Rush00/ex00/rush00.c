/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:53:45 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/07 22:04:50 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	sh_headtail(int len)
{
	ft_putchar('o');
	while (--len >= 1)
	{
		if (len == 1)
		{
			ft_putchar('o');
			break ;
		}
		ft_putchar('-');
	}
	ft_putchar('\n');
}

void	sh_mid(int len)
{
	ft_putchar('|');
	while (--len >= 1)
	{
		if (len == 1)
		{
			ft_putchar('|');
			break ;
		}
		ft_putchar(' ');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x == 0)
		return ;
	sh_headtail(x);
	while (--y >= 1)
	{
		if (y == 1)
		{
			sh_headtail(x);
			break ;
		}
		sh_mid(x);
	}
}
