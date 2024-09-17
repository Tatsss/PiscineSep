/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:45:16 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/17 16:57:22 by tokuda           ###   ########.fr       */
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
