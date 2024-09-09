/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:06:12 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/09 17:59:54 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char hoge[] = "salut,
		comment tu vas
		? 42mots quarante - deux;
	cinquante + et +
		un ";
		// char	result;
		// char	*only_lowercase;
		// char	*mixed_upperlowercase;
		// char	*mixed_upperlowerjpcase;
		// char	*nullcase;
		// only_lowercase = "abcde";
		// mixed_upperlowercase = "ABCdef";
		// mixed_upperlowerjpcase = "ABCdefあいう";
		// nullcase = NULL;
		ft_strcapitalize(hoge);
	// ft_strcapitalize(fuga);
	printf("処理前文字列：%s\n", hoge);
	// printf("処理前文字列：%s\n", fuga);
	// printf("処理後文字列：%s", originalhoge);
	// printf("大文字英字のみケース：ABCDE			出力結果：%d\n", result);
	// result = ft_str_is_lowercase(only_lowercase);
	// printf("小文字英字のみケース：abcde			出力結果：%d\n", result);
	// result = ft_str_is_lowercase(mixed_upperlowercase);
	// printf("大小英字混在ケース：ABCdef			出力結果：%d\n", result);
	// result = ft_str_is_lowercase(mixed_upperlowerjpcase);
	// printf("大小英字日本語混在ケース：ABCdefあいう		出力結果：%d\n", result);
	// result = ft_str_is_lowercase(nullcase);
	// printf("空のケース：					出力結果：%d\n", result);
	return (0);
}
