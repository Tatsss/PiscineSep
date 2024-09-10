/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:06:12 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/10 16:17:53 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	temp;

	i = 0;
	temp = '\0';
	while (str[i] != '\0')
	{
		if (temp <= '/' || (temp >= ':' && temp <= '@') || (temp >= '['
				&& temp <= '`') || temp >= '{')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		temp = str[i];
		i++;
	}
	return (str);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	ori_hoge[] = "salut, coHm tu vaSKf ? 42et ?ofa +qu-d/ux un";
// 	char	hoge[] = "salut, coHm tu vaSKf ? 42et ?ofa +qu-d/ux un";
// 	char	ori_fuga[] = "sa!ua&kt, c:ok>mhDD TEST va@lK?ff ?4A2e^tqu-d/uxj~an";
// 	char	fuga[] = "sa!ua&kt, c:ok>mhDD TEST va@lK?ff ?4A2e^tqu-d/uxj~an";
// 	char	nullcase[] = "";

// 	ft_strcapitalize(hoge);
// 	ft_strcapitalize(fuga);
// 	ft_strcapitalize(nullcase);
// 	printf("テスト01処理前文字列：%s\n", ori_hoge);
// 	printf("テスト01処理後文字列：%s\n", hoge);
// 	printf("テスト02処理後文字列：%s\n", ori_fuga);
// 	printf("テスト02処理後文字列：%s\n", fuga);
// 	printf("空欄ケース処理後文字列：%s\n", nullcase);
// 	return (0);
// }
