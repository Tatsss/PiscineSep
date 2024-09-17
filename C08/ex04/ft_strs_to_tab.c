/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:39:25 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/17 20:18:22 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>

void	initialize_memset(t_stock_str *data)
{
	data->copy = 0;
	data->str = "\0";
	data->copy = "\0";
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*data;

	// 構造体の配列
	sizeof(t_stock_str) * (ft_strlen(ac) + 1);
	sizeof(t_stock_str);
	initialize_memset(&data);
	data->size = ac;
	data->str = av[0];
	printf("%s", data->str);
	// data->copy = ;
	return (data);
}

int	main(void)
{
	char	hoge[] = {"Hello", "World", "Welcome", "To", "Japan"};

	ft_strs_to_tab(5, hoge);
	return (0);
}
