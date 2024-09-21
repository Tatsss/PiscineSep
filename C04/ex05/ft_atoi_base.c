/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:16:32 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/21 23:32:49 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;
	int	n;

	count = 0;
	while (str[count])
	{
		n = count + 1;
		if (str[count] == '+' || str[count] == '-')
			return (-1);
		while (str[n])
		{
			if (str[count] == str[n])
				return (-1);
			n++;
		}
		count++;
	}
	return (count);
}

int	ft_atoi(char *str, int size, char *base)
{
	int	i;
	int	ans;
	int	negative;

	i = 0;
	ans = 0;
	negative = 1;
	while (base[i])
	{
		if (base[i] == str[i])
		{
			printf("base：%d\n", base[i]);
			printf("str[i]：%d\n", str[i]);
			printf("i：%d\n", i);
			return (i);
		}
		++i;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		ans = ans * size + (str[i] - '0');
		i++;
	}
	return (ans * negative);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	result;

	result = 0;
	size = ft_strlen(base);
	printf("長さ：%d\n", size);
	if (size >= 2)
	{
		result = ft_atoi(str, size, base);
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char	*base10;
	char	*base02;
	char	*base16;
	char	*base08;
	char	*nullcase;
	char	*oneletter;
	char	*sameletter;
	char	*plus;
	char	*value;

	base10 = "0123456789";
	base02 = "01";
	base16 = "0123456789abcdef";
	base08 = "poneyvif";
	nullcase = "";
	oneletter = "A";
	sameletter = "ponepvif";
	plus = "+-asfwunoe";
	value = "a12";
	// printf("%d", ft_atoi_base(value, base02));
	// printf("\n");
	// printf("%d", ft_atoi_base(value, base10));
	// printf("\n");
	// printf("%d", ft_atoi_base(value, base08));
	// printf("\n");
	printf("%d", ft_atoi_base(value, base16));
	// printf("\n");
	// printf("%d", ft_atoi_base(value, nullcase));
	// printf("\n");
	// printf("%d", ft_atoi_base(value, oneletter));
	// printf("\n");
	// printf("%d", ft_atoi_base(value, sameletter));
	// printf("\n");
	// printf("%d", ft_atoi_base(value, plus));
	return (0);
}
