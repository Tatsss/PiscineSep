/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 23:58:20 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/14 11:03:48 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (dest[count])
		count++;
	while (src[i] && i < nb)
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int	i;
	char			foo[5] = "Hello";
	char			bar[5] = "World";
	char			hoge[20] = "Hello";
	char			fuga[20] = "World";
	char			piyo[20] = "Hello";
	char			foo01[5] = "Hello";
	char			bar01[5] = "World";
	char			hogepiyo[20] = "World";
	char			hoge01[20] = "Hello";
	char			fuga01[20] = "World";
	char			piyo01[20] = "Hello";
	char			hogepiyo01[20] = "World";

	printf("連結前文字列：\t結合先：%s\t\t結合元：%s\n", hoge, fuga);
	strncat(hoge, fuga, 3);
	printf("連結後文字列：\t結合先：%s\t結合元：%s\n", hoge, fuga);
	printf("オーバーランテスト：\t結合先：%s\t結合元：%s\n", foo, bar);
	strncat(foo, bar, 3);
	printf("オーバーランテスト：\t結合先：%s\t結合元：%s\n", foo, bar);
	printf("NULL挙動確認：");
	strncat(piyo, hogepiyo, 8);
	i = 0;
	while (i < sizeof(piyo))
	{
		if (piyo[i] == '\0')
		{
			printf("N");
		}
		else
		{
			printf("%c", piyo[i]);
		}
		i++;
	}
	printf("\n\n");
	printf("連結前文字列：\t結合先：%s\t\t結合元：%s\n", hoge01, fuga01);
	ft_strncat(hoge01, fuga01, 3);
	printf("連結後文字列：\t結合先：%s\t結合元：%s\n", hoge01, fuga01);
	printf("オーバーランテスト：\t結合先：%s\t結合元：%s\n", foo01, bar01);
	ft_strncat(foo01, bar01, 3);
	printf("オーバーランテスト：\t結合先：%s\t結合元：%s\n", foo01, bar01);
	printf("NULL挙動確認：");
	ft_strncat(piyo01, hogepiyo01, 8);
	i = 0;
	while (i < sizeof(piyo01))
	{
		if (piyo01[i] == '\0')
		{
			printf("N");
		}
		else
		{
			printf("%c", piyo01[i]);
		}
		i++;
	}
	return (0);
}
