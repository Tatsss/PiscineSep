/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:58:32 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/11 20:23:07 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (dest[count])
	{
		count++;
	}
	while (src[i])
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	hoge[20] = "Hello";
	char	fuga[20] = "World";
	char	foo[5] = "12345";
	char	bar[5] = "67890";
	char	baz[] = "";
	char	qux[] = "Hello";
	char	hoge01[20] = "Hello";
	char	fuga01[20] = "World";
	char	foo01[5] = "12345";
	char	bar01[5] = "67890";
	char	baz01[] = "";
	char	qux01[] = "Hello";

	printf("strcat関数 連結前文字列：\t結合先：%s\t\t結合元：%s\n", hoge, fuga);
	strcat(hoge, fuga);
	printf("strcat関数 連結後文字列：\t結合先：%s\t結合元：%s\n", hoge, fuga);
	printf("strcat関数 nullを追加：\t\t結合先：%s\t結合元：%s\n", qux, baz);
	strcat(qux, baz);
	printf("strcat関数 nullを追加：\t\t結合先：%s\t結合元：%s\n", qux, baz);
	printf("strcat関数 nullへ追加：\t\t結合先：%s\t結合元：%s\n", baz, qux);
	strcat(baz, qux);
	printf("strcat関数 nullへ追加：\t\t結合先：%s\t結合元：%s\n\n", baz, qux);
	printf("strcat関数 オーバーフローテスト：\t結合先：%s\t\t結合元：%s\n", foo, bar);
	strcat(foo, bar);
	printf("strcat関数 オーバーフローテスト：\t結合先：%s\t結合元：%s\n\n", foo, bar);
	printf("挙動確認　連結前文字列：\t結合先：%s\t\t結合元：%s\n", hoge01, fuga01);
	ft_strcat(hoge01, fuga01);
	printf("挙動確認　連結後文字列：\t結合先：%s\t結合元：%s\n", hoge01, fuga01);
	printf("挙動確認　nullを追加：\t\t結合先：%s\t結合元：%s\n", qux01, baz01);
	ft_strcat(qux01, baz01);
	printf("挙動確認　nullを追加：\t\t結合先：%s\t結合元：%s\n", qux01, baz01);
	printf("挙動確認　nullへ追加：\t\t結合先：%s\t結合元：%s\n", baz01, qux01);
	ft_strcat(baz01, qux01);
	printf("挙動確認　nullへ追加：\t\t結合先：%s\t結合元：%s\n\n", baz01, qux01);
	printf("挙動確認　オーバーフローテスト：\t結合先：%s\t\t結合元：%s\n", foo01, bar01);
	ft_strcat(foo01, bar01);
	printf("挙動確認　オーバーフローテスト：\t結合先：%s\t結合元：%s\n\n", foo01, bar01);
	return (0);
}
