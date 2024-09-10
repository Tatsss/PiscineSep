/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 00:01:49 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/11 00:02:16 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
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
	char	*ptr;

	printf("連結前文字列：\t結合先：%s\t\t結合元：%s\n", hoge, fuga);
	ptr = strlcat(hoge, fuga, 3);
	printf("連結後文字列：\t結合先：%s\t結合元：%s\n", hoge, fuga);
	printf("オーバーランテスト：\t結合先：%s\t\t結合元：%s\n", foo, bar);
	ptr = strlcat(foo, bar, 3);
	printf("オーバーランテスト：\t結合先：%s\t結合元：%s", foo, bar);
	return (0);
}
