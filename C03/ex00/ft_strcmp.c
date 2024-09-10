/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:47:31 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/10 23:45:45 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	char	hoge;

	hoge = s1;
	hoge = s2;
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	original[] = "ABCDE";
	char	same[] = "ABCDE";
	char	diffoneup[] = "BBCDE";
	char	diffonedown[] = "@BCDEF";
	char	null[] = "\0";
	char	del[] = "\x7f";
	int		result;

	result = strcmp(original, same);
	printf("strcmp関数 同じケース\t\t\t：%d\t%s\n", result, same);
	result = strcmp(original, diffoneup);
	printf("strcmp関数 マイナスに異なるケース\t：%d\t%s\n", result, diffoneup);
	result = strcmp(original, diffonedown);
	printf("strcmp関数 プラスに異なるケース\t\t：%d\t%s\n", result, diffonedown);
	result = strcmp(del, null);
	printf("strcmp関数 最大値プラス\t\t\t：%d\t%s\n", result, null);
	result = strcmp(null, del);
	printf("strcmp関数 最小値マイナス\t\t：%d\n\n", result);
	// ft_strcmp(hoge, fuga);
	return (0);
}
