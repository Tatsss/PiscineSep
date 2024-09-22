/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:16:32 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/22 19:21:08 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_baseno(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	ans;
	int	baseno;
	int	negative;
	int	size;

	i = 0;
	ans = 0;
	baseno = 0;
	negative = 1;
	size = ft_strlen(base);
	if (size >= 2)
	{
		if (str[0] == '-')
			negative *= -1;
		while (str[i])
		{
			baseno = check_baseno(str[i], base);
			if (baseno >= 0)
				ans = ans * size + baseno;
			i++;
		}
	}
	return (ans * negative);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*base10;
// 	char	*base02;
// 	char	*base16;
// 	char	*base08;
// 	char	*nullcase;
// 	char	*oneletter;
// 	char	*sameletter;
// 	char	*plus;
// 	char	*value;
// 	char	*value02;
// 	char	*value10;
// 	char	*value08;

// 	base10 = "0123456789";
// 	base02 = "01";
// 	base16 = "0123456789abcdef";
// 	base08 = "poneyvif";
// 	nullcase = "";
// 	oneletter = "A";
// 	sameletter = "ponepvif";
// 	plus = "+-asfwunoe";
// 	value = "a12";
// 	value02 = "11";
// 	value10 = "-89";
// 	value08 = "-fie";
// 	printf("%d", ft_atoi_base(value02, base02));
// 	printf("\n");
// 	printf("%d", ft_atoi_base(value10, base10));
// 	printf("\n");
// 	printf("%d", ft_atoi_base(value08, base08));
// 	printf("\n");
// 	printf("%d", ft_atoi_base(value, base16));
// 	printf("\n");
// 	printf("%d", ft_atoi_base(value, nullcase));
// 	printf("\n");
// 	printf("%d", ft_atoi_base(value, oneletter));
// 	printf("\n");
// 	printf("%d", ft_atoi_base(value, sameletter));
// 	printf("\n");
// 	printf("%d", ft_atoi_base(value, plus));
// 	return (0);
// }

// https://hogehoge.tk/tool/number.html
