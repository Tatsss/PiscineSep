/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:45:16 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/18 12:43:24 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par)
{
}

int	main(void)
{
	char	hoge[] = {"Hello", "World", "Welcome", "To", "Japan"};

	ft_strs_to_tab(5, hoge);
	return (0);
}

void	ft_show_tab(struct s_stock_par *par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[i].tab[j])
		{
			ft_putstr(par[i].tab[j]);
			ft_putchar('\n');
			++j;
		}
		++i;
	}
}

void	ft_print_word_tables(char **tab)
{
	int	index;
	int	index2;

	index = 0;
	while (tab[index])
	{
		index2 = 0;
		while (tab[index][index2])
		{
			ft_putchar(tab[index][index2]);
			index2++;
		}
		ft_putchar('\n');
		index++;
	}
}

void	ft_show_tab(t_stock_par *par)
{
	int	index;
	int	sub_index;

	index = 0;
	while (par[index].str)
	{
		sub_index = 0;
		while (par[index].copy[sub_index])
		{
			ft_putchar(par[index].copy[sub_index]);
			sub_index++;
		}
		ft_putchar('\n');
		ft_putnbr(par[index].size_param);
		ft_putchar('\n');
		ft_print_word_tables(par[index].tab);
		index++;
	}
}
