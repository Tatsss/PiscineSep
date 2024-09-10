/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:58:32 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/10 23:38:17 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	a;

	return (a);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	hoge[20] = "Hello";
	char	fuga[20] = "World";
	char	foo[5] = "Hello";
	char	bar[5] = "World";

	printf("連結前文字列：\t結合先：%s\t\t結合元：%s\n", hoge, fuga);
	strcat(hoge, fuga);
	printf("連結後文字列：\t結合先：%s\t結合元：%s\n", hoge, fuga);
	printf("オーバーランテスト：\t結合先：%s\t\t結合元：%s\n", foo, bar);
	strcat(foo, bar);
	printf("オーバーランテスト：\t結合先：%s\t結合元：%s", foo, bar);
	return (0);
}
