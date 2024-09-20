/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:39:25 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/20 19:07:31 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*temp;
	int		size;

	size = (sizeof(char) * (ft_strlen(src) + 1));
	temp = malloc(size);
	ft_strncpy(temp, src, size);
	return (temp);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*data;
	int			i;

	i = 0;
	data = malloc(sizeof(t_stock_str) * (ac + 1));
	if (data == NULL)
		return (NULL);
	while (i < ac)
	{
		data[i].size = ft_strlen(av[i]);
		data[i].str = av[i];
		data[i].copy = ft_strdup(av[i]);
		i++;
	}
	data[i].str = 0;
	return (data);
}

// int	main(void)
// {
// 	char				*hoge[] = {"ABC", "1234", "defgh"};
// 	struct s_stock_str	*result;
// 	int					i;

// 	i = 0;
// 	result = ft_strs_to_tab(3, hoge);
// 	while (result[i].str)
// 	{
// 		printf("%s\n", result[i].str);
// 		printf("%d\n", result[i].size);
// 		printf("%s\n", result[i].copy);
// 		printf("\n");
// 		i++;
// 	}
// 	return (0);
// }
