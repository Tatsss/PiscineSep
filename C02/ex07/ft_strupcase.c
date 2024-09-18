/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 02:14:45 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/10 16:16:33 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
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

// #include <stdio.h>

// int	main(void)
// {
// 	char	only_uppercase[] = "ABCDE";
// 	char	only_lowercase[] = "abcde";
// 	char	mixed_upperlowercase[] = "ABCdef";
// 	char	mixed_upperlowernumbercase[] = "ABCdef012";
// 	char	nullcase[] = "";

// 	ft_strupcase(only_uppercase);
// 	printf("大文字英字のみケース：ABCDE			出力結果：%s\n", only_uppercase);
// 	ft_strupcase(only_lowercase);
// 	printf("小文字英字のみケース：abcde			出力結果：%s\n", only_lowercase);
// 	ft_strupcase(mixed_upperlowercase);
// 	printf("大小英字混在ケース：ABCdef			出力結果：%s\n", mixed_upperlowercase);
// 	ft_strupcase(mixed_upperlowernumbercase);
// 	printf("大小英字数値混在ケース：ABCdef012		出力結果：%s\n", mixed_upperlowernumbercase);
// 	ft_strupcase(nullcase);
// 	printf("空のケース：					出力結果：%s\n", nullcase);
// 	return (0);
// }
