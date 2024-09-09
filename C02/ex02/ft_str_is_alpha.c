/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 23:54:14 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/09 09:49:51 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*only_uppercase;
	char	*only_lowercase;
	char	*only_jplettercase;
	char	*mixed_upperlowerjpcase;
	char	*nullcase;
	int		result;

	only_uppercase = "ABCDE";
	only_lowercase = "abcde";
	only_jplettercase = "あいうえお";
	mixed_upperlowerjpcase = "ABCdefあいう";
	nullcase = NULL;
	result = ft_str_is_alpha(only_uppercase);
	printf("大文字英字のみケース：ABCDE			出力結果：%d\n", result);
	result = ft_str_is_alpha(only_lowercase);
	printf("小文字英字のみケース：abcde			出力結果：%d\n", result);
	result = ft_str_is_alpha(only_jplettercase);
	printf("日本語文字のみケース：あいうえお		出力結果：%d\n", result);
	result = ft_str_is_alpha(mixed_upperlowerjpcase);
	printf("大小英字日本語混在ケース：ABCdefあいう		出力結果：%d\n", result);
	result = ft_str_is_alpha(nullcase);
	printf("空のケース：					出力結果：%d\n", result);
	return (0);
}
