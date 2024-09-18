/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:39:25 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/18 12:42:54 by tokuda           ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	return (dest ? ft_strcpy(dest, src) : dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*tab;
	int			i;
	int			j;

	tab = (s_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	if (tab)
		return (NULL);
	while (i < argc)
	{
		j = 0;
		while (av[i][j] != '\0')
			++j;
		tab[i].size_param = j;
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		++i;
	}
	tab[i].str = NULL;
	return (tab);
}

t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*arguments;

	arguments = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	if (!arguments)
		return (0);
	i = 0;
	while (i < ac)
	{
		arguments[i].size_param = ft_strlen(av[i]);
		arguments[i].str = av[i];
		arguments[i].copy = ft_strdup(av[i]);
		arguments[i].tab = ft_split_whitespaces(av[i]);
		++i;
	}
	arguments[i].str = 0;
	return (arguments);
}

char	*ft_strdup(char *src)
{
	int		index;
	int		mem_size;
	char	*new_string;

	mem_size = ft_strlen(src);
	index = 0;
	new_string = malloc(sizeof(char) * mem_size);
	if (!new_string)
		return (NULL);
	index = 0;
	while (src[index] != '\0')
	{
		new_string[index] = src[index];
		index++;
	}
	new_string[index] = '\0';
	return (new_string);
}

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		++i;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	return (dest ? ft_strcpy(dest, src) : dest);
}
