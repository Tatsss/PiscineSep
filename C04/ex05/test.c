/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 23:14:11 by rariosa-          #+#    #+#             */
/*   Updated: 2024/09/21 23:32:31 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	g_size_base = 0;

int	check_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			printf("base：%d\n", base[i]);
			printf("c：%d\n", c);
			printf("i：%d\n", i);
			return (i);
		}
		++i;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;
	int	x;
	int	sign;

	i = 0;
	n = 0;
	x = 0;
	sign = 1;
	while (base[g_size_base] != '\0')
		++g_size_base;
	printf("長さ：%d\n", g_size_base);
	if (str[0] == '-')
	{
		sign = -1;
		++str;
	}
	while (str[i] != '\0')
	{
		x = check_in_base(str[i], base);
		printf("xサイズ：%d\n", x);
		if (x >= 0)
		{
			n = (n * g_size_base) + x;
		}
		++i;
	}
	return (n * sign);
}

int	main(void)
{
	printf("%i", ft_atoi_base("a12", "0123456789abcdef"));
}
