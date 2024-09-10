/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 00:56:45 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/10 16:13:09 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*only_uppercase;
// 	char	*only_lowercase;
// 	char	*mixed_upperlowercase;
// 	char	*mixed_upperlowerjpcase;
// 	char	*nullcase;
// 	int		result;

// 	only_uppercase = "ABCDE";
// 	only_lowercase = "abcde";
// 	mixed_upperlowercase = "ABCdef";
// 	mixed_upperlowerjpcase = "ABCdefあいう";
// 	nullcase = "";
// 	result = ft_str_is_lowercase(only_uppercase);
// 	printf("大文字英字のみケース：ABCDE			出力結果：%d\n", result);
// 	result = ft_str_is_lowercase(only_lowercase);
// 	printf("小文字英字のみケース：abcde			出力結果：%d\n", result);
// 	result = ft_str_is_lowercase(mixed_upperlowercase);
// 	printf("大小英字混在ケース：ABCdef			出力結果：%d\n", result);
// 	result = ft_str_is_lowercase(mixed_upperlowerjpcase);
// 	printf("大小英字日本語混在ケース：ABCdefあいう		出力結果：%d\n", result);
// 	result = ft_str_is_lowercase(nullcase);
// 	printf("空のケース：					出力結果：%d\n", result);
// 	return (0);
// }
