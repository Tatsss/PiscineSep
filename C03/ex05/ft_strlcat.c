/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 00:01:49 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/14 14:51:27 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				destcount;
	int				srccount;

	i = 0;
	destcount = 0;
	srccount = 0;
	while (dest[destcount])
		destcount++;
	while (src[srccount])
		srccount++;
	while (i < size)
	{
		dest[destcount] = src[i];
		destcount++;
		i++;
	}
	dest[destcount] = '\0';
	return (destcount + srccount);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	hoge[20] = "Hello";
// 	char	fuga[20] = "World";
// 	char	foo[5] = "Hello";
// 	char	bar[5] = "World";
// 	int		i;

// 	printf("連結前文字列：\t結合先：%s\t結合元：%s\n", hoge, fuga);
// 	ft_strlcat(hoge, fuga, 3);
// 	printf("連結後文字列：\t結合先：%s\t結合元：%s\n", hoge, fuga);
// 	printf("オーバーランテスト前：\t結合先：%s\t結合元：%s\n", foo, bar);
// 	ft_strlcat(foo, bar, 8);
// 	printf("オーバーランテスト後：\t結合先：%s\t結合元：%s\n", foo, bar);
// 	printf("NULL挙動確認：\n");
// 	ft_strlcat(hoge, fuga, 8);
// 	i = 0;
// 	while (i < sizeof(hoge))
// 	{
// 		if (hoge[i] == '\0')
// 		{
// 			printf("N");
// 		}
// 		else
// 		{
// 			printf("%c", hoge[i]);
// 		}
// 		i++;
// 	}
// 	return (0);
// }
