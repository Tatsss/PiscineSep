/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 00:25:55 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/09 02:10:14 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
			return (0);
		++i;
	}
	return (1);
}

int	main(void)
{
	char	*only_numbercase;
	char	*mixed_numberenlettercase;
	char	*mixed_upperlowerjpcase;
	char	*nullcase;
	int		result;

	only_numbercase = "0123456789";
	mixed_numberenlettercase = "0123abc";
	mixed_upperlowerjpcase = "ABCdefあいう";
	nullcase = NULL;
	result = ft_str_is_numeric(only_numbercase);
	printf("数字のみケース：0123456789			出力結果：%d\n", result);
	result = ft_str_is_numeric(mixed_numberenlettercase);
	printf("数字英字混在ケース：0123abc			出力結果：%d\n", result);
	result = ft_str_is_numeric(mixed_upperlowerjpcase);
	printf("大小英字日本語混在ケース：ABCdefあいう		出力結果：%d\n", result);
	result = ft_str_is_numeric(nullcase);
	printf("空のケース：					出力結果：%d\n", result);
	return (0);
}
